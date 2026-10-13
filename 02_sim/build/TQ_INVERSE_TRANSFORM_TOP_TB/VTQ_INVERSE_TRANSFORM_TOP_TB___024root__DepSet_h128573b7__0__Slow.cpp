// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_INVERSE_TRANSFORM_TOP_TB.h for the primary calling header

#include "VTQ_INVERSE_TRANSFORM_TOP_TB__pch.h"
#include "VTQ_INVERSE_TRANSFORM_TOP_TB___024root.h"

VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_static(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_initial__TOP(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_CLK = 0U;
}

VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_final(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___dump_triggers__stl(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_phase__stl(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf);

VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_settle(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_settle\n"); );
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
            VTQ_INVERSE_TRANSFORM_TOP_TB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 12, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___dump_triggers__stl(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_column_1d.u_idst7_idct8_core.u_idst7_mcm_8.w_product)\n");
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_column_1d.u_idct2_core.u_idct2_base_2.w_ready)\n");
    }
    if ((8ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_column_1d.u_idct2_core.u_idct2_odd_mcm_4.w_ready)\n");
    }
    if ((0x10ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_column_1d.u_idct2_core.u_idct2_odd_mcm_8.w_ready)\n");
    }
    if ((0x20ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_row_1d.u_idst7_idct8_core.u_idst7_mcm_8.w_product)\n");
    }
    if ((0x40ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_row_1d.u_idct2_core.u_idct2_base_2.w_ready)\n");
    }
    if ((0x80ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_row_1d.u_idct2_core.u_idct2_odd_mcm_4.w_ready)\n");
    }
    if ((0x100ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_row_1d.u_idct2_core.u_idct2_odd_mcm_8.w_ready)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___stl_sequent__TOP__0(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scaled_data 
        = (((QData)((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data
                            [3U])) << 0x30U) | (((QData)((IData)(
                                                                 ((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data
                                                                   [2U] 
                                                                   << 0x10U) 
                                                                  | vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data
                                                                  [1U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data
                                                                  [0U]))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_id 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_tu_id
        [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id];
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_ver 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_ver
        [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id];
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_vector_last = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_start = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_last = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_read_bank_addr 
        = (0xffU & (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_row) 
                     << vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_width
                     [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id]) 
                    + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_col_group)));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_ready_pop 
        = ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_active)) 
           & ((0U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_count)) 
              & ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_valid)) 
                 & (0U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_count)))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_last 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_write_count) 
           == (0x1ffU & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_total_beats) 
                         - (IData)(1U))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_scaled_data 
        = (((QData)((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data
                            [3U])) << 0x30U) | (((QData)((IData)(
                                                                 ((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data
                                                                   [2U] 
                                                                   << 0x10U) 
                                                                  | vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data
                                                                  [1U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data
                                                                  [0U]))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_first_total_beats 
        = (0x1ffU & ((IData)(4U) << (7U & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_WIDTH) 
                                           + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_HEIGHT)))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_height 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_height
        [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id];
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data[0U][0U] 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data[0U][1U] 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data[0U][2U] 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data[0U][3U] 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data[1U][0U] 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data[1U][1U] 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data[1U][2U] 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data[1U][3U] 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_free_buffer_id = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data = 0ULL;
    if ((0U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_count))) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_vector_last 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_vector_last
            [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_head];
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_start 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_start
            [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_head];
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_last 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_last
            [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_head];
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_data
            [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_head];
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_component 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_component
        [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id];
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hdd45bd79__0 
        = ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR)) 
           & (0U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_state)));
    if ((0U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_state))) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_size 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_HEIGHT;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_type 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TRANSFORM_VER;
    } else {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_size 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_height;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_type 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_ver;
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_free_exists = 0U;
    if ((0U == vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state
         [0U])) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_free_buffer_id = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_free_exists = 1U;
    } else if ((0U == vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state
                [1U])) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_free_buffer_id = 1U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_free_exists = 1U;
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_width 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_width
        [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id];
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hbca79e53__0 
        = ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR)) 
           & (0U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_state)));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_hor 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_hor
        [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id];
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_pipe_data = 0ULL;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_pipe_data 
        = ((0xffffffff00000000ULL & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_pipe_data) 
           | (IData)((IData)(((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data
                               [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_buffer_id]
                               [(3U & ((IData)(1U) 
                                       + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_row_low)))] 
                               << 0x10U) | vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data
                              [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_buffer_id]
                              [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_row_low]))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_pipe_data 
        = ((0xffffffffULL & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_pipe_data) 
           | ((QData)((IData)(((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data
                                [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_buffer_id]
                                [(3U & ((IData)(3U) 
                                        + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_row_low)))] 
                                << 0x10U) | vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data
                               [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_buffer_id]
                               [(3U & ((IData)(2U) 
                                       + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_row_low)))]))) 
              << 0x20U));
    if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_active) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_buffer_id;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_width 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_width
            [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_buffer_id];
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_height 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_height
            [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_buffer_id];
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_col;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_row_group 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_row_group;
    } else {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_free_buffer_id;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_width 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_width;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_height 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_height;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_row_group = 0U;
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_DATA_VALID 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_valid) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hdd45bd79__0));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_stage2_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_valid)) 
                 | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_OUTPUT_READY) 
                    & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hdd45bd79__0))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_first_total_beats 
        = (0x1ffU & ((IData)(4U) << (7U & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_width) 
                                           + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_height)))));
    if ((0U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_state))) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_size 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_width;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_type 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_hor;
    } else {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_size 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_width;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_type 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_hor;
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_valid 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_valid) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hbca79e53__0));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_valid_type 
        = ((3U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_hor)) 
           & (3U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_component)));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_TU_START 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_DATA_VALID) 
           & (0U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_result_count)));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_VECTOR_LAST 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_DATA_VALID) 
           & (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_result_count) 
               & (((IData)(1U) << (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_width)) 
                  - (IData)(1U))) == (0x1ffU & (((IData)(1U) 
                                                 << (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_width)) 
                                                - (IData)(1U)))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_result_fire 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_DATA_VALID) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_OUTPUT_READY));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_TU_LAST 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_DATA_VALID) 
           & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_result_count) 
              == (0x1ffU & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_total_beats) 
                            - (IData)(1U)))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_stage1_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_valid)) 
                 | (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_stage2_ready)));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_ready 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_active) 
           | (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_free_exists));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_fire 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_valid) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_ready));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_final 
        = (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_fire) 
            & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col) 
               == (0x3fU & (((IData)(4U) << (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_width)) 
                            - (IData)(1U))))) & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_row_group) 
                                                 == 
                                                 (0xfU 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_height)) 
                                                     - (IData)(1U)))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_allow_row 
        = ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR)) 
           & ((1U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_state)) 
              | ((0U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_state)) 
                 & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_valid_type))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_final_result 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_result_fire) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_TU_LAST));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_raw_ready 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_stage1_ready) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hdd45bd79__0));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en[0U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en[1U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[0U][0U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[0U][1U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[0U][2U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[0U][3U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[1U][0U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[1U][1U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[1U][2U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[1U][3U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[0U][0U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[0U][1U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[0U][2U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[0U][3U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[1U][0U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[1U][1U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[1U][2U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[1U][3U] = 0U;
    if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_fire) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__unnamedblk3__DOT__lane = 4U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id] 
            = (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
               [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id] 
               | (0xfU & ((IData)(1U) << (3U & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col)))));
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id] 
            = (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
               [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id] 
               | (0xfU & ((IData)(1U) << (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col))))));
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id] 
            = (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
               [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id] 
               | (0xfU & ((IData)(1U) << (3U & ((IData)(2U) 
                                                + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col))))));
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id] 
            = (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
               [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id] 
               | (0xfU & ((IData)(1U) << (3U & ((IData)(3U) 
                                                + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col))))));
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id][(3U 
                                                                                & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col))] 
            = (0xffffU & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_scaled_data));
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id][(3U 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col)))] 
            = (0xffffU & (IData)((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_scaled_data 
                                  >> 0x10U)));
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id][(3U 
                                                                                & ((IData)(2U) 
                                                                                + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col)))] 
            = (0xffffU & (IData)((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_scaled_data 
                                  >> 0x20U)));
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id][(3U 
                                                                                & ((IData)(3U) 
                                                                                + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col)))] 
            = (0xffffU & (IData)((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_scaled_data 
                                  >> 0x30U)));
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id][(3U 
                                                                                & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col))] 
            = (0xffU & ((((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_row_group) 
                          << 2U) << (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_width)) 
                        + VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col), 2U)));
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id][(3U 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col)))] 
            = (0xffU & ((((IData)(1U) + ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_row_group) 
                                         << 2U)) << (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_width)) 
                        + VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col), 2U)));
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id][(3U 
                                                                                & ((IData)(2U) 
                                                                                + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col)))] 
            = (0xffU & ((((IData)(2U) + ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_row_group) 
                                         << 2U)) << (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_width)) 
                        + VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col), 2U)));
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id][(3U 
                                                                                & ((IData)(3U) 
                                                                                + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col)))] 
            = (0xffU & ((((IData)(3U) + ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_row_group) 
                                         << 2U)) << (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_width)) 
                        + VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col), 2U)));
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_mem_write_fire 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_valid) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_ready));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_stage2_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_valid)) 
                 | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_ready) 
                    & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hbca79e53__0))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_allow_col 
        = ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR)) 
           & ((1U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_state)) 
              | ((0U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_state)) 
                 & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_ready) 
                    & ((3U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TRANSFORM_HOR)) 
                       & ((3U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TRANSFORM_VER)) 
                          & (3U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_COMPONENT))))))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_in_valid 
        = ((0U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_count)) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_allow_row));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_final_write 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_mem_write_fire) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_last));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_stage1_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_valid)) 
                 | (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_stage2_ready)));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_in_valid 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA_VALID) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_allow_col));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_raw_ready 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_stage1_ready) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hbca79e53__0));
}

VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_triggers__stl(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf);
VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_stl(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf);

VL_ATTR_COLD bool VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_phase__stl(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___dump_triggers__act(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_column_1d.u_idst7_idct8_core.u_idst7_mcm_8.w_product)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_column_1d.u_idct2_core.u_idct2_base_2.w_ready)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_column_1d.u_idct2_core.u_idct2_odd_mcm_4.w_ready)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_column_1d.u_idct2_core.u_idct2_odd_mcm_8.w_ready)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_row_1d.u_idst7_idct8_core.u_idst7_mcm_8.w_product)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_row_1d.u_idct2_core.u_idct2_base_2.w_ready)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_row_1d.u_idct2_core.u_idct2_odd_mcm_4.w_ready)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_row_1d.u_idct2_core.u_idct2_odd_mcm_8.w_ready)\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge TQ_INVERSE_TRANSFORM_TOP_TB.I_CLK)\n");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(posedge TQ_INVERSE_TRANSFORM_TOP_TB.I_CLK or negedge TQ_INVERSE_TRANSFORM_TOP_TB.I_RESETN)\n");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([changed] TQ_INVERSE_TRANSFORM_TOP_TB.I_RESETN)\n");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([changed] (32'sh10 == TQ_INVERSE_TRANSFORM_TOP_TB.r_rx_tc))\n");
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___dump_triggers__nba(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_column_1d.u_idst7_idct8_core.u_idst7_mcm_8.w_product)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_column_1d.u_idct2_core.u_idct2_base_2.w_ready)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_column_1d.u_idct2_core.u_idct2_odd_mcm_4.w_ready)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_column_1d.u_idct2_core.u_idct2_odd_mcm_8.w_ready)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_row_1d.u_idst7_idct8_core.u_idst7_mcm_8.w_product)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_row_1d.u_idct2_core.u_idct2_base_2.w_ready)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_row_1d.u_idct2_core.u_idct2_odd_mcm_4.w_ready)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_row_1d.u_idct2_core.u_idct2_odd_mcm_8.w_ready)\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge TQ_INVERSE_TRANSFORM_TOP_TB.I_CLK)\n");
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(posedge TQ_INVERSE_TRANSFORM_TOP_TB.I_CLK or negedge TQ_INVERSE_TRANSFORM_TOP_TB.I_RESETN)\n");
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([changed] TQ_INVERSE_TRANSFORM_TOP_TB.I_RESETN)\n");
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([changed] (32'sh10 == TQ_INVERSE_TRANSFORM_TOP_TB.r_rx_tc))\n");
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___ctor_var_reset(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_CLK = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA = VL_RAND_RESET_Q(64);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA_VALID = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_INPUT_READY = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_START = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_LAST = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_ID = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_WIDTH = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_HEIGHT = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TRANSFORM_HOR = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TRANSFORM_VER = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_COMPONENT = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_DATA_VALID = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_OUTPUT_READY = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_TU_START = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_TU_LAST = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_VECTOR_LAST = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_input_mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_golden_mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hmode[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_vmode[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_component[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_cycle = VL_RAND_RESET_I(32);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc = VL_RAND_RESET_I(32);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_beat = VL_RAND_RESET_I(32);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc = VL_RAND_RESET_I(32);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat = VL_RAND_RESET_I(32);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_input_fire_count = VL_RAND_RESET_I(32);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_output_fire_count = VL_RAND_RESET_I(32);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_output_stall_count = VL_RAND_RESET_I(32);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_last_stall_count = VL_RAND_RESET_I(32);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_overlap_cycles = VL_RAND_RESET_I(32);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_active = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hold_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_held_data = VL_RAND_RESET_Q(64);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_held_tu_start = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_held_tu_last = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_held_vector_last = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_held_tu_id = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__unnamedblk1__DOT__lane = VL_RAND_RESET_I(32);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__unnamedblk2__DOT__lane = VL_RAND_RESET_I(32);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__unnamedblk3__DOT__lane = VL_RAND_RESET_I(32);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_in_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_type = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_size = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_raw_ready = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_scale_in_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_scaled_data = VL_RAND_RESET_Q(64);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_ready = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_last = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data = VL_RAND_RESET_Q(64);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_vector_last = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_start = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_last = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_id = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_width = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_height = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_hor = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_ver = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_component = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_error = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_in_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_type = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_size = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_raw_ready = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scale_in_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scaled_data = VL_RAND_RESET_Q(64);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_state = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_state = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_tu_id = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_tu_id = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_width = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_height = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_hor = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_ver = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_component = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_width = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_height = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_hor = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_ver = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_component = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_total_beats = VL_RAND_RESET_I(9);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_input_count = VL_RAND_RESET_I(9);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_raw_count = VL_RAND_RESET_I(9);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_write_count = VL_RAND_RESET_I(9);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_total_beats = VL_RAND_RESET_I(9);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_input_count = VL_RAND_RESET_I(9);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_raw_count = VL_RAND_RESET_I(9);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_result_count = VL_RAND_RESET_I(9);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_outstanding_tus = VL_RAND_RESET_I(3);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_first_total_beats = VL_RAND_RESET_I(9);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_first_total_beats = VL_RAND_RESET_I(9);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_in_fire = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_raw_fire = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_mem_write_fire = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_raw_fire = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_result_fire = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_first = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_first = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_final_input = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_final_write = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_final_input = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_final_result = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_valid_type = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_allow_col = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_allow_row = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hbca79e53__0 = 0;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hdd45bd79__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_extended_input[__Vi0] = VL_RAND_RESET_I(29);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_rounded_data[__Vi0] = VL_RAND_RESET_I(29);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data[__Vi0] = VL_RAND_RESET_I(29);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_stage1_ready = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_stage2_ready = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_id = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_tu_id = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_start = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_last = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_vector_last = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_tu_start = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_tu_last = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_vector_last = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_component = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_component = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_tu_id[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_width[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_height[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_hor[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_ver[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_component[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_active = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_buffer_id = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_col = VL_RAND_RESET_I(5);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_row_group = VL_RAND_RESET_I(3);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_free_exists = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_free_buffer_id = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_width = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_height = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col = VL_RAND_RESET_I(5);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_row_group = VL_RAND_RESET_I(3);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_fire = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_final = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_queue[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_head = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_tail = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_count = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_ready_pop = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_active = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_row = VL_RAND_RESET_I(5);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_col_group = VL_RAND_RESET_I(3);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_issue_count = VL_RAND_RESET_I(9);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_accept_count = VL_RAND_RESET_I(9);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_total_beats = VL_RAND_RESET_I(9);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_read_issue = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_read_bank_addr = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_en[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_buffer_id = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_row_low = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_vector_last = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_tu_start = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_tu_last = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_pipe_data = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_vector_last[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_start[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_last[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_head = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tail = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_count = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_fifo_pop = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__unnamedblk3__DOT__lane = VL_RAND_RESET_I(32);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__O_RD_DATA = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__O_RD_DATA = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__O_RD_DATA = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__O_RD_DATA = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__O_RD_DATA = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__O_RD_DATA = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__O_RD_DATA = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__O_RD_DATA = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__unnamedblk7__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__unnamedblk6__DOT__b = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_extended_input[__Vi0] = VL_RAND_RESET_I(29);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_rounded_data[__Vi0] = VL_RAND_RESET_I(29);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data[__Vi0] = VL_RAND_RESET_I(29);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_stage1_ready = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_stage2_ready = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_id = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_tu_id = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_start = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_last = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_vector_last = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_tu_start = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_tu_last = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_vector_last = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_component = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_component = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_active = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_beat = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA_VALID = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product__0[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready__0 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product__0[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready__0 = VL_RAND_RESET_I(5);
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product__1[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready__1 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready__1 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product__1[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready__1 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready__1 = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h9b5f9cd8__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
