// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCTU_RECON_EXPORT_TB.h for the primary calling header

#include "VCTU_RECON_EXPORT_TB__pch.h"
#include "VCTU_RECON_EXPORT_TB___024root.h"

VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root___eval_static__TOP(VCTU_RECON_EXPORT_TB___024root* vlSelf);

VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root___eval_static(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___eval_static\n"); );
    // Body
    VCTU_RECON_EXPORT_TB___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root___eval_static__TOP(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CLK = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_RESETN = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_EXPORT_START_VALID = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_ID = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_WIDTH = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_HEIGHT = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_DATA_READY = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_en = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_comp = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data = 0ULL;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__case_id = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__reads = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_comp = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_x = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_y = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__w = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__h = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__done_seen = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__export_active = 0U;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__was_stalled = 0U;
}

VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root___eval_final(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root___dump_triggers__stl(VCTU_RECON_EXPORT_TB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VCTU_RECON_EXPORT_TB___024root___eval_phase__stl(VCTU_RECON_EXPORT_TB___024root* vlSelf);

VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root___eval_settle(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___eval_settle\n"); );
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
            VCTU_RECON_EXPORT_TB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VCTU_RECON_EXPORT_TB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root___dump_triggers__stl(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root___stl_sequent__TOP__0(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__w_rd_component_valid 
        = ((0U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component)) 
           || ((1U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component)) 
               || (2U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component))));
    vlSelf->CTU_RECON_EXPORT_TB__DOT__O_RAM_RD_ADDR 
        = (0xfffU & ((0U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component))
                      ? (VL_SHIFTL_III(12,12,32, (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y), 5U) 
                         + (0x1fU & ((IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x) 
                                     >> 2U))) : (VL_SHIFTL_III(12,12,32, (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y), 4U) 
                                                 + 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x) 
                                                     >> 2U)))));
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__w_last_in_row 
        = ((0x1ffU & ((IData)(4U) + (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x))) 
           >= (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_comp_width));
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__w_last_in_component 
        = ((IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__w_last_in_row) 
           & ((0x1ffU & ((IData)(1U) + (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y))) 
              >= (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_comp_height)));
}

VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root___eval_stl(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VCTU_RECON_EXPORT_TB___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root___eval_triggers__stl(VCTU_RECON_EXPORT_TB___024root* vlSelf);

VL_ATTR_COLD bool VCTU_RECON_EXPORT_TB___024root___eval_phase__stl(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VCTU_RECON_EXPORT_TB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VCTU_RECON_EXPORT_TB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root___dump_triggers__act(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge CTU_RECON_EXPORT_TB.I_CLK)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge CTU_RECON_EXPORT_TB.I_CLK or negedge CTU_RECON_EXPORT_TB.I_RESETN)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root___dump_triggers__nba(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge CTU_RECON_EXPORT_TB.I_CLK)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge CTU_RECON_EXPORT_TB.I_CLK or negedge CTU_RECON_EXPORT_TB.I_RESETN)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root___ctor_var_reset(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CLK = VL_RAND_RESET_I(1);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_RESETN = VL_RAND_RESET_I(1);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_EXPORT_START_VALID = VL_RAND_RESET_I(1);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_ID = VL_RAND_RESET_I(9);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_WIDTH = VL_RAND_RESET_I(8);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_HEIGHT = VL_RAND_RESET_I(8);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__O_RAM_RD_ADDR = VL_RAND_RESET_I(12);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__I_DATA_READY = VL_RAND_RESET_I(1);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_comp = VL_RAND_RESET_I(2);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr = VL_RAND_RESET_I(12);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data = VL_RAND_RESET_Q(64);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__case_id = VL_RAND_RESET_I(32);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats = VL_RAND_RESET_I(32);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats = VL_RAND_RESET_I(32);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__reads = VL_RAND_RESET_I(32);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_comp = VL_RAND_RESET_I(32);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_x = VL_RAND_RESET_I(32);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_y = VL_RAND_RESET_I(32);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__w = VL_RAND_RESET_I(32);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__h = VL_RAND_RESET_I(32);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__done_seen = VL_RAND_RESET_I(32);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__export_active = 0;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_data = VL_RAND_RESET_Q(64);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_comp = VL_RAND_RESET_I(2);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_x = VL_RAND_RESET_I(7);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_y = VL_RAND_RESET_I(7);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_row_last = VL_RAND_RESET_I(1);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_comp_last = VL_RAND_RESET_I(1);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_ctu_last = VL_RAND_RESET_I(1);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__was_stalled = 0;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__cw = VL_RAND_RESET_I(32);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__ch = VL_RAND_RESET_I(32);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__addr = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__w_rd_component_valid = VL_RAND_RESET_I(1);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_rd_data = VL_RAND_RESET_Q(64);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_rd_valid = VL_RAND_RESET_I(1);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state = VL_RAND_RESET_I(3);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_ctu_id = VL_RAND_RESET_I(9);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_luma_width = VL_RAND_RESET_I(8);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_luma_height = VL_RAND_RESET_I(8);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_comp_width = VL_RAND_RESET_I(8);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_comp_height = VL_RAND_RESET_I(8);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component = VL_RAND_RESET_I(2);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x = VL_RAND_RESET_I(8);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y = VL_RAND_RESET_I(8);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_data = VL_RAND_RESET_Q(64);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_row_last = VL_RAND_RESET_I(1);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component_last = VL_RAND_RESET_I(1);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_ctu_last = VL_RAND_RESET_I(1);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_done = VL_RAND_RESET_I(1);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__w_last_in_row = VL_RAND_RESET_I(1);
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__w_last_in_component = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v0 = 0;
    vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v0 = 0;
    vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v0 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v0 = 0;
    vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v1 = 0;
    vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v1 = 0;
    vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v1 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v2 = 0;
    vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v2 = 0;
    vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v2 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v3 = 0;
    vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v3 = 0;
    vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v3 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v0 = 0;
    vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v0 = 0;
    vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v0 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v0 = 0;
    vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v1 = 0;
    vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v1 = 0;
    vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v1 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v2 = 0;
    vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v2 = 0;
    vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v2 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v3 = 0;
    vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v3 = 0;
    vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v3 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v0 = 0;
    vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v0 = 0;
    vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v0 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v0 = 0;
    vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v1 = 0;
    vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v1 = 0;
    vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v1 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v2 = 0;
    vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v2 = 0;
    vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v2 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v3 = 0;
    vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v3 = 0;
    vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v3 = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__CTU_RECON_EXPORT_TB__DOT__I_CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CTU_RECON_EXPORT_TB__DOT__I_RESETN__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
