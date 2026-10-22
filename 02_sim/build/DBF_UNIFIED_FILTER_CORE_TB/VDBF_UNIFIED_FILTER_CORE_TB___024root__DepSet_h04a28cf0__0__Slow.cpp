// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDBF_UNIFIED_FILTER_CORE_TB.h for the primary calling header

#include "VDBF_UNIFIED_FILTER_CORE_TB__pch.h"
#include "VDBF_UNIFIED_FILTER_CORE_TB___024root.h"

VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_static(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_static\n"); );
}

VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_initial__TOP(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__clk = 0U;
}

VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_final(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root___dump_triggers__stl(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_phase__stl(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf);

VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_settle(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VDBF_UNIFIED_FILTER_CORE_TB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/IN_LOOP_FILTERS/DBF/DBF_UNIFIED_FILTER_CORE_TB.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VDBF_UNIFIED_FILTER_CORE_TB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root___dump_triggers__stl(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlWide<32>/*1023:0*/ VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0;
extern const VlUnpacked<CData/*0:0*/, 2048> VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__TABLE_hcb346562_0;
extern const VlUnpacked<CData/*7:0*/, 64> VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__TABLE_hd67de6cf_0;
extern const VlUnpacked<SData/*9:0*/, 128> VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__TABLE_h5ab686d4_0;
extern const VlUnpacked<CData/*2:0*/, 1024> VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__TABLE_hd2cfcd7f_0;
extern const VlUnpacked<CData/*2:0*/, 32> VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__TABLE_h19f16ed3_0;

VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root___stl_sequent__TOP__0(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root___stl_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*10:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*4:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    SData/*10:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    SData/*10:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*4:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    SData/*10:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*4:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    // Body
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_bypass = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_ext_signed 
        = (0x1fffU & ((((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[1U] 
                                   >> 0x10U)) - (0x3ffU 
                                                 & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[1U])) 
                       - (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0U] 
                                    >> 0x10U))) + (0x3ffU 
                                                   & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0U])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_ext_signed 
        = (0x1fffU & ((((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[6U]) 
                        - (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[6U] 
                                     >> 0x10U))) - 
                       (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[7U])) 
                      + (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[7U] 
                                   >> 0x10U))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_outer_signed 
        = (0x1fffU & ((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[2U]) 
                      - (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0U])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_outer_signed 
        = (0x1fffU & ((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[7U] 
                                 >> 0x10U)) - (0x3ffU 
                                               & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[5U] 
                                                  >> 0x10U))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_gap_signed 
        = (0x1fffU & ((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[3U] 
                                 >> 0x10U)) - (0x3ffU 
                                               & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[4U])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_ext_signed 
        = (0x1fffU & ((((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[9U] 
                                   >> 0x10U)) - (0x3ffU 
                                                 & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[9U])) 
                       - (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[8U] 
                                    >> 0x10U))) + (0x3ffU 
                                                   & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[8U])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_ext_signed 
        = (0x1fffU & ((((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xeU]) 
                        - (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xeU] 
                                     >> 0x10U))) - 
                       (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xfU])) 
                      + (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xfU] 
                                   >> 0x10U))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_outer_signed 
        = (0x1fffU & ((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xaU]) 
                      - (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[8U])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_outer_signed 
        = (0x1fffU & ((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xfU] 
                                 >> 0x10U)) - (0x3ffU 
                                               & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xdU] 
                                                  >> 0x10U))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_gap_signed 
        = (0x1fffU & ((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xbU] 
                                 >> 0x10U)) - (0x3ffU 
                                               & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xcU])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_ext_signed 
        = (0x1fffU & ((((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x11U] 
                                   >> 0x10U)) - (0x3ffU 
                                                 & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x11U])) 
                       - (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x10U] 
                                    >> 0x10U))) + (0x3ffU 
                                                   & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x10U])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_ext_signed 
        = (0x1fffU & ((((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x16U]) 
                        - (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x16U] 
                                     >> 0x10U))) - 
                       (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x17U])) 
                      + (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x17U] 
                                   >> 0x10U))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_outer_signed 
        = (0x1fffU & ((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x12U]) 
                      - (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x10U])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_outer_signed 
        = (0x1fffU & ((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x17U] 
                                 >> 0x10U)) - (0x3ffU 
                                               & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x15U] 
                                                  >> 0x10U))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_gap_signed 
        = (0x1fffU & ((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x13U] 
                                 >> 0x10U)) - (0x3ffU 
                                               & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x14U])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_ext_signed 
        = (0x1fffU & ((((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x19U] 
                                   >> 0x10U)) - (0x3ffU 
                                                 & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x19U])) 
                       - (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x18U] 
                                    >> 0x10U))) + (0x3ffU 
                                                   & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x18U])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_ext_signed 
        = (0x1fffU & ((((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1eU]) 
                        - (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1eU] 
                                     >> 0x10U))) - 
                       (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1fU])) 
                      + (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1fU] 
                                   >> 0x10U))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_outer_signed 
        = (0x1fffU & ((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1aU]) 
                      - (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x18U])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_outer_signed 
        = (0x1fffU & ((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1fU] 
                                 >> 0x10U)) - (0x3ffU 
                                               & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1dU] 
                                                  >> 0x10U))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_gap_signed 
        = (0x1fffU & ((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1bU] 
                                 >> 0x10U)) - (0x3ffU 
                                               & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1cU])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_short_dpq[0U] 
        = (0x1ffffU & ((0xffffU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short)) 
                       + (0xffffU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_short_dpq[1U] 
        = (0x1ffffU & ((0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short 
                                           >> 0x10U))) 
                       + (0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short 
                                             >> 0x10U)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_dpq[0U] 
        = (0x1ffffU & ((0xffffU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long)) 
                       + (0xffffU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_dpq[1U] 
        = (0x1ffffU & ((0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long 
                                           >> 0x10U))) 
                       + (0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long 
                                             >> 0x10U)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_short_spq[0U] 
        = (0x1ffffU & ((0xffffU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_short)) 
                       + (0xffffU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_short))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_short_spq[1U] 
        = (0x1ffffU & ((0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_short 
                                           >> 0x10U))) 
                       + (0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_short 
                                             >> 0x10U)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_spq[0U] 
        = (0x1ffffU & ((0xffffU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_long)) 
                       + (0xffffU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_long))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_spq[1U] 
        = (0x1ffffU & ((0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_long 
                                           >> 0x10U))) 
                       + (0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_long 
                                             >> 0x10U)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_short_dpq[0U] 
        = (0x1ffffU & ((0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short 
                                           >> 0x20U))) 
                       + (0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short 
                                             >> 0x20U)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_short_dpq[1U] 
        = (0x1ffffU & ((0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short 
                                           >> 0x30U))) 
                       + (0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short 
                                             >> 0x30U)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_long_dpq[0U] 
        = (0x1ffffU & ((0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long 
                                           >> 0x20U))) 
                       + (0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long 
                                             >> 0x20U)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_long_dpq[1U] 
        = (0x1ffffU & ((0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long 
                                           >> 0x30U))) 
                       + (0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long 
                                             >> 0x30U)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_short_spq[0U] 
        = (0x1ffffU & ((0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_short 
                                           >> 0x20U))) 
                       + (0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_short 
                                             >> 0x20U)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_short_spq[1U] 
        = (0x1ffffU & ((0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_short 
                                           >> 0x30U))) 
                       + (0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_short 
                                             >> 0x30U)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_long_spq[0U] 
        = (0x1ffffU & ((0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_long 
                                           >> 0x20U))) 
                       + (0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_long 
                                             >> 0x20U)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_long_spq[1U] 
        = (0x1ffffU & ((0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_long 
                                           >> 0x30U))) 
                       + (0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_long 
                                             >> 0x30U)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_signed 
        = (0x1fffU & ((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[2U]) 
                      - (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[3U] 
                                   >> 0x10U))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_signed 
        = (0x1fffU & ((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[5U] 
                                 >> 0x10U)) - (0x3ffU 
                                               & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[4U])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_signed 
        = (0x1fffU & ((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xaU]) 
                      - (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xbU] 
                                   >> 0x10U))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_signed 
        = (0x1fffU & ((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xdU] 
                                 >> 0x10U)) - (0x3ffU 
                                               & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xcU])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_signed 
        = (0x1fffU & ((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x12U]) 
                      - (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x13U] 
                                   >> 0x10U))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_signed 
        = (0x1fffU & ((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x15U] 
                                 >> 0x10U)) - (0x3ffU 
                                               & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x14U])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_signed 
        = (0x1fffU & ((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1aU]) 
                      - (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1bU] 
                                   >> 0x10U))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_signed 
        = (0x1fffU & ((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1dU] 
                                 >> 0x10U)) - (0x3ffU 
                                               & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1cU])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready = 0U;
    if ((0U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy = 0U;
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready = 1U;
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[1U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[2U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[3U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[4U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[5U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[6U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[7U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[8U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[9U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xaU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xbU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xcU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xdU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xeU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0xfU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x10U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x11U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x12U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x13U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x14U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x15U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x16U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x17U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x18U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x19U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_data_legal = 1U;
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0U] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0U] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[1U] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[1U] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[2U] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[2U] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[3U] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[3U] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[4U] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[4U] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[5U] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[5U] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[6U] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[6U] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[7U] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[7U] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_data_legal = 1U;
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[8U] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[8U] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[9U] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[9U] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xaU] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xaU] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xbU] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xbU] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xcU] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xcU] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xdU] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xdU] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xeU] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xeU] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xfU] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xfU] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_data_legal = 1U;
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x10U] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x10U] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x11U] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x11U] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x12U] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x12U] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x13U] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x13U] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x14U] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x14U] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x15U] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x15U] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x16U] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x16U] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x17U] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x17U] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_data_legal = 1U;
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x18U] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x18U] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x19U] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x19U] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1aU] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1aU] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1bU] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1bU] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1cU] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1cU] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1dU] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1dU] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1eU] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1eU] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (0x3fU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1fU] 
                         >> 0xaU)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    if ((0U != (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1fU] 
                >> 0x1aU))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_data_legal = 0U;
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[0U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[0U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[1U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[1U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[2U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[2U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[3U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[3U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[4U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[4U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[5U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[5U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[6U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[6U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[7U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[7U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample = 0U;
    if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[0U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate
            [0U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                     [0U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [0U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                            [0U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [0U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[0U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[0U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((2U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[0U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate
            [1U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                     [1U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [1U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                            [1U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [1U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[0U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[0U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((4U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[1U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate
            [2U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                     [2U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [2U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                            [2U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [2U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[1U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[1U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((8U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[1U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate
            [3U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                     [3U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [3U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                            [3U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [3U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[1U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[1U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x10U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[2U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate
            [4U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                     [4U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [4U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                            [4U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [4U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[2U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[2U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x20U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[2U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate
            [5U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                     [5U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [5U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                            [5U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [5U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[2U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[2U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x40U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[3U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate
            [6U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                     [6U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [6U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                            [6U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [6U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[3U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[3U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x80U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[3U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate
            [7U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                     [7U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [7U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                            [7U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [7U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[3U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[3U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x100U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[4U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate
            [8U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                     [8U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [8U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                            [8U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [8U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[4U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[4U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x200U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[4U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate
            [9U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                     [9U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [9U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                            [9U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [9U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[4U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[4U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x400U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[5U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate
            [0xaU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                     [0xaU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [0xaU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                            [0xaU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [0xaU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[5U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[5U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x800U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[5U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate
            [0xbU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                     [0xbU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [0xbU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                            [0xbU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [0xbU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[5U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[5U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x1000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[6U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate
            [0xcU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                     [0xcU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [0xcU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                            [0xcU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [0xcU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[6U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[6U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x2000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[6U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate
            [0xdU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                     [0xdU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [0xdU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                            [0xdU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [0xdU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[6U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[6U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x4000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[7U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate
            [0xeU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                     [0xeU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [0xeU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                            [0xeU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [0xeU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[7U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[7U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x8000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[7U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate
            [0xfU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                     [0xfU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [0xfU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                            [0xfU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit
                                [0xfU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[7U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data[7U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[0U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[0U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[1U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[1U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[2U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[2U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[3U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[3U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[4U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[4U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[5U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[5U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[6U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[6U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[7U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[7U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample = 0U;
    if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[0U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate
            [0U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                     [0U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [0U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                            [0U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [0U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[0U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[0U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((2U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[0U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate
            [1U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                     [1U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [1U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                            [1U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [1U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[0U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[0U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((4U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[1U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate
            [2U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                     [2U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [2U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                            [2U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [2U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[1U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[1U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((8U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[1U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate
            [3U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                     [3U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [3U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                            [3U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [3U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[1U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[1U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x10U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[2U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate
            [4U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                     [4U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [4U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                            [4U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [4U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[2U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[2U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x20U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[2U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate
            [5U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                     [5U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [5U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                            [5U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [5U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[2U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[2U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x40U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[3U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate
            [6U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                     [6U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [6U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                            [6U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [6U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[3U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[3U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x80U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[3U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate
            [7U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                     [7U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [7U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                            [7U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [7U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[3U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[3U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x100U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[4U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate
            [8U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                     [8U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [8U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                            [8U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [8U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[4U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[4U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x200U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[4U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate
            [9U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                     [9U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [9U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                            [9U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [9U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[4U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[4U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x400U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[5U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate
            [0xaU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                     [0xaU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [0xaU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                            [0xaU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [0xaU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[5U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[5U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x800U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[5U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate
            [0xbU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                     [0xbU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [0xbU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                            [0xbU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [0xbU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[5U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[5U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x1000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[6U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate
            [0xcU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                     [0xcU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [0xcU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                            [0xcU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [0xcU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[6U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[6U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x2000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[6U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate
            [0xdU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                     [0xdU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [0xdU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                            [0xdU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [0xdU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[6U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[6U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x4000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[7U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate
            [0xeU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                     [0xeU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [0xeU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                            [0xeU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [0xeU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[7U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[7U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x8000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[7U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate
            [0xfU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                     [0xfU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [0xfU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                            [0xfU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit
                                [0xfU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[7U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data[7U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[0U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[0U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[1U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[1U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[2U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[2U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[3U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[3U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[4U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[4U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[5U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[5U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[6U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[6U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[7U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[7U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample = 0U;
    if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[0U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate
            [0U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                     [0U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [0U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                            [0U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [0U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[0U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[0U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((2U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[0U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate
            [1U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                     [1U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [1U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                            [1U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [1U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[0U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[0U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((4U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[1U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate
            [2U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                     [2U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [2U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                            [2U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [2U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[1U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[1U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((8U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[1U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate
            [3U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                     [3U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [3U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                            [3U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [3U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[1U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[1U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x10U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[2U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate
            [4U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                     [4U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [4U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                            [4U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [4U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[2U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[2U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x20U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[2U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate
            [5U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                     [5U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [5U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                            [5U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [5U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[2U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[2U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x40U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[3U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate
            [6U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                     [6U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [6U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                            [6U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [6U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[3U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[3U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x80U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[3U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate
            [7U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                     [7U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [7U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                            [7U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [7U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[3U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[3U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x100U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[4U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate
            [8U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                     [8U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [8U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                            [8U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [8U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[4U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[4U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x200U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[4U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate
            [9U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                     [9U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [9U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                            [9U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [9U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[4U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[4U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x400U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[5U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate
            [0xaU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                     [0xaU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [0xaU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                            [0xaU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [0xaU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[5U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[5U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x800U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[5U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate
            [0xbU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                     [0xbU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [0xbU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                            [0xbU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [0xbU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[5U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[5U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x1000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[6U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate
            [0xcU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                     [0xcU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [0xcU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                            [0xcU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [0xcU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[6U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[6U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x2000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[6U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate
            [0xdU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                     [0xdU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [0xdU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                            [0xdU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [0xdU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[6U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[6U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x4000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[7U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate
            [0xeU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                     [0xeU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [0xeU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                            [0xeU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [0xeU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[7U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[7U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x8000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[7U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate
            [0xfU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                     [0xfU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [0xfU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                            [0xfU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit
                                [0xfU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[7U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data[7U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[0U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[0U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[1U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[1U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[2U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[2U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[3U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[3U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[4U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[4U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[5U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[5U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[6U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[6U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[7U] 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[7U];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample = 0U;
    if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[0U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate
            [0U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                     [0U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [0U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                            [0U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [0U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[0U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[0U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((2U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[0U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate
            [1U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                     [1U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [1U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                            [1U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [1U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[0U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[0U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((4U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[1U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate
            [2U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                     [2U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [2U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                            [2U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [2U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[1U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[1U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((8U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[1U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate
            [3U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                     [3U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [3U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                            [3U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [3U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[1U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[1U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x10U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[2U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate
            [4U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                     [4U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [4U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                            [4U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [4U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[2U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[2U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x20U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[2U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate
            [5U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                     [5U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [5U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                            [5U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [5U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[2U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[2U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x40U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[3U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate
            [6U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                     [6U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [6U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                            [6U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [6U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[3U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[3U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x80U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[3U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate
            [7U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                     [7U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [7U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                            [7U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [7U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[3U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[3U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x100U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[4U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate
            [8U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                     [8U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [8U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                            [8U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [8U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[4U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[4U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x200U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[4U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate
            [9U];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                     [9U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [9U]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                            [9U])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [9U]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[4U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[4U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x400U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[5U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate
            [0xaU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                     [0xaU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [0xaU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                            [0xaU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [0xaU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[5U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[5U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x800U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[5U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate
            [0xbU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                     [0xbU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [0xbU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                            [0xbU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [0xbU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[5U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[5U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x1000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[6U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate
            [0xcU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                     [0xcU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [0xcU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                            [0xcU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [0xcU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[6U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[6U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x2000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[6U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate
            [0xdU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                     [0xdU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [0xdU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                            [0xdU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [0xdU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[6U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[6U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    if ((0x4000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[7U]);
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate
            [0xeU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                     [0xeU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [0xeU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                            [0xeU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [0xeU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[7U] 
            = ((0xffff0000U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[7U]) 
               | (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample));
    }
    if ((0x8000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
            = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[7U] 
                         >> 0x10U));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate
            [0xfU];
        if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                       (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                     + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                     [0xfU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [0xfU]));
        } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate, 
                              (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                            - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                            [0xfU])))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate 
                = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original 
                                - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit
                                [0xfU]));
        }
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
            = (VL_GTS_III(24, 0U, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                ? 0U : (VL_LTS_III(24, 0x3ffU, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate)
                         ? 0x3ffU : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[7U] 
            = ((0xffffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data[7U]) 
               | (0x3ff0000U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample 
                                << 0x10U)));
    }
    __Vtableidx4 = (((0U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id)) 
                     << 0xaU) | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp) 
                                  << 7U) | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq) 
                                             << 4U) 
                                            | (((0U 
                                                 != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id)) 
                                                << 3U) 
                                               | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_mode)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mode_legal 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__TABLE_hcb346562_0
        [__Vtableidx4];
    __Vtableidx6 = (((0U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id)) 
                     << 0xaU) | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp) 
                                  << 7U) | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq) 
                                             << 4U) 
                                            | (((0U 
                                                 != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id)) 
                                                << 3U) 
                                               | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_mode)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mode_legal 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__TABLE_hcb346562_0
        [__Vtableidx6];
    __Vtableidx8 = (((0U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id)) 
                     << 0xaU) | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp) 
                                  << 7U) | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq) 
                                             << 4U) 
                                            | (((0U 
                                                 != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id)) 
                                                << 3U) 
                                               | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_mode)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mode_legal 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__TABLE_hcb346562_0
        [__Vtableidx8];
    __Vtableidx10 = (((0U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id)) 
                      << 0xaU) | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp) 
                                   << 7U) | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq) 
                                              << 4U) 
                                             | (((0U 
                                                  != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id)) 
                                                 << 3U) 
                                                | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_mode)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mode_legal 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__TABLE_hcb346562_0
        [__Vtableidx10];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_write_mask 
        = (((QData)((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_mask)) 
            << 0x30U) | (((QData)((IData)((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_mask) 
                                            << 0x10U) 
                                           | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_mask)))) 
                          << 0x10U) | (QData)((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_mask))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_p = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_q = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_p = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_q = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_p = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_q = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_p = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_q = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_ext 
        = (0x1fffU & (((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[1U]) 
                       - VL_SHIFTL_III(13,13,32, (0x3ffU 
                                                  & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[1U] 
                                                     >> 0x10U)), 1U)) 
                      + (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[2U])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_ext 
        = (0x1fffU & (((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[5U] 
                                  >> 0x10U)) - VL_SHIFTL_III(13,13,32, 
                                                             (0x3ffU 
                                                              & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[6U]), 1U)) 
                      + (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[6U] 
                                   >> 0x10U))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_ext 
        = (0x1fffU & (((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[9U]) 
                       - VL_SHIFTL_III(13,13,32, (0x3ffU 
                                                  & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[9U] 
                                                     >> 0x10U)), 1U)) 
                      + (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xaU])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_ext 
        = (0x1fffU & (((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xdU] 
                                  >> 0x10U)) - VL_SHIFTL_III(13,13,32, 
                                                             (0x3ffU 
                                                              & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xeU]), 1U)) 
                      + (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xeU] 
                                   >> 0x10U))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_ext 
        = (0x1fffU & (((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x11U]) 
                       - VL_SHIFTL_III(13,13,32, (0x3ffU 
                                                  & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x11U] 
                                                     >> 0x10U)), 1U)) 
                      + (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x12U])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_ext 
        = (0x1fffU & (((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x15U] 
                                  >> 0x10U)) - VL_SHIFTL_III(13,13,32, 
                                                             (0x3ffU 
                                                              & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x16U]), 1U)) 
                      + (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x16U] 
                                   >> 0x10U))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_ext 
        = (0x1fffU & (((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x19U]) 
                       - VL_SHIFTL_III(13,13,32, (0x3ffU 
                                                  & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x19U] 
                                                     >> 0x10U)), 1U)) 
                      + (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1aU])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_ext 
        = (0x1fffU & (((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1dU] 
                                  >> 0x10U)) - VL_SHIFTL_III(13,13,32, 
                                                             (0x3ffU 
                                                              & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1eU]), 1U)) 
                      + (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1eU] 
                                   >> 0x10U))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_p = 0ULL;
    if ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sp))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_p = 0x4a72eU;
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_p = 0x1471740a593bULL;
    } else if ((3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sp))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_p 
            = (0xa6U | (0x1ffe00U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_p));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_p 
            = (0x2d035ULL | (0x1ffffffe00000ULL & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_p));
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_q = 0ULL;
    if ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sq))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_q = 0x4a72eU;
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_q = 0x1471740a593bULL;
    } else if ((3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sq))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_q 
            = (0xa6U | (0x1ffe00U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_q));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_q 
            = (0x2d035ULL | (0x1ffffffe00000ULL & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_q));
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_p = 0ULL;
    if ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sp))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_p = 0x4a72eU;
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_p = 0x1471740a593bULL;
    } else if ((3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sp))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_p 
            = (0xa6U | (0x1ffe00U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_p));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_p 
            = (0x2d035ULL | (0x1ffffffe00000ULL & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_p));
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_q = 0ULL;
    if ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sq))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_q = 0x4a72eU;
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_q = 0x1471740a593bULL;
    } else if ((3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sq))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_q 
            = (0xa6U | (0x1ffe00U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_q));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_q 
            = (0x2d035ULL | (0x1ffffffe00000ULL & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_q));
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_p = 0ULL;
    if ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sp))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_p = 0x4a72eU;
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_p = 0x1471740a593bULL;
    } else if ((3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sp))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_p 
            = (0xa6U | (0x1ffe00U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_p));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_p 
            = (0x2d035ULL | (0x1ffffffe00000ULL & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_p));
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_q = 0ULL;
    if ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sq))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_q = 0x4a72eU;
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_q = 0x1471740a593bULL;
    } else if ((3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sq))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_q 
            = (0xa6U | (0x1ffe00U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_q));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_q 
            = (0x2d035ULL | (0x1ffffffe00000ULL & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_q));
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_p = 0ULL;
    if ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sp))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_p = 0x4a72eU;
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_p = 0x1471740a593bULL;
    } else if ((3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sp))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_p 
            = (0xa6U | (0x1ffe00U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_p));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_p 
            = (0x2d035ULL | (0x1ffffffe00000ULL & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_p));
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_q = 0ULL;
    if ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sq))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_q = 0x4a72eU;
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_q = 0x1471740a593bULL;
    } else if ((3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sq))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_q 
            = (0xa6U | (0x1ffe00U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_q));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_q 
            = (0x2d035ULL | (0x1ffffffe00000ULL & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_q));
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_qp_avg 
        = (0x7fU & VL_SHIFTR_III(7,7,32, (0x7fU & ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_qp_p) 
                                                    + (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_qp_q)))), 1U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_primitive_start 
        = ((1U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state)) 
           & ((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_current_state)) 
              & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_current_state))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_decision_in_valid 
        = ((2U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state)) 
           & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_current_state) 
              & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_current_state)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_s 
        = (0x1fffU & (((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[2U] 
                                  >> 0x10U)) - VL_SHIFTL_III(13,13,32, 
                                                             (0x3ffU 
                                                              & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[3U]), 1U)) 
                      + (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[3U] 
                                   >> 0x10U))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_s 
        = (0x1fffU & (((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[4U]) 
                       - VL_SHIFTL_III(13,13,32, (0x3ffU 
                                                  & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[4U] 
                                                     >> 0x10U)), 1U)) 
                      + (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[5U])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_s 
        = (0x1fffU & (((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xaU] 
                                  >> 0x10U)) - VL_SHIFTL_III(13,13,32, 
                                                             (0x3ffU 
                                                              & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xbU]), 1U)) 
                      + (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xbU] 
                                   >> 0x10U))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_s 
        = (0x1fffU & (((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xcU]) 
                       - VL_SHIFTL_III(13,13,32, (0x3ffU 
                                                  & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xcU] 
                                                     >> 0x10U)), 1U)) 
                      + (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xdU])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_s 
        = (0x1fffU & (((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x12U] 
                                  >> 0x10U)) - VL_SHIFTL_III(13,13,32, 
                                                             (0x3ffU 
                                                              & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x13U]), 1U)) 
                      + (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x13U] 
                                   >> 0x10U))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_s 
        = (0x1fffU & (((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x14U]) 
                       - VL_SHIFTL_III(13,13,32, (0x3ffU 
                                                  & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x14U] 
                                                     >> 0x10U)), 1U)) 
                      + (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x15U])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_s 
        = (0x1fffU & (((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1aU] 
                                  >> 0x10U)) - VL_SHIFTL_III(13,13,32, 
                                                             (0x3ffU 
                                                              & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1bU]), 1U)) 
                      + (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1bU] 
                                   >> 0x10U))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_s 
        = (0x1fffU & (((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1cU]) 
                       - VL_SHIFTL_III(13,13,32, (0x3ffU 
                                                  & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1cU] 
                                                     >> 0x10U)), 1U)) 
                      + (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1dU])));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_dep_threshold 
        = (0x3ffffU & VL_SHIFTR_III(18,18,32, (0x3ffffU 
                                               & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta) 
                                                  + 
                                                  VL_SHIFTR_III(18,18,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 1U))), 3U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_p_sum_short 
        = (0x3ffffU & ((0xffffU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short)) 
                       + (0xffffU & ((0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                      ? (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short 
                                                 >> 0x10U))
                                      : (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short 
                                                 >> 0x30U))))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_q_sum_short 
        = (0x3ffffU & ((0xffffU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short)) 
                       + (0xffffU & ((0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                      ? (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short 
                                                 >> 0x10U))
                                      : (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short 
                                                 >> 0x30U))))));
    vlSelf->__VdfgTmp_h5ebf49ef__0 = ((0x1ffffU & VL_SHIFTL_III(17,17,32, 
                                                                ((0xffffU 
                                                                  & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long)) 
                                                                 + 
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long))), 1U)) 
                                      < (0x1ffffU & 
                                         VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 4U)));
    vlSelf->__VdfgTmp_h0ea2b5a5__0 = ((1U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_bs)) 
                                      | (2U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_bs)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[0U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[4U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[1U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[4U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[2U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[5U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[3U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[5U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[4U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[6U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[5U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[6U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[6U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[7U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[7U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[7U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[0U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[3U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[1U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[3U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[2U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[2U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[3U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[2U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[4U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[1U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[5U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[1U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[6U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[0U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[7U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[0U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[0U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[4U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[1U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[4U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[2U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[5U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[3U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[5U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[4U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[6U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[5U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[6U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[6U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[7U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[7U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[7U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[0U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[3U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[1U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[3U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[2U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[2U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[3U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[2U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[4U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[1U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[5U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[1U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[6U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[0U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[7U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[0U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[0U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[4U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[1U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[4U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[2U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[5U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[3U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[5U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[4U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[6U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[5U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[6U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[6U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[7U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[7U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[7U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[0U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[3U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[1U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[3U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[2U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[2U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[3U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[2U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[4U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[1U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[5U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[1U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[6U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[0U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[7U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[0U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[0U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[4U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[1U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[4U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[2U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[5U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[3U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[5U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[4U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[6U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[5U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[6U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[6U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[7U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[7U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[7U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[0U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[3U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[1U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[3U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[2U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[2U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[3U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[2U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[4U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[1U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[5U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[1U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[6U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[0U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[7U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[0U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd3adf6f4__0 
        = ((0x1ffffU & ((0xffffU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_short)) 
                        + (0xffffU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_short)))) 
           < (0x1ffffU & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 3U)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd3aaa4e9__0 
        = ((0x1ffffU & VL_SHIFTL_III(17,17,32, ((0xffffU 
                                                 & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short)) 
                                                + (0xffffU 
                                                   & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short))), 1U)) 
           < (0x1ffffU & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 2U)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__0__KET____DOT__u_fo__O_IN_READY = 0U;
    if ((0U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_current_state))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__0__KET____DOT__u_fo__O_IN_READY = 1U;
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__1__KET____DOT__u_fo__O_IN_READY = 0U;
    if ((0U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_current_state))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__1__KET____DOT__u_fo__O_IN_READY = 1U;
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__2__KET____DOT__u_fo__O_IN_READY = 0U;
    if ((0U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_current_state))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__2__KET____DOT__u_fo__O_IN_READY = 1U;
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__3__KET____DOT__u_fo__O_IN_READY = 0U;
    if ((0U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_current_state))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__3__KET____DOT__u_fo__O_IN_READY = 1U;
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__0__KET____DOT__u_fo__O_OUT_VALID = 0U;
    if ((0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_current_state))) {
        if ((4U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_current_state))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__0__KET____DOT__u_fo__O_OUT_VALID = 1U;
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__1__KET____DOT__u_fo__O_OUT_VALID = 0U;
    if ((0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_current_state))) {
        if ((4U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_current_state))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__1__KET____DOT__u_fo__O_OUT_VALID = 1U;
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__2__KET____DOT__u_fo__O_OUT_VALID = 0U;
    if ((0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_current_state))) {
        if ((4U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_current_state))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__2__KET____DOT__u_fo__O_OUT_VALID = 1U;
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__3__KET____DOT__u_fo__O_OUT_VALID = 0U;
    if ((0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_current_state))) {
        if ((4U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_current_state))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__3__KET____DOT__u_fo__O_OUT_VALID = 1U;
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_thr2 
        = (0x1ffffU & VL_SHIFTR_III(17,17,32, (0x1ffffU 
                                               & (VL_SHIFTL_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 1U) 
                                                  + (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta))), 5U));
    vlSelf->__VdfgTmp_hadae4e9b__0 = ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask) 
                                      == ((0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                           ? 3U : 0xfU));
    vlSelf->__VdfgTmp_h480e084d__0 = ((1U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp)) 
                                      | ((3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp)) 
                                         | ((0U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id)) 
                                            & (7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp)))));
    vlSelf->__VdfgTmp_h7eeb7539__0 = ((1U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq)) 
                                      | ((3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq)) 
                                         | ((0U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id)) 
                                            & (7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_gap_thr 
        = (0x1ffffU & VL_SHIFTR_III(17,17,32, (0x1ffffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (VL_SHIFTL_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_tc), 2U) 
                                                   + (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_tc)))), 1U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_base 
        = (0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_signed))
                      ? (0x1fffU & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_signed)))
                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_signed)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_base 
        = (0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_signed))
                      ? (0x1fffU & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_signed)))
                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_signed)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_base 
        = (0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_signed))
                      ? (0x1fffU & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_signed)))
                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_signed)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_base 
        = (0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_signed))
                      ? (0x1fffU & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_signed)))
                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_signed)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_base 
        = (0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_signed))
                      ? (0x1fffU & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_signed)))
                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_signed)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_base 
        = (0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_signed))
                      ? (0x1fffU & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_signed)))
                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_signed)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_base 
        = (0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_signed))
                      ? (0x1fffU & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_signed)))
                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_signed)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_base 
        = (0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_signed))
                      ? (0x1fffU & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_signed)))
                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_signed)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_input_fire 
        = ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready) 
           & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_selector__DOT__w_active_write_mask = 0ULL;
    if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_selector__DOT__w_active_write_mask 
            = ((0xffffffffffff0000ULL & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_selector__DOT__w_active_write_mask) 
               | (IData)((IData)((0xffffU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_write_mask)))));
    }
    if ((2U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_selector__DOT__w_active_write_mask 
            = ((0xffffffff0000ffffULL & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_selector__DOT__w_active_write_mask) 
               | ((QData)((IData)((0xffffU & (IData)(
                                                     (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_write_mask 
                                                      >> 0x10U))))) 
                  << 0x10U));
    }
    if ((4U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_selector__DOT__w_active_write_mask 
            = ((0xffff0000ffffffffULL & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_selector__DOT__w_active_write_mask) 
               | ((QData)((IData)((0xffffU & (IData)(
                                                     (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_write_mask 
                                                      >> 0x20U))))) 
                  << 0x20U));
    }
    if ((8U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_selector__DOT__w_active_write_mask 
            = ((0xffffffffffffULL & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_selector__DOT__w_active_write_mask) 
               | ((QData)((IData)((0xffffU & (IData)(
                                                     (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_write_mask 
                                                      >> 0x30U))))) 
                  << 0x30U));
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_qp_beta_index_s 
        = (0x7ffU & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_qp_avg) 
                     + VL_SHIFTL_III(11,11,32, ((0x7c0U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_beta_offset_div2) 
                                                                   >> 5U)))) 
                                                    << 6U)) 
                                                | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_beta_offset_div2)), 1U)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_qp_tc_index_s 
        = (0x7ffU & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_qp_avg) 
                     + (((2U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_bs))
                          ? 2U : 0U) + VL_SHIFTL_III(11,11,32, 
                                                     ((0x7c0U 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_tc_offset_div2) 
                                                                         >> 5U)))) 
                                                          << 6U)) 
                                                      | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_tc_offset_div2)), 1U))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_in_fire 
        = ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_primitive_start) 
           & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_current_state)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_in_fire 
        = ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_primitive_start) 
           & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_current_state)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_in_fire 
        = ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_decision_in_valid) 
           & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_current_state)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_base 
        = (0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_s))
                      ? (0x1fffU & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_s)))
                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_s)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_base 
        = (0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_s))
                      ? (0x1fffU & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_s)))
                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_s)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_base 
        = (0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_s))
                      ? (0x1fffU & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_s)))
                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_s)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_base 
        = (0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_s))
                      ? (0x1fffU & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_s)))
                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_s)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_base 
        = (0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_s))
                      ? (0x1fffU & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_s)))
                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_s)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_base 
        = (0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_s))
                      ? (0x1fffU & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_s)))
                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_s)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_base 
        = (0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_s))
                      ? (0x1fffU & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_s)))
                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_s)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_base 
        = (0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_s))
                      ? (0x1fffU & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_s)))
                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_s)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_legal 
        = ((3U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id)) 
           & (IData)(vlSelf->__VdfgTmp_h0ea2b5a5__0));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_q = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_p = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_p1 = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_q1 = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_half_tc 
        = (0xffffffU & VL_SHIFTRS_III(24,24,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_tc), 1U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[0U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[0U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[1U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[0U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[2U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[1U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[3U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[1U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[4U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[2U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[5U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[2U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[6U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[3U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[7U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[3U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[8U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[4U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[9U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[4U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[0xaU] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[5U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[0xbU] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[5U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[0xcU] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[6U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[0xdU] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[6U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[0xeU] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[7U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[0xfU] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data[7U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_tc;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc10 
        = (0xffffffU & VL_MULS_III(24, (IData)(0xaU), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_raw_delta = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_ok = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_q = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_p = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_p1 = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_q1 = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_half_tc 
        = (0xffffffU & VL_SHIFTRS_III(24,24,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_tc), 1U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[0U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[0U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[1U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[0U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[2U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[1U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[3U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[1U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[4U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[2U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[5U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[2U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[6U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[3U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[7U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[3U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[8U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[4U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[9U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[4U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[0xaU] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[5U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[0xbU] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[5U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[0xcU] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[6U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[0xdU] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[6U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[0xeU] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[7U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[0xfU] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data[7U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_tc;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc10 
        = (0xffffffU & VL_MULS_III(24, (IData)(0xaU), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_raw_delta = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_ok = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_q = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_p = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_p1 = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_q1 = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_half_tc 
        = (0xffffffU & VL_SHIFTRS_III(24,24,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_tc), 1U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[0U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[0U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[1U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[0U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[2U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[1U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[3U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[1U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[4U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[2U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[5U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[2U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[6U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[3U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[7U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[3U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[8U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[4U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[9U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[4U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[0xaU] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[5U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[0xbU] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[5U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[0xcU] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[6U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[0xdU] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[6U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[0xeU] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[7U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[0xfU] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data[7U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_tc;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc10 
        = (0xffffffU & VL_MULS_III(24, (IData)(0xaU), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_raw_delta = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_ok = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_q = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_p = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_p1 = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_q1 = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_half_tc 
        = (0xffffffU & VL_SHIFTRS_III(24,24,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_tc), 1U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[0U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[0U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[1U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[0U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[2U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[1U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[3U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[1U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[4U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[2U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[5U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[2U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[6U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[3U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[7U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[3U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[8U] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[4U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[9U] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[4U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[0xaU] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[5U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[0xbU] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[5U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[0xcU] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[6U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[0xdU] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[6U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[0xeU] 
        = (0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[7U]);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[0xfU] 
        = (0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data[7U] 
                     >> 0x10U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_tc;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc10 
        = (0xffffffU & VL_MULS_III(24, (IData)(0xaU), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_raw_delta = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_ok = 1U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_in_ready 
        = (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__3__KET____DOT__u_fo__O_IN_READY) 
            << 3U) | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__2__KET____DOT__u_fo__O_IN_READY) 
                       << 2U) | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__1__KET____DOT__u_fo__O_IN_READY) 
                                  << 1U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__0__KET____DOT__u_fo__O_IN_READY))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_valid 
        = (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__3__KET____DOT__u_fo__O_OUT_VALID) 
            << 3U) | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__2__KET____DOT__u_fo__O_OUT_VALID) 
                       << 2U) | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__1__KET____DOT__u_fo__O_OUT_VALID) 
                                  << 1U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__0__KET____DOT__u_fo__O_OUT_VALID))));
    vlSelf->__VdfgTmp_h831910e8__0 = ((0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_long)) 
                                                   + 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_long)))) 
                                      < vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_thr2);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_legal 
        = ((3U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id)) 
           & ((IData)(vlSelf->__VdfgTmp_hadae4e9b__0) 
              & (((0U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_bs)) 
                  | (IData)(vlSelf->__VdfgTmp_h0ea2b5a5__0)) 
                 & ((IData)(vlSelf->__VdfgTmp_h480e084d__0) 
                    & ((~ ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_error) 
                           | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_error))) 
                       & (IData)(vlSelf->__VdfgTmp_h7eeb7539__0))))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_length_legal 
        = ((IData)(vlSelf->__VdfgTmp_h480e084d__0) 
           & (IData)(vlSelf->__VdfgTmp_h7eeb7539__0));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd0668443__0 
        = ((0xffffU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_boundary_gap)) 
           < vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_gap_thr);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT____VdfgTmp_h40c113d3__0 
        = ((0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_boundary_gap 
                               >> 0x10U))) < vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_gap_thr);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT____VdfgTmp_h40c113d3__0 
        = ((0xffffU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_boundary_gap 
                               >> 0x30U))) < vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_gap_thr);
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT____VdfgExtracted_hf14d50d3__0 
        = (VL_GTS_III(11, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_qp_beta_index_s))
            ? 0U : (VL_LTS_III(11, 0x3fU, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_qp_beta_index_s))
                     ? 0x3fU : (0x3fU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_qp_beta_index_s))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT____VdfgExtracted_h3ee4ed80__0 
        = (VL_GTS_III(11, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_qp_tc_index_s))
            ? 0U : (VL_LTS_III(11, 0x41U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_qp_tc_index_s))
                     ? 0x41U : (0x7fU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_qp_tc_index_s))));
    if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_current_state) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_next_state = 1U;
        if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_current_state) {
            if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_in_fire) {
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_next_state = 0U;
            }
        } else {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_next_state = 0U;
        }
    } else {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_next_state = 0U;
        if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_primitive_start) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_next_state = 1U;
        }
    }
    if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_current_state) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_next_state = 1U;
        if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_current_state) {
            if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_in_fire) {
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_next_state = 0U;
            }
        } else {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_next_state = 0U;
        }
    } else {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_next_state = 0U;
        if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_primitive_start) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_next_state = 1U;
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[0U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[1U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[2U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[3U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[4U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[5U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[6U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[7U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[8U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[9U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[0xaU] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[0xbU] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[0xcU] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[0xdU] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[0xeU] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[0xfU] = 0U;
    if (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_active) 
         & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_error)))) {
        if ((1U & (~ ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mode) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mode))) {
                if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mode))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk8__DOT__i = 7U;
                }
            }
        }
        if ((4U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mode))) {
            if ((1U & (~ ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mode) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mode))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk9__DOT__i = 0x10U;
                    if ((3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sp))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[7U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                    [3U] 
                                                                    + 
                                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                    [2U]) 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                   [1U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                              [0U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                 [0U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                [1U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                               [2U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[6U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              (((((VL_MULS_III(24, (IData)(2U), 
                                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                               [3U]) 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                   [2U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                              [1U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                 [0U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                [0U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                               [1U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[5U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((VL_MULS_III(24, (IData)(3U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                              [3U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                              [2U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                 [1U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                [0U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                               [0U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[8U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                    [3U] 
                                                                    + 
                                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                    [2U]) 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                   [1U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                              [0U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                 [0U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                [1U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                               [2U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[9U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              (((((VL_MULS_III(24, (IData)(2U), 
                                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                               [3U]) 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                   [2U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                              [1U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                 [0U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                [0U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                               [1U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[0xaU] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((VL_MULS_III(24, (IData)(3U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                              [3U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                              [2U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                 [1U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                [0U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                               [0U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask 
                            = (0x7e0U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask));
                    } else {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[7U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((VL_MULS_III(24, (IData)(3U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                              [1U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                              [0U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                 [0U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                [1U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                               [2U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[8U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              (((((VL_MULS_III(24, (IData)(2U), 
                                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                               [1U]) 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                   [0U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                              [0U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                 [1U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                [2U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                               [3U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[9U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              (((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                   [1U] 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                   [0U]) 
                                                                  + 
                                                                  vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                  [0U]) 
                                                                 + 
                                                                 VL_MULS_III(24, (IData)(2U), 
                                                                             vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                             [1U])) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                [2U]) 
                                                               + 
                                                               VL_MULS_III(24, (IData)(2U), 
                                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                           [3U])))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[0xaU] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                  [0U] 
                                                                  + 
                                                                  vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                  [0U]) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                 [1U]) 
                                                                + 
                                                                VL_MULS_III(24, (IData)(2U), 
                                                                            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                            [2U])) 
                                                               + 
                                                               VL_MULS_III(24, (IData)(3U), 
                                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                           [3U])))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask 
                            = (0x780U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask));
                    }
                    if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[0U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((2U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[1U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((4U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[2U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((8U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[3U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x10U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[4U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x20U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[5U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x40U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[6U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x80U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[7U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x100U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[8U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x200U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[9U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x400U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[0xaU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x800U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[0xbU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x1000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[0xcU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x2000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[0xdU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x4000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[0xeU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x8000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[0xfU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                } else {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[7U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                        [0U] + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_delta));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[8U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                        [0U] - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_delta));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[7U] = 0x7ffU;
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask 
                        = (0x180U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[8U] = 0x7ffU;
                }
            }
        } else if ((2U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mode))) {
            if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mode))) {
                if (VL_LTS_III(32, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_p));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[7U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_p);
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[7U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask 
                        = (0x80U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_q));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[8U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_q);
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[8U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask 
                        = (0x100U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 1U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 7U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[6U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 3U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[6U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask 
                        = (0x40U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 1U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 7U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[9U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 3U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[9U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask 
                        = (0x200U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 2U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 0xeU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[5U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 6U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[5U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask 
                        = (0x20U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 2U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 0xeU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[0xaU] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 6U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[0xaU] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask 
                        = (0x400U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 3U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 0x15U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[4U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 9U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[4U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask 
                        = (0x10U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 3U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 0x15U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[0xbU] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 9U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[0xbU] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask 
                        = (0x800U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 4U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 0x1cU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[3U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 0xcU));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[3U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask 
                        = (8U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 4U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 0x1cU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[0xcU] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 0xcU));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[0xcU] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask 
                        = (0x1000U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 5U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 0x23U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[2U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 0xfU));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[2U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask 
                        = (4U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 5U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 0x23U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[0xdU] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 0xfU));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[0xdU] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask 
                        = (0x2000U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 6U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 0x2aU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[1U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 0x12U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[1U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask 
                        = (2U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 6U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 0x2aU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[0xeU] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 0x12U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[0xeU] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask 
                        = (0x4000U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask));
                }
            } else {
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[7U] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                          [2U] 
                                                          + 
                                                          VL_MULS_III(24, (IData)(2U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                      [1U])) 
                                                         + 
                                                         VL_MULS_III(24, (IData)(2U), 
                                                                     vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                     [0U])) 
                                                        + 
                                                        VL_MULS_III(24, (IData)(2U), 
                                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                    [0U])) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                       [1U]))), 3U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[6U] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                         [2U] 
                                                         + 
                                                         vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                         [1U]) 
                                                        + 
                                                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                        [0U]) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                       [0U]))), 2U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[5U] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((((VL_MULS_III(24, (IData)(2U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                      [3U]) 
                                                          + 
                                                          VL_MULS_III(24, (IData)(3U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                      [2U])) 
                                                         + 
                                                         vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                         [1U]) 
                                                        + 
                                                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                        [0U]) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                       [0U]))), 3U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[8U] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                          [2U] 
                                                          + 
                                                          VL_MULS_III(24, (IData)(2U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                      [1U])) 
                                                         + 
                                                         VL_MULS_III(24, (IData)(2U), 
                                                                     vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                     [0U])) 
                                                        + 
                                                        VL_MULS_III(24, (IData)(2U), 
                                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                    [0U])) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                       [1U]))), 3U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[9U] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                         [2U] 
                                                         + 
                                                         vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                         [1U]) 
                                                        + 
                                                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                        [0U]) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                       [0U]))), 2U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[0xaU] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((((VL_MULS_III(24, (IData)(2U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                      [3U]) 
                                                          + 
                                                          VL_MULS_III(24, (IData)(3U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                      [2U])) 
                                                         + 
                                                         vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                         [1U]) 
                                                        + 
                                                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                        [0U]) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                       [0U]))), 3U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[7U] 
                    = (0xffffffU & VL_MULS_III(24, (IData)(3U), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask 
                    = (0x7e0U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[8U] 
                    = (0xffffffU & VL_MULS_III(24, (IData)(3U), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[6U] 
                    = (0xffffffU & VL_MULS_III(24, (IData)(2U), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[9U] 
                    = (0xffffffU & VL_MULS_III(24, (IData)(2U), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[5U] 
                    = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext;
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[0xaU] 
                    = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext;
            }
        } else if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mode))) {
            if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_delta_ok) {
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[7U] 
                    = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                    [0U] + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_delta));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[8U] 
                    = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                    [0U] - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_delta));
                if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_dep) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_p1 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & ((VL_SHIFTRS_III(24,24,32, 
                                                                          (0xffffffU 
                                                                           & ((IData)(1U) 
                                                                              + 
                                                                              (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                               [2U] 
                                                                               + 
                                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                               [0U]))), 1U) 
                                                           - 
                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                           [1U]) 
                                                          + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_delta)), 1U));
                    if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_p1, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_half_tc)) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_p1 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_half_tc;
                    } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_p1, 
                                          (0xffffffU 
                                           & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_half_tc)))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_p1 
                            = (0xffffffU & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_half_tc));
                    }
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[6U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                        [1U] + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_p1));
                }
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[7U] = 0x7ffU;
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[8U] = 0x7ffU;
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask 
                    = (0x180U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask));
                if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_dep) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[6U] = 0x7ffU;
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask 
                        = (0x40U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask));
                }
                if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_deq) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_q1 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & ((VL_SHIFTRS_III(24,24,32, 
                                                                          (0xffffffU 
                                                                           & ((IData)(1U) 
                                                                              + 
                                                                              (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                               [2U] 
                                                                               + 
                                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                               [0U]))), 1U) 
                                                           - 
                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                           [1U]) 
                                                          - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_delta)), 1U));
                    if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_q1, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_half_tc)) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_q1 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_half_tc;
                    } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_q1, 
                                          (0xffffffU 
                                           & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_half_tc)))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_q1 
                            = (0xffffffU & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_half_tc));
                    }
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[9U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                        [1U] + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_q1));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[9U] = 0x7ffU;
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask 
                        = (0x200U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask));
                }
            }
        }
        if ((1U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mode))) {
            if ((4U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mode))) {
                if ((3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mode))) {
                    if ((0x3fU != (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sp) 
                                    << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sq)))) {
                        if ((0x3bU == (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sp) 
                                        << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sq)))) {
                            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk3__DOT__i = 7U;
                            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk4__DOT__i = 3U;
                        }
                        if ((0x3bU != (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sp) 
                                        << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sq)))) {
                            if ((0x1fU == (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sp) 
                                            << 3U) 
                                           | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sq)))) {
                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk5__DOT__i = 7U;
                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk6__DOT__i = 3U;
                            }
                        }
                    }
                    if ((0x3fU == (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sp) 
                                    << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sq)))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk2__DOT__i = 7U;
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((IData)(8U) 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          (0xffffffU 
                                                           & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                              [0U] 
                                                              + 
                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                              [0U])))));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                             [1U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                            [1U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                             [2U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                            [2U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                             [3U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                            [3U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                             [4U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                            [4U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                             [5U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                            [5U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                             [6U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                            [6U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum, 4U));
                    } else if ((0x3bU == (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sp) 
                                           << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sq)))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((IData)(8U) 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                          [0U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                            [1U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                            [2U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                            [3U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                            [4U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                            [5U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                            [6U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                          [0U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                          [1U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                          [2U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                             [0U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                            [1U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum, 4U));
                    } else if ((0x1fU == (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sp) 
                                           << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sq)))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((IData)(8U) 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                          [0U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                            [1U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                            [2U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                            [3U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                            [4U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                            [5U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                            [6U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                          [0U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                          [1U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                          [2U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                             [0U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                            [1U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum, 4U));
                    } else {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m = 0U;
                    }
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_q 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                           [vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sq] 
                                                           + 
                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                           [
                                                           (7U 
                                                            & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sq) 
                                                               - (IData)(1U)))]))), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_p 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                           [vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sp] 
                                                           + 
                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                           [
                                                           (7U 
                                                            & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sp) 
                                                               - (IData)(1U)))]))), 1U));
                }
            }
        }
        if ((1U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mode))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_raw_delta 
                = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                              (0xffffffU 
                                               & ((IData)(8U) 
                                                  + 
                                                  (VL_MULS_III(24, (IData)(9U), 
                                                               (0xffffffU 
                                                                & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                   [0U] 
                                                                   - 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                   [0U]))) 
                                                   - 
                                                   VL_MULS_III(24, (IData)(3U), 
                                                               (0xffffffU 
                                                                & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                   [1U] 
                                                                   - 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                   [1U])))))), 4U));
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_ok 
                = (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_raw_delta, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc10) 
                   & VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_raw_delta, 
                                (0xffffffU & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc10))));
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta 
                = (0xffffffU & (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_raw_delta, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext)
                                 ? vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext
                                 : (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_raw_delta, 
                                               (0xffffffU 
                                                & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext)))
                                     ? (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext)
                                     : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_raw_delta)));
        } else if ((4U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mode))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_raw_delta 
                = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                              (0xffffffU 
                                               & ((IData)(4U) 
                                                  + 
                                                  ((VL_SHIFTL_III(24,24,32, 
                                                                  (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                                   [0U] 
                                                                   - 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                                   [0U]), 2U) 
                                                    + 
                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p
                                                    [1U]) 
                                                   - 
                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q
                                                   [1U]))), 4U));
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta 
                = (0xffffffU & (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_raw_delta, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext)
                                 ? vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext
                                 : (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_raw_delta, 
                                               (0xffffffU 
                                                & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext)))
                                     ? (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext)
                                     : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_raw_delta)));
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[0U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[1U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[2U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[3U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[4U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[5U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[6U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[7U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[8U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[9U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[0xaU] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[0xbU] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[0xcU] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[0xdU] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[0xeU] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[0xfU] = 0U;
    if (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_active) 
         & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_error)))) {
        if ((1U & (~ ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mode) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mode))) {
                if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mode))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk8__DOT__i = 7U;
                }
            }
        }
        if ((4U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mode))) {
            if ((1U & (~ ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mode) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mode))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk9__DOT__i = 0x10U;
                    if ((3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sp))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[7U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                    [3U] 
                                                                    + 
                                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                    [2U]) 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                   [1U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                              [0U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                 [0U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                [1U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                               [2U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[6U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              (((((VL_MULS_III(24, (IData)(2U), 
                                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                               [3U]) 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                   [2U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                              [1U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                 [0U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                [0U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                               [1U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[5U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((VL_MULS_III(24, (IData)(3U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                              [3U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                              [2U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                 [1U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                [0U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                               [0U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[8U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                    [3U] 
                                                                    + 
                                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                    [2U]) 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                   [1U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                              [0U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                 [0U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                [1U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                               [2U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[9U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              (((((VL_MULS_III(24, (IData)(2U), 
                                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                               [3U]) 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                   [2U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                              [1U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                 [0U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                [0U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                               [1U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[0xaU] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((VL_MULS_III(24, (IData)(3U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                              [3U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                              [2U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                 [1U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                [0U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                               [0U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask 
                            = (0x7e0U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask));
                    } else {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[7U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((VL_MULS_III(24, (IData)(3U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                              [1U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                              [0U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                 [0U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                [1U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                               [2U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[8U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              (((((VL_MULS_III(24, (IData)(2U), 
                                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                               [1U]) 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                   [0U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                              [0U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                 [1U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                [2U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                               [3U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[9U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              (((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                   [1U] 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                   [0U]) 
                                                                  + 
                                                                  vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                  [0U]) 
                                                                 + 
                                                                 VL_MULS_III(24, (IData)(2U), 
                                                                             vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                             [1U])) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                [2U]) 
                                                               + 
                                                               VL_MULS_III(24, (IData)(2U), 
                                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                           [3U])))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[0xaU] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                  [0U] 
                                                                  + 
                                                                  vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                  [0U]) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                 [1U]) 
                                                                + 
                                                                VL_MULS_III(24, (IData)(2U), 
                                                                            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                            [2U])) 
                                                               + 
                                                               VL_MULS_III(24, (IData)(3U), 
                                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                           [3U])))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask 
                            = (0x780U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask));
                    }
                    if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[0U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((2U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[1U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((4U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[2U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((8U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[3U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x10U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[4U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x20U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[5U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x40U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[6U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x80U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[7U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x100U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[8U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x200U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[9U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x400U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[0xaU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x800U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[0xbU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x1000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[0xcU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x2000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[0xdU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x4000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[0xeU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x8000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[0xfU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                } else {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[7U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                        [0U] + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_delta));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[8U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                        [0U] - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_delta));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[7U] = 0x7ffU;
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask 
                        = (0x180U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[8U] = 0x7ffU;
                }
            }
        } else if ((2U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mode))) {
            if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mode))) {
                if (VL_LTS_III(32, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_p));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[7U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_p);
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[7U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask 
                        = (0x80U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_q));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[8U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_q);
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[8U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask 
                        = (0x100U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 1U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 7U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[6U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 3U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[6U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask 
                        = (0x40U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 1U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 7U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[9U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 3U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[9U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask 
                        = (0x200U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 2U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 0xeU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[5U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 6U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[5U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask 
                        = (0x20U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 2U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 0xeU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[0xaU] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 6U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[0xaU] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask 
                        = (0x400U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 3U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 0x15U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[4U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 9U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[4U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask 
                        = (0x10U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 3U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 0x15U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[0xbU] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 9U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[0xbU] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask 
                        = (0x800U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 4U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 0x1cU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[3U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 0xcU));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[3U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask 
                        = (8U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 4U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 0x1cU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[0xcU] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 0xcU));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[0xcU] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask 
                        = (0x1000U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 5U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 0x23U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[2U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 0xfU));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[2U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask 
                        = (4U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 5U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 0x23U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[0xdU] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 0xfU));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[0xdU] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask 
                        = (0x2000U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 6U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 0x2aU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[1U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 0x12U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[1U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask 
                        = (2U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 6U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 0x2aU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[0xeU] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 0x12U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[0xeU] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask 
                        = (0x4000U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask));
                }
            } else {
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[7U] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                          [2U] 
                                                          + 
                                                          VL_MULS_III(24, (IData)(2U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                      [1U])) 
                                                         + 
                                                         VL_MULS_III(24, (IData)(2U), 
                                                                     vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                     [0U])) 
                                                        + 
                                                        VL_MULS_III(24, (IData)(2U), 
                                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                    [0U])) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                       [1U]))), 3U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[6U] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                         [2U] 
                                                         + 
                                                         vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                         [1U]) 
                                                        + 
                                                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                        [0U]) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                       [0U]))), 2U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[5U] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((((VL_MULS_III(24, (IData)(2U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                      [3U]) 
                                                          + 
                                                          VL_MULS_III(24, (IData)(3U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                      [2U])) 
                                                         + 
                                                         vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                         [1U]) 
                                                        + 
                                                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                        [0U]) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                       [0U]))), 3U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[8U] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                          [2U] 
                                                          + 
                                                          VL_MULS_III(24, (IData)(2U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                      [1U])) 
                                                         + 
                                                         VL_MULS_III(24, (IData)(2U), 
                                                                     vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                     [0U])) 
                                                        + 
                                                        VL_MULS_III(24, (IData)(2U), 
                                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                    [0U])) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                       [1U]))), 3U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[9U] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                         [2U] 
                                                         + 
                                                         vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                         [1U]) 
                                                        + 
                                                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                        [0U]) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                       [0U]))), 2U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[0xaU] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((((VL_MULS_III(24, (IData)(2U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                      [3U]) 
                                                          + 
                                                          VL_MULS_III(24, (IData)(3U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                      [2U])) 
                                                         + 
                                                         vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                         [1U]) 
                                                        + 
                                                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                        [0U]) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                       [0U]))), 3U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[7U] 
                    = (0xffffffU & VL_MULS_III(24, (IData)(3U), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask 
                    = (0x7e0U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[8U] 
                    = (0xffffffU & VL_MULS_III(24, (IData)(3U), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[6U] 
                    = (0xffffffU & VL_MULS_III(24, (IData)(2U), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[9U] 
                    = (0xffffffU & VL_MULS_III(24, (IData)(2U), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[5U] 
                    = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext;
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[0xaU] 
                    = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext;
            }
        } else if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mode))) {
            if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_delta_ok) {
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[7U] 
                    = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                    [0U] + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_delta));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[8U] 
                    = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                    [0U] - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_delta));
                if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_dep) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_p1 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & ((VL_SHIFTRS_III(24,24,32, 
                                                                          (0xffffffU 
                                                                           & ((IData)(1U) 
                                                                              + 
                                                                              (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                               [2U] 
                                                                               + 
                                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                               [0U]))), 1U) 
                                                           - 
                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                           [1U]) 
                                                          + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_delta)), 1U));
                    if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_p1, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_half_tc)) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_p1 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_half_tc;
                    } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_p1, 
                                          (0xffffffU 
                                           & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_half_tc)))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_p1 
                            = (0xffffffU & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_half_tc));
                    }
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[6U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                        [1U] + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_p1));
                }
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[7U] = 0x7ffU;
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[8U] = 0x7ffU;
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask 
                    = (0x180U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask));
                if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_dep) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[6U] = 0x7ffU;
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask 
                        = (0x40U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask));
                }
                if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_deq) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_q1 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & ((VL_SHIFTRS_III(24,24,32, 
                                                                          (0xffffffU 
                                                                           & ((IData)(1U) 
                                                                              + 
                                                                              (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                               [2U] 
                                                                               + 
                                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                               [0U]))), 1U) 
                                                           - 
                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                           [1U]) 
                                                          - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_delta)), 1U));
                    if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_q1, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_half_tc)) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_q1 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_half_tc;
                    } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_q1, 
                                          (0xffffffU 
                                           & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_half_tc)))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_q1 
                            = (0xffffffU & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_half_tc));
                    }
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[9U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                        [1U] + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_q1));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[9U] = 0x7ffU;
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask 
                        = (0x200U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask));
                }
            }
        }
        if ((1U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mode))) {
            if ((4U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mode))) {
                if ((3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mode))) {
                    if ((0x3fU != (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sp) 
                                    << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sq)))) {
                        if ((0x3bU == (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sp) 
                                        << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sq)))) {
                            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk3__DOT__i = 7U;
                            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk4__DOT__i = 3U;
                        }
                        if ((0x3bU != (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sp) 
                                        << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sq)))) {
                            if ((0x1fU == (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sp) 
                                            << 3U) 
                                           | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sq)))) {
                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk5__DOT__i = 7U;
                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk6__DOT__i = 3U;
                            }
                        }
                    }
                    if ((0x3fU == (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sp) 
                                    << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sq)))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk2__DOT__i = 7U;
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((IData)(8U) 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          (0xffffffU 
                                                           & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                              [0U] 
                                                              + 
                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                              [0U])))));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                             [1U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                            [1U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                             [2U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                            [2U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                             [3U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                            [3U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                             [4U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                            [4U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                             [5U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                            [5U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                             [6U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                            [6U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum, 4U));
                    } else if ((0x3bU == (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sp) 
                                           << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sq)))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((IData)(8U) 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                          [0U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                            [1U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                            [2U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                            [3U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                            [4U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                            [5U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                            [6U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                          [0U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                          [1U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                          [2U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                             [0U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                            [1U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum, 4U));
                    } else if ((0x1fU == (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sp) 
                                           << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sq)))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((IData)(8U) 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                          [0U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                            [1U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                            [2U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                            [3U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                            [4U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                            [5U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                            [6U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                          [0U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                          [1U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                          [2U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                             [0U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                            [1U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum, 4U));
                    } else {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m = 0U;
                    }
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_q 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                           [vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sq] 
                                                           + 
                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                           [
                                                           (7U 
                                                            & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sq) 
                                                               - (IData)(1U)))]))), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_p 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                           [vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sp] 
                                                           + 
                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                           [
                                                           (7U 
                                                            & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sp) 
                                                               - (IData)(1U)))]))), 1U));
                }
            }
        }
        if ((1U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mode))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_raw_delta 
                = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                              (0xffffffU 
                                               & ((IData)(8U) 
                                                  + 
                                                  (VL_MULS_III(24, (IData)(9U), 
                                                               (0xffffffU 
                                                                & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                   [0U] 
                                                                   - 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                   [0U]))) 
                                                   - 
                                                   VL_MULS_III(24, (IData)(3U), 
                                                               (0xffffffU 
                                                                & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                   [1U] 
                                                                   - 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                   [1U])))))), 4U));
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_ok 
                = (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_raw_delta, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc10) 
                   & VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_raw_delta, 
                                (0xffffffU & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc10))));
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta 
                = (0xffffffU & (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_raw_delta, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext)
                                 ? vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext
                                 : (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_raw_delta, 
                                               (0xffffffU 
                                                & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext)))
                                     ? (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext)
                                     : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_raw_delta)));
        } else if ((4U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mode))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_raw_delta 
                = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                              (0xffffffU 
                                               & ((IData)(4U) 
                                                  + 
                                                  ((VL_SHIFTL_III(24,24,32, 
                                                                  (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                                   [0U] 
                                                                   - 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                                   [0U]), 2U) 
                                                    + 
                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p
                                                    [1U]) 
                                                   - 
                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q
                                                   [1U]))), 4U));
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta 
                = (0xffffffU & (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_raw_delta, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext)
                                 ? vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext
                                 : (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_raw_delta, 
                                               (0xffffffU 
                                                & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext)))
                                     ? (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext)
                                     : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_raw_delta)));
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[0U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[1U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[2U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[3U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[4U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[5U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[6U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[7U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[8U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[9U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[0xaU] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[0xbU] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[0xcU] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[0xdU] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[0xeU] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[0xfU] = 0U;
    if (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_active) 
         & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_error)))) {
        if ((1U & (~ ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mode) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mode))) {
                if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mode))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk8__DOT__i = 7U;
                }
            }
        }
        if ((4U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mode))) {
            if ((1U & (~ ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mode) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mode))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk9__DOT__i = 0x10U;
                    if ((3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sp))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[7U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                    [3U] 
                                                                    + 
                                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                    [2U]) 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                   [1U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                              [0U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                 [0U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                [1U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                               [2U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[6U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              (((((VL_MULS_III(24, (IData)(2U), 
                                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                               [3U]) 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                   [2U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                              [1U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                 [0U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                [0U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                               [1U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[5U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((VL_MULS_III(24, (IData)(3U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                              [3U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                              [2U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                 [1U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                [0U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                               [0U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[8U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                    [3U] 
                                                                    + 
                                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                    [2U]) 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                   [1U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                              [0U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                 [0U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                [1U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                               [2U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[9U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              (((((VL_MULS_III(24, (IData)(2U), 
                                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                               [3U]) 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                   [2U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                              [1U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                 [0U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                [0U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                               [1U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[0xaU] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((VL_MULS_III(24, (IData)(3U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                              [3U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                              [2U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                 [1U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                [0U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                               [0U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask 
                            = (0x7e0U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask));
                    } else {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[7U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((VL_MULS_III(24, (IData)(3U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                              [1U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                              [0U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                 [0U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                [1U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                               [2U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[8U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              (((((VL_MULS_III(24, (IData)(2U), 
                                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                               [1U]) 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                   [0U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                              [0U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                 [1U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                [2U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                               [3U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[9U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              (((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                   [1U] 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                   [0U]) 
                                                                  + 
                                                                  vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                  [0U]) 
                                                                 + 
                                                                 VL_MULS_III(24, (IData)(2U), 
                                                                             vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                             [1U])) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                [2U]) 
                                                               + 
                                                               VL_MULS_III(24, (IData)(2U), 
                                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                           [3U])))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[0xaU] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                  [0U] 
                                                                  + 
                                                                  vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                  [0U]) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                 [1U]) 
                                                                + 
                                                                VL_MULS_III(24, (IData)(2U), 
                                                                            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                            [2U])) 
                                                               + 
                                                               VL_MULS_III(24, (IData)(3U), 
                                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                           [3U])))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask 
                            = (0x780U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask));
                    }
                    if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[0U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((2U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[1U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((4U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[2U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((8U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[3U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x10U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[4U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x20U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[5U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x40U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[6U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x80U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[7U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x100U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[8U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x200U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[9U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x400U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[0xaU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x800U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[0xbU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x1000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[0xcU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x2000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[0xdU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x4000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[0xeU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x8000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[0xfU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                } else {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[7U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                        [0U] + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_delta));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[8U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                        [0U] - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_delta));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[7U] = 0x7ffU;
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask 
                        = (0x180U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[8U] = 0x7ffU;
                }
            }
        } else if ((2U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mode))) {
            if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mode))) {
                if (VL_LTS_III(32, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_p));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[7U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_p);
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[7U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask 
                        = (0x80U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_q));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[8U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_q);
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[8U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask 
                        = (0x100U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 1U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 7U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[6U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 3U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[6U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask 
                        = (0x40U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 1U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 7U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[9U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 3U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[9U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask 
                        = (0x200U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 2U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 0xeU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[5U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 6U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[5U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask 
                        = (0x20U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 2U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 0xeU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[0xaU] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 6U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[0xaU] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask 
                        = (0x400U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 3U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 0x15U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[4U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 9U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[4U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask 
                        = (0x10U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 3U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 0x15U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[0xbU] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 9U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[0xbU] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask 
                        = (0x800U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 4U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 0x1cU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[3U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 0xcU));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[3U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask 
                        = (8U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 4U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 0x1cU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[0xcU] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 0xcU));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[0xcU] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask 
                        = (0x1000U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 5U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 0x23U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[2U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 0xfU));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[2U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask 
                        = (4U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 5U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 0x23U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[0xdU] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 0xfU));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[0xdU] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask 
                        = (0x2000U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 6U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 0x2aU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[1U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 0x12U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[1U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask 
                        = (2U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 6U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 0x2aU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[0xeU] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 0x12U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[0xeU] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask 
                        = (0x4000U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask));
                }
            } else {
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[7U] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                          [2U] 
                                                          + 
                                                          VL_MULS_III(24, (IData)(2U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                      [1U])) 
                                                         + 
                                                         VL_MULS_III(24, (IData)(2U), 
                                                                     vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                     [0U])) 
                                                        + 
                                                        VL_MULS_III(24, (IData)(2U), 
                                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                    [0U])) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                       [1U]))), 3U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[6U] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                         [2U] 
                                                         + 
                                                         vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                         [1U]) 
                                                        + 
                                                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                        [0U]) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                       [0U]))), 2U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[5U] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((((VL_MULS_III(24, (IData)(2U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                      [3U]) 
                                                          + 
                                                          VL_MULS_III(24, (IData)(3U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                      [2U])) 
                                                         + 
                                                         vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                         [1U]) 
                                                        + 
                                                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                        [0U]) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                       [0U]))), 3U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[8U] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                          [2U] 
                                                          + 
                                                          VL_MULS_III(24, (IData)(2U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                      [1U])) 
                                                         + 
                                                         VL_MULS_III(24, (IData)(2U), 
                                                                     vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                     [0U])) 
                                                        + 
                                                        VL_MULS_III(24, (IData)(2U), 
                                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                    [0U])) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                       [1U]))), 3U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[9U] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                         [2U] 
                                                         + 
                                                         vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                         [1U]) 
                                                        + 
                                                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                        [0U]) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                       [0U]))), 2U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[0xaU] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((((VL_MULS_III(24, (IData)(2U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                      [3U]) 
                                                          + 
                                                          VL_MULS_III(24, (IData)(3U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                      [2U])) 
                                                         + 
                                                         vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                         [1U]) 
                                                        + 
                                                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                        [0U]) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                       [0U]))), 3U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[7U] 
                    = (0xffffffU & VL_MULS_III(24, (IData)(3U), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask 
                    = (0x7e0U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[8U] 
                    = (0xffffffU & VL_MULS_III(24, (IData)(3U), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[6U] 
                    = (0xffffffU & VL_MULS_III(24, (IData)(2U), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[9U] 
                    = (0xffffffU & VL_MULS_III(24, (IData)(2U), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[5U] 
                    = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext;
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[0xaU] 
                    = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext;
            }
        } else if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mode))) {
            if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_delta_ok) {
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[7U] 
                    = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                    [0U] + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_delta));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[8U] 
                    = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                    [0U] - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_delta));
                if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_dep) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_p1 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & ((VL_SHIFTRS_III(24,24,32, 
                                                                          (0xffffffU 
                                                                           & ((IData)(1U) 
                                                                              + 
                                                                              (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                               [2U] 
                                                                               + 
                                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                               [0U]))), 1U) 
                                                           - 
                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                           [1U]) 
                                                          + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_delta)), 1U));
                    if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_p1, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_half_tc)) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_p1 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_half_tc;
                    } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_p1, 
                                          (0xffffffU 
                                           & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_half_tc)))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_p1 
                            = (0xffffffU & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_half_tc));
                    }
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[6U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                        [1U] + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_p1));
                }
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[7U] = 0x7ffU;
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[8U] = 0x7ffU;
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask 
                    = (0x180U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask));
                if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_dep) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[6U] = 0x7ffU;
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask 
                        = (0x40U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask));
                }
                if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_deq) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_q1 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & ((VL_SHIFTRS_III(24,24,32, 
                                                                          (0xffffffU 
                                                                           & ((IData)(1U) 
                                                                              + 
                                                                              (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                               [2U] 
                                                                               + 
                                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                               [0U]))), 1U) 
                                                           - 
                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                           [1U]) 
                                                          - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_delta)), 1U));
                    if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_q1, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_half_tc)) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_q1 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_half_tc;
                    } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_q1, 
                                          (0xffffffU 
                                           & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_half_tc)))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_q1 
                            = (0xffffffU & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_half_tc));
                    }
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[9U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                        [1U] + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_q1));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[9U] = 0x7ffU;
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask 
                        = (0x200U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask));
                }
            }
        }
        if ((1U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mode))) {
            if ((4U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mode))) {
                if ((3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mode))) {
                    if ((0x3fU != (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sp) 
                                    << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sq)))) {
                        if ((0x3bU == (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sp) 
                                        << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sq)))) {
                            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk3__DOT__i = 7U;
                            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk4__DOT__i = 3U;
                        }
                        if ((0x3bU != (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sp) 
                                        << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sq)))) {
                            if ((0x1fU == (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sp) 
                                            << 3U) 
                                           | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sq)))) {
                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk5__DOT__i = 7U;
                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk6__DOT__i = 3U;
                            }
                        }
                    }
                    if ((0x3fU == (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sp) 
                                    << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sq)))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk2__DOT__i = 7U;
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((IData)(8U) 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          (0xffffffU 
                                                           & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                              [0U] 
                                                              + 
                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                              [0U])))));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                             [1U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                            [1U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                             [2U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                            [2U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                             [3U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                            [3U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                             [4U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                            [4U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                             [5U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                            [5U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                             [6U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                            [6U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum, 4U));
                    } else if ((0x3bU == (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sp) 
                                           << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sq)))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((IData)(8U) 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                          [0U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                            [1U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                            [2U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                            [3U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                            [4U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                            [5U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                            [6U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                          [0U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                          [1U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                          [2U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                             [0U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                            [1U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum, 4U));
                    } else if ((0x1fU == (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sp) 
                                           << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sq)))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((IData)(8U) 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                          [0U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                            [1U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                            [2U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                            [3U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                            [4U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                            [5U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                            [6U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                          [0U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                          [1U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                          [2U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                             [0U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                            [1U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum, 4U));
                    } else {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m = 0U;
                    }
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_q 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                           [vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sq] 
                                                           + 
                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                           [
                                                           (7U 
                                                            & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sq) 
                                                               - (IData)(1U)))]))), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_p 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                           [vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sp] 
                                                           + 
                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                           [
                                                           (7U 
                                                            & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sp) 
                                                               - (IData)(1U)))]))), 1U));
                }
            }
        }
        if ((1U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mode))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_raw_delta 
                = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                              (0xffffffU 
                                               & ((IData)(8U) 
                                                  + 
                                                  (VL_MULS_III(24, (IData)(9U), 
                                                               (0xffffffU 
                                                                & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                   [0U] 
                                                                   - 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                   [0U]))) 
                                                   - 
                                                   VL_MULS_III(24, (IData)(3U), 
                                                               (0xffffffU 
                                                                & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                   [1U] 
                                                                   - 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                   [1U])))))), 4U));
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_ok 
                = (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_raw_delta, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc10) 
                   & VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_raw_delta, 
                                (0xffffffU & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc10))));
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta 
                = (0xffffffU & (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_raw_delta, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext)
                                 ? vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext
                                 : (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_raw_delta, 
                                               (0xffffffU 
                                                & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext)))
                                     ? (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext)
                                     : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_raw_delta)));
        } else if ((4U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mode))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_raw_delta 
                = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                              (0xffffffU 
                                               & ((IData)(4U) 
                                                  + 
                                                  ((VL_SHIFTL_III(24,24,32, 
                                                                  (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                                   [0U] 
                                                                   - 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                                   [0U]), 2U) 
                                                    + 
                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p
                                                    [1U]) 
                                                   - 
                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q
                                                   [1U]))), 4U));
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta 
                = (0xffffffU & (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_raw_delta, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext)
                                 ? vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext
                                 : (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_raw_delta, 
                                               (0xffffffU 
                                                & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext)))
                                     ? (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext)
                                     : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_raw_delta)));
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[0U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[1U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[2U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[3U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[4U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[5U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[6U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[7U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[8U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[9U] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[0xaU] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[0xbU] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[0xcU] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[0xdU] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[0xeU] = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[0xfU] = 0U;
    if (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_active) 
         & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_error)))) {
        if ((1U & (~ ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mode) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mode))) {
                if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mode))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk8__DOT__i = 7U;
                }
            }
        }
        if ((4U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mode))) {
            if ((1U & (~ ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mode) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mode))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk9__DOT__i = 0x10U;
                    if ((3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sp))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[7U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                    [3U] 
                                                                    + 
                                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                    [2U]) 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                   [1U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                              [0U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                 [0U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                [1U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                               [2U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[6U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              (((((VL_MULS_III(24, (IData)(2U), 
                                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                               [3U]) 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                   [2U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                              [1U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                 [0U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                [0U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                               [1U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[5U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((VL_MULS_III(24, (IData)(3U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                              [3U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                              [2U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                 [1U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                [0U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                               [0U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[8U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                    [3U] 
                                                                    + 
                                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                    [2U]) 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                   [1U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                              [0U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                 [0U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                [1U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                               [2U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[9U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              (((((VL_MULS_III(24, (IData)(2U), 
                                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                               [3U]) 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                   [2U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                              [1U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                 [0U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                [0U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                               [1U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[0xaU] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((VL_MULS_III(24, (IData)(3U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                              [3U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                              [2U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                 [1U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                [0U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                               [0U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask 
                            = (0x7e0U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask));
                    } else {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[7U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((VL_MULS_III(24, (IData)(3U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                              [1U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                              [0U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                 [0U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                [1U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                               [2U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[8U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              (((((VL_MULS_III(24, (IData)(2U), 
                                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                               [1U]) 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                   [0U]) 
                                                                  + 
                                                                  VL_MULS_III(24, (IData)(2U), 
                                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                              [0U])) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                 [1U]) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                [2U]) 
                                                               + 
                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                               [3U]))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[9U] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              (((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                   [1U] 
                                                                   + 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                   [0U]) 
                                                                  + 
                                                                  vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                  [0U]) 
                                                                 + 
                                                                 VL_MULS_III(24, (IData)(2U), 
                                                                             vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                             [1U])) 
                                                                + 
                                                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                [2U]) 
                                                               + 
                                                               VL_MULS_III(24, (IData)(2U), 
                                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                           [3U])))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[0xaU] 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                          (0xffffffU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              ((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                  [0U] 
                                                                  + 
                                                                  vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                  [0U]) 
                                                                 + 
                                                                 vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                 [1U]) 
                                                                + 
                                                                VL_MULS_III(24, (IData)(2U), 
                                                                            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                            [2U])) 
                                                               + 
                                                               VL_MULS_III(24, (IData)(3U), 
                                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                           [3U])))), 3U));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask 
                            = (0x780U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask));
                    }
                    if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[0U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((2U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[1U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((4U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[2U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((8U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[3U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x10U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[4U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x20U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[5U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x40U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[6U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x80U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[7U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x100U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[8U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x200U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[9U] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x400U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[0xaU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x800U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[0xbU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x1000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[0xcU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x2000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[0xdU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x4000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[0xeU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                    if ((0x8000U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[0xfU] 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext;
                    }
                } else {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[7U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                        [0U] + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_delta));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[8U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                        [0U] - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_delta));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[7U] = 0x7ffU;
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask 
                        = (0x180U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[8U] = 0x7ffU;
                }
            }
        } else if ((2U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mode))) {
            if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mode))) {
                if (VL_LTS_III(32, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_p));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[7U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_p);
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[7U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask 
                        = (0x80U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_q));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[8U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_q);
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[8U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask 
                        = (0x100U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 1U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 7U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[6U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 3U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[6U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask 
                        = (0x40U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 1U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 7U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[9U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 3U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[9U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask 
                        = (0x200U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 2U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 0xeU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[5U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 6U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[5U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask 
                        = (0x20U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 2U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 0xeU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[0xaU] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 6U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[0xaU] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask 
                        = (0x400U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 3U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 0x15U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[4U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 9U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[4U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask 
                        = (0x10U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 3U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 0x15U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[0xbU] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 9U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[0xbU] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask 
                        = (0x800U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 4U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 0x1cU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[3U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 0xcU));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[3U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask 
                        = (8U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 4U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 0x1cU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[0xcU] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 0xcU));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[0xcU] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask 
                        = (0x1000U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 5U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 0x23U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[2U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 0xfU));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[2U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask 
                        = (4U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 5U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 0x23U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[0xdU] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 0xfU));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[0xdU] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask 
                        = (0x2000U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 6U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sp))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_p 
                                            >> 0x2aU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[1U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_p 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_p)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_p 
                                 >> 0x12U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[1U] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask 
                        = (2U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask));
                }
                if (VL_LTS_III(32, 6U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sq))) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef 
                        = (0x7fU & (IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_q 
                                            >> 0x2aU)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[0xeU] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_q 
                                        + VL_SHIFTRS_III(24,24,32, 
                                                         (0xffffffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_MULS_III(24, 
                                                                         (0xffffffU 
                                                                          & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_m 
                                                                             - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_q)), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef))), 6U)));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff 
                        = (7U & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_q 
                                 >> 0x12U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[0xeU] 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & VL_MULS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff)), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask 
                        = (0x4000U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask));
                }
            } else {
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[7U] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                          [2U] 
                                                          + 
                                                          VL_MULS_III(24, (IData)(2U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                      [1U])) 
                                                         + 
                                                         VL_MULS_III(24, (IData)(2U), 
                                                                     vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                     [0U])) 
                                                        + 
                                                        VL_MULS_III(24, (IData)(2U), 
                                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                    [0U])) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                       [1U]))), 3U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[6U] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                         [2U] 
                                                         + 
                                                         vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                         [1U]) 
                                                        + 
                                                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                        [0U]) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                       [0U]))), 2U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[5U] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((((VL_MULS_III(24, (IData)(2U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                      [3U]) 
                                                          + 
                                                          VL_MULS_III(24, (IData)(3U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                      [2U])) 
                                                         + 
                                                         vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                         [1U]) 
                                                        + 
                                                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                        [0U]) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                       [0U]))), 3U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[8U] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                          [2U] 
                                                          + 
                                                          VL_MULS_III(24, (IData)(2U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                      [1U])) 
                                                         + 
                                                         VL_MULS_III(24, (IData)(2U), 
                                                                     vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                     [0U])) 
                                                        + 
                                                        VL_MULS_III(24, (IData)(2U), 
                                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                    [0U])) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                       [1U]))), 3U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[9U] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                         [2U] 
                                                         + 
                                                         vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                         [1U]) 
                                                        + 
                                                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                        [0U]) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                       [0U]))), 2U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[0xaU] 
                    = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                  (0xffffffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      ((((VL_MULS_III(24, (IData)(2U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                      [3U]) 
                                                          + 
                                                          VL_MULS_III(24, (IData)(3U), 
                                                                      vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                      [2U])) 
                                                         + 
                                                         vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                         [1U]) 
                                                        + 
                                                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                        [0U]) 
                                                       + 
                                                       vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                       [0U]))), 3U));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[7U] 
                    = (0xffffffU & VL_MULS_III(24, (IData)(3U), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask 
                    = (0x7e0U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[8U] 
                    = (0xffffffU & VL_MULS_III(24, (IData)(3U), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[6U] 
                    = (0xffffffU & VL_MULS_III(24, (IData)(2U), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[9U] 
                    = (0xffffffU & VL_MULS_III(24, (IData)(2U), vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[5U] 
                    = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext;
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[0xaU] 
                    = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext;
            }
        } else if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mode))) {
            if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_delta_ok) {
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[7U] 
                    = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                    [0U] + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_delta));
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[8U] 
                    = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                    [0U] - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_delta));
                if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_dep) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_p1 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & ((VL_SHIFTRS_III(24,24,32, 
                                                                          (0xffffffU 
                                                                           & ((IData)(1U) 
                                                                              + 
                                                                              (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                               [2U] 
                                                                               + 
                                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                               [0U]))), 1U) 
                                                           - 
                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                           [1U]) 
                                                          + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_delta)), 1U));
                    if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_p1, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_half_tc)) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_p1 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_half_tc;
                    } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_p1, 
                                          (0xffffffU 
                                           & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_half_tc)))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_p1 
                            = (0xffffffU & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_half_tc));
                    }
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[6U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                        [1U] + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_p1));
                }
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[7U] = 0x7ffU;
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[8U] = 0x7ffU;
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask 
                    = (0x180U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask));
                if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_dep) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[6U] = 0x7ffU;
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask 
                        = (0x40U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask));
                }
                if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_deq) {
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_q1 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & ((VL_SHIFTRS_III(24,24,32, 
                                                                          (0xffffffU 
                                                                           & ((IData)(1U) 
                                                                              + 
                                                                              (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                               [2U] 
                                                                               + 
                                                                               vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                               [0U]))), 1U) 
                                                           - 
                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                           [1U]) 
                                                          - vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_delta)), 1U));
                    if (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_q1, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_half_tc)) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_q1 
                            = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_half_tc;
                    } else if (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_q1, 
                                          (0xffffffU 
                                           & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_half_tc)))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_q1 
                            = (0xffffffU & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_half_tc));
                    }
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[9U] 
                        = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                        [1U] + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_q1));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[9U] = 0x7ffU;
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask 
                        = (0x200U | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask));
                }
            }
        }
        if ((1U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mode))) {
            if ((4U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mode))) {
                if ((3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mode))) {
                    if ((0x3fU != (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sp) 
                                    << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sq)))) {
                        if ((0x3bU == (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sp) 
                                        << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sq)))) {
                            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk3__DOT__i = 7U;
                            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk4__DOT__i = 3U;
                        }
                        if ((0x3bU != (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sp) 
                                        << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sq)))) {
                            if ((0x1fU == (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sp) 
                                            << 3U) 
                                           | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sq)))) {
                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk5__DOT__i = 7U;
                                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk6__DOT__i = 3U;
                            }
                        }
                    }
                    if ((0x3fU == (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sp) 
                                    << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sq)))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk2__DOT__i = 7U;
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((IData)(8U) 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          (0xffffffU 
                                                           & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                              [0U] 
                                                              + 
                                                              vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                              [0U])))));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                             [1U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                            [1U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                             [2U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                            [2U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                             [3U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                            [3U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                             [4U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                            [4U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                             [5U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                            [5U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                             [6U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                            [6U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum, 4U));
                    } else if ((0x3bU == (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sp) 
                                           << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sq)))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((IData)(8U) 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                          [0U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                            [1U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                            [2U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                            [3U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                            [4U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                            [5U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                            [6U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                          [0U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                          [1U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                          [2U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                             [0U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                            [1U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum, 4U));
                    } else if ((0x1fU == (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sp) 
                                           << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sq)))) {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((IData)(8U) 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                          [0U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                            [1U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                            [2U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                            [3U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                            [4U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                            [5U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                            [6U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                          [0U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                          [1U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                            + VL_MULS_III(24, (IData)(2U), 
                                                          vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                          [2U])));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                            = (0xffffffU & ((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum 
                                             + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                             [0U]) 
                                            + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                            [1U]));
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m 
                            = (0xffffffU & VL_SHIFTRS_III(24,24,32, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum, 4U));
                    } else {
                        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m = 0U;
                    }
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_q 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                           [vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sq] 
                                                           + 
                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                           [
                                                           (7U 
                                                            & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sq) 
                                                               - (IData)(1U)))]))), 1U));
                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_p 
                        = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                                      (0xffffffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                           [vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sp] 
                                                           + 
                                                           vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                           [
                                                           (7U 
                                                            & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sp) 
                                                               - (IData)(1U)))]))), 1U));
                }
            }
        }
        if ((1U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mode))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_raw_delta 
                = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                              (0xffffffU 
                                               & ((IData)(8U) 
                                                  + 
                                                  (VL_MULS_III(24, (IData)(9U), 
                                                               (0xffffffU 
                                                                & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                   [0U] 
                                                                   - 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                   [0U]))) 
                                                   - 
                                                   VL_MULS_III(24, (IData)(3U), 
                                                               (0xffffffU 
                                                                & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                   [1U] 
                                                                   - 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                   [1U])))))), 4U));
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_ok 
                = (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_raw_delta, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc10) 
                   & VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_raw_delta, 
                                (0xffffffU & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc10))));
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta 
                = (0xffffffU & (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_raw_delta, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext)
                                 ? vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext
                                 : (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_raw_delta, 
                                               (0xffffffU 
                                                & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext)))
                                     ? (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext)
                                     : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_raw_delta)));
        } else if ((4U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mode))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_raw_delta 
                = (0xffffffU & VL_SHIFTRS_III(24,24,32, 
                                              (0xffffffU 
                                               & ((IData)(4U) 
                                                  + 
                                                  ((VL_SHIFTL_III(24,24,32, 
                                                                  (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                                   [0U] 
                                                                   - 
                                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                                   [0U]), 2U) 
                                                    + 
                                                    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p
                                                    [1U]) 
                                                   - 
                                                   vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q
                                                   [1U]))), 4U));
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta 
                = (0xffffffU & (VL_GTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_raw_delta, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext)
                                 ? vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext
                                 : (VL_LTS_III(24, vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_raw_delta, 
                                               (0xffffffU 
                                                & (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext)))
                                     ? (- vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext)
                                     : vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_raw_delta)));
        }
    }
    if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_current_state) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_next_state = 1U;
        if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_current_state) {
            if (((3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state)) 
                 & (0xfU == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_in_ready)))) {
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_next_state = 0U;
            }
        } else {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_next_state = 0U;
        }
    } else {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_next_state = 0U;
        if (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_decision_in_valid) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_next_state = 1U;
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_decision_accept 
        = ((3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state)) 
           & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_current_state) 
              & (0xfU == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_in_ready))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_selector_error 
        = ((0xfU == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_valid)) 
           & ((~ ((0xfU == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask)) 
                  | (3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask)))) 
              | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_error) 
                 | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_error) 
                    | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_error) 
                       | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_error))))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_ready 
        = ((0xfU == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_valid)) 
           & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready) 
              & (4U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_input_legal 
        = ((3U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id)) 
           & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_length_legal) 
              & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mode_legal) 
                 & ((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask)) 
                    | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_data_legal)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_input_legal 
        = ((3U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id)) 
           & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_length_legal) 
              & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mode_legal) 
                 & ((~ ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask) 
                        >> 1U)) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_data_legal)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_input_legal 
        = ((3U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id)) 
           & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_length_legal) 
              & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mode_legal) 
                 & ((~ ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask) 
                        >> 2U)) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_data_legal)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_input_legal 
        = ((3U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id)) 
           & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_length_legal) 
              & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mode_legal) 
                 & ((~ ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask) 
                        >> 3U)) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_data_legal)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_legal 
        = ((3U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id)) 
           & ((IData)(vlSelf->__VdfgTmp_hadae4e9b__0) 
              & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_length_legal)));
    if ((0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_long_endn 
            = (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT____VdfgTmp_h40c113d3__0) 
                << 2U) | ((((0x1ffffU & ((0xffffU & (IData)(
                                                            (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_long 
                                                             >> 0x10U))) 
                                         + (0xffffU 
                                            & (IData)(
                                                      (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_long 
                                                       >> 0x10U))))) 
                            < vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_thr2) 
                           << 1U) | ((0x1ffffU & VL_SHIFTL_III(17,17,32, 
                                                               ((0xffffU 
                                                                 & (IData)(
                                                                           (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long 
                                                                            >> 0x10U))) 
                                                                + 
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long 
                                                                            >> 0x10U)))), 1U)) 
                                     < (0x1ffffU & 
                                        VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 4U)))));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_short_endn 
            = (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT____VdfgTmp_h40c113d3__0) 
                << 2U) | ((((0x1ffffU & ((0xffffU & (IData)(
                                                            (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_short 
                                                             >> 0x10U))) 
                                         + (0xffffU 
                                            & (IData)(
                                                      (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_short 
                                                       >> 0x10U))))) 
                            < (0x1ffffU & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 3U))) 
                           << 1U) | ((0x1ffffU & VL_SHIFTL_III(17,17,32, 
                                                               ((0xffffU 
                                                                 & (IData)(
                                                                           (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short 
                                                                            >> 0x10U))) 
                                                                + 
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short 
                                                                            >> 0x10U)))), 1U)) 
                                     < (0x1ffffU & 
                                        VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 2U)))));
    } else {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_long_endn 
            = (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT____VdfgTmp_h40c113d3__0) 
                << 2U) | ((((0x1ffffU & ((0xffffU & (IData)(
                                                            (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_long 
                                                             >> 0x30U))) 
                                         + (0xffffU 
                                            & (IData)(
                                                      (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_long 
                                                       >> 0x30U))))) 
                            < vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_thr2) 
                           << 1U) | ((0x1ffffU & VL_SHIFTL_III(17,17,32, 
                                                               ((0xffffU 
                                                                 & (IData)(
                                                                           (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long 
                                                                            >> 0x30U))) 
                                                                + 
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long 
                                                                            >> 0x30U)))), 1U)) 
                                     < (0x1ffffU & 
                                        VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 4U)))));
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_short_endn 
            = (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT____VdfgTmp_h40c113d3__0) 
                << 2U) | ((((0x1ffffU & ((0xffffU & (IData)(
                                                            (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_short 
                                                             >> 0x30U))) 
                                         + (0xffffU 
                                            & (IData)(
                                                      (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_short 
                                                       >> 0x30U))))) 
                            < (0x1ffffU & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 3U))) 
                           << 1U) | ((0x1ffffU & VL_SHIFTL_III(17,17,32, 
                                                               ((0xffffU 
                                                                 & (IData)(
                                                                           (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short 
                                                                            >> 0x30U))) 
                                                                + 
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short 
                                                                            >> 0x30U)))), 1U)) 
                                     < (0x1ffffU & 
                                        VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 2U)))));
    }
    __Vtableidx2 = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT____VdfgExtracted_hf14d50d3__0;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_beta_rom 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__TABLE_hd67de6cf_0
        [__Vtableidx2];
    __Vtableidx3 = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT____VdfgExtracted_h3ee4ed80__0;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_tc_rom 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__TABLE_h5ab686d4_0
        [__Vtableidx3];
    __Vtableidx1 = (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_bypass) 
                     << 9U) | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid) 
                                << 8U) | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_primitive_start) 
                                           << 7U) | 
                                          (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_in_fire) 
                                            << 6U) 
                                           | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_decision_accept) 
                                               << 5U) 
                                              | ((((4U 
                                                    == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state)) 
                                                   & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready) 
                                                      & (0xfU 
                                                         == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_valid)))) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready) 
                                                     << 3U) 
                                                    | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state))))))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_next_state 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__TABLE_hd2cfcd7f_0
        [__Vtableidx1];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_input_fire 
        = ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_decision_accept) 
           & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__0__KET____DOT__u_fo__O_IN_READY));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_input_fire 
        = ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_decision_accept) 
           & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__1__KET____DOT__u_fo__O_IN_READY));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_input_fire 
        = ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_decision_accept) 
           & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__2__KET____DOT__u_fo__O_IN_READY));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_input_fire 
        = ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_decision_accept) 
           & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__3__KET____DOT__u_fo__O_IN_READY));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_error = 0U;
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask = 0ULL;
    if ((0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state))) {
        if ((4U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state))) {
            if ((5U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state))) {
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_bypass = 1U;
            }
        }
        if ((4U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[0U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[1U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[2U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[3U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[4U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[5U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[6U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[7U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[0U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[1U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[2U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[3U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[4U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[5U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[6U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[7U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[0U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[1U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[2U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[3U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[4U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[5U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[6U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[7U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[0U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[1U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[2U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[3U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[4U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[5U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[6U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[7U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid 
                = (0xfU == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_valid));
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_error 
                = ((0xfU == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_valid)) 
                   & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_decision_error) 
                      | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_selector_error)));
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask 
                = ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_decision_error)
                    ? 0ULL : (((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_selector_error)) 
                               & (0xfU == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_valid)))
                               ? vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_selector__DOT__w_active_write_mask
                               : 0ULL));
        } else if ((5U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[1U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[1U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[2U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[2U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[3U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[3U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[4U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[4U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[5U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[5U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[6U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[6U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[7U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[7U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[8U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[8U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[9U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[9U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xaU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xaU];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xbU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xbU];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xcU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xcU];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xdU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xdU];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xeU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xeU];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0xfU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xfU];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x10U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x10U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x11U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x11U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x12U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x12U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x13U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x13U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x14U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x14U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x15U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x15U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x16U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x16U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x17U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x17U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x18U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x18U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x19U] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x19U];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1aU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1aU];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1bU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1bU];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1cU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1cU];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1dU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1dU];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1eU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1eU];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window[0x1fU] 
                = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1fU];
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid = 1U;
        }
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_lane_enable 
        = ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_legal) 
           & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_lane_enable 
        = ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_legal) 
           & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask) 
              >> 3U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_lane_enable 
        = ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_legal) 
           & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask) 
              >> 2U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_lane_enable 
        = ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_legal) 
           & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask) 
              >> 1U));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_long 
        = ((0x40U & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_long_endn) 
                     << 4U)) | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd0668443__0) 
                                 << 5U) | ((0x10U & 
                                            ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_long_endn) 
                                             << 3U)) 
                                           | (((IData)(vlSelf->__VdfgTmp_h831910e8__0) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_long_endn) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelf->__VdfgTmp_h5ebf49ef__0) 
                                                     << 1U) 
                                                    | ((0x3ffffU 
                                                        & ((0xffffU 
                                                            & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long)) 
                                                           + 
                                                           ((0xffffU 
                                                             & ((0U 
                                                                 != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                                                 ? (IData)(
                                                                           (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long 
                                                                            >> 0x10U))
                                                                 : (IData)(
                                                                           (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long 
                                                                            >> 0x30U)))) 
                                                            + 
                                                            ((0xffffU 
                                                              & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long)) 
                                                             + 
                                                             (0xffffU 
                                                              & ((0U 
                                                                  != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                                                  ? (IData)(
                                                                            (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long 
                                                                             >> 0x10U))
                                                                  : (IData)(
                                                                            (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long 
                                                                             >> 0x30U)))))))) 
                                                       < (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta))))))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_short_all 
        = (IData)(((((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_short_endn)) 
                     & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd0668443__0)) 
                    & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd3adf6f4__0)) 
                   & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd3aaa4e9__0)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_short 
        = (((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_q_sum_short 
             < vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_dep_threshold) 
            << 8U) | (((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_p_sum_short 
                        < vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_dep_threshold) 
                       << 7U) | ((0x40U & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_short_endn) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd0668443__0) 
                                     << 5U) | ((0x10U 
                                                & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_short_endn) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd3adf6f4__0) 
                                                   << 3U) 
                                                  | ((4U 
                                                      & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_short_endn) 
                                                         << 2U)) 
                                                     | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd3aaa4e9__0) 
                                                         << 1U) 
                                                        | ((0x3ffffU 
                                                            & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_p_sum_short 
                                                               + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_q_sum_short)) 
                                                           < (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta))))))))));
    __Vtableidx5 = (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_input_fire) 
                     << 4U) | ((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_ready) 
                                 & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__0__KET____DOT__u_fo__O_OUT_VALID)) 
                                << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_current_state)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_next_state 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__TABLE_h19f16ed3_0
        [__Vtableidx5];
    __Vtableidx7 = (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_input_fire) 
                     << 4U) | ((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_ready) 
                                 & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__1__KET____DOT__u_fo__O_OUT_VALID)) 
                                << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_current_state)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_next_state 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__TABLE_h19f16ed3_0
        [__Vtableidx7];
    __Vtableidx9 = (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_input_fire) 
                     << 4U) | ((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_ready) 
                                 & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__2__KET____DOT__u_fo__O_OUT_VALID)) 
                                << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_current_state)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_next_state 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__TABLE_h19f16ed3_0
        [__Vtableidx9];
    __Vtableidx11 = (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_input_fire) 
                      << 4U) | ((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_ready) 
                                  & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__3__KET____DOT__u_fo__O_OUT_VALID)) 
                                 << 3U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_current_state)));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_next_state 
        = VDBF_UNIFIED_FILTER_CORE_TB__ConstPool__TABLE_h19f16ed3_0
        [__Vtableidx11];
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dp_short 
        = (((QData)((IData)(((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_lane_enable)
                              ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_base)
                              : 0U))) << 0x30U) | (
                                                   ((QData)((IData)(
                                                                    ((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_lane_enable)
                                                                        ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_base)
                                                                        : 0U) 
                                                                      << 0x10U) 
                                                                     | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_lane_enable)
                                                                         ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_base)
                                                                         : 0U)))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_lane_enable)
                                                                       ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_base)
                                                                       : 0U)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dq_short 
        = (((QData)((IData)(((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_lane_enable)
                              ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_base)
                              : 0U))) << 0x30U) | (
                                                   ((QData)((IData)(
                                                                    ((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_lane_enable)
                                                                        ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_base)
                                                                        : 0U) 
                                                                      << 0x10U) 
                                                                     | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_lane_enable)
                                                                         ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_base)
                                                                         : 0U)))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_lane_enable)
                                                                       ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_base)
                                                                       : 0U)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dp_long 
        = (((QData)((IData)(((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_lane_enable)
                              ? (0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                             ? VL_SHIFTR_III(16,16,32, 
                                                             (0xffffU 
                                                              & ((IData)(1U) 
                                                                 + 
                                                                 ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_base) 
                                                                  + 
                                                                  (0xfffU 
                                                                   & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_ext))
                                                                       ? 
                                                                      (0x1fffU 
                                                                       & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_ext)))
                                                                       : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_ext)))))), 1U)
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_base)))
                              : 0U))) << 0x30U) | (
                                                   ((QData)((IData)(
                                                                    ((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_lane_enable)
                                                                        ? 
                                                                       (0xffffU 
                                                                        & ((7U 
                                                                            == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                                                            ? 
                                                                           VL_SHIFTR_III(16,16,32, 
                                                                                (0xffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_base) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_ext))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_ext)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_ext)))))), 1U)
                                                                            : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_base)))
                                                                        : 0U) 
                                                                      << 0x10U) 
                                                                     | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_lane_enable)
                                                                         ? 
                                                                        (0xffffU 
                                                                         & ((7U 
                                                                             == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                                                             ? 
                                                                            VL_SHIFTR_III(16,16,32, 
                                                                                (0xffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_base) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_ext))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_ext)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_ext)))))), 1U)
                                                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_base)))
                                                                         : 0U)))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_lane_enable)
                                                                       ? 
                                                                      (0xffffU 
                                                                       & ((7U 
                                                                           == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                                                           ? 
                                                                          VL_SHIFTR_III(16,16,32, 
                                                                                (0xffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_base) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_ext))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_ext)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_ext)))))), 1U)
                                                                           : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_base)))
                                                                       : 0U)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dq_long 
        = (((QData)((IData)(((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_lane_enable)
                              ? (0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                             ? VL_SHIFTR_III(16,16,32, 
                                                             (0xffffU 
                                                              & ((IData)(1U) 
                                                                 + 
                                                                 ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_base) 
                                                                  + 
                                                                  (0xfffU 
                                                                   & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_ext))
                                                                       ? 
                                                                      (0x1fffU 
                                                                       & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_ext)))
                                                                       : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_ext)))))), 1U)
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_base)))
                              : 0U))) << 0x30U) | (
                                                   ((QData)((IData)(
                                                                    ((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_lane_enable)
                                                                        ? 
                                                                       (0xffffU 
                                                                        & ((7U 
                                                                            == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                                                            ? 
                                                                           VL_SHIFTR_III(16,16,32, 
                                                                                (0xffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_base) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_ext))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_ext)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_ext)))))), 1U)
                                                                            : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_base)))
                                                                        : 0U) 
                                                                      << 0x10U) 
                                                                     | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_lane_enable)
                                                                         ? 
                                                                        (0xffffU 
                                                                         & ((7U 
                                                                             == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                                                             ? 
                                                                            VL_SHIFTR_III(16,16,32, 
                                                                                (0xffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_base) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_ext))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_ext)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_ext)))))), 1U)
                                                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_base)))
                                                                         : 0U)))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_lane_enable)
                                                                       ? 
                                                                      (0xffffU 
                                                                       & ((7U 
                                                                           == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                                                           ? 
                                                                          VL_SHIFTR_III(16,16,32, 
                                                                                (0xffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_base) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_ext))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_ext)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_ext)))))), 1U)
                                                                           : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_base)))
                                                                       : 0U)))));
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_flags 
        = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_short;
    if (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_legal) 
         & (0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_bs)))) {
        if ((0U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))) {
            if ((((3U < (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp)) 
                  | (3U < (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))) 
                 & (0x7fU == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_long)))) {
                vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_flags 
                    = ((0x180U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_flags)) 
                       | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_long));
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_legal)))) {
        vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_flags = 0U;
    }
    vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_mode = 0U;
    if (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_legal) 
         & (0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_bs)))) {
        if ((0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_mode 
                = ((((3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq)) 
                     & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_short)) 
                    & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_short_all))
                    ? 5U : 4U);
        } else if ((((3U < (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp)) 
                     | (3U < (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))) 
                    & (0x7fU == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_long)))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_mode = 3U;
        } else if ((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_short))) {
            vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_mode 
                = ((((2U < (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp)) 
                     & (2U < (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))) 
                    & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_short_all))
                    ? 2U : 1U);
        }
    }
}
