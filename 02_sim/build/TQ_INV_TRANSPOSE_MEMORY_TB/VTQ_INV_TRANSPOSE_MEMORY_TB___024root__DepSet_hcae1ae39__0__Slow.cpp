// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_INV_TRANSPOSE_MEMORY_TB.h for the primary calling header

#include "VTQ_INV_TRANSPOSE_MEMORY_TB__pch.h"
#include "VTQ_INV_TRANSPOSE_MEMORY_TB___024root.h"

VL_ATTR_COLD void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_static(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_final(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___dump_triggers__stl(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_phase__stl(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf);

VL_ATTR_COLD void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_settle(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_settle\n"); );
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
            VTQ_INV_TRANSPOSE_MEMORY_TB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/INV_TRANS_QUANT/TQ_INV_TRANSPOSE_MEMORY_TB.sv", 9, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___dump_triggers__stl(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___stl_sequent__TOP__0(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_TU_ID 
        = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id
        [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_buffer_id];
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_DATA = 0ULL;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_VECTOR_LAST = 0U;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_TU_START = 0U;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_TU_LAST = 0U;
    if ((0U != (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_count))) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_DATA 
            = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_data
            [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_head];
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_VECTOR_LAST 
            = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_vector_last
            [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_head];
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_TU_START 
            = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_start
            [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_head];
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_TU_LAST 
            = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_last
            [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_head];
    }
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_read_bank_addr 
        = (0xffU & (((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_row) 
                     << vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_width
                     [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_buffer_id]) 
                    + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_col_group)));
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_ready_pop 
        = ((~ (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_active)) 
           & ((0U != (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_count)) 
              & ((~ (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_valid)) 
                 & (0U == (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_count)))));
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_data[0U][0U] 
        = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_data[0U][1U] 
        = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_data[0U][2U] 
        = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_data[0U][3U] 
        = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_data[1U][0U] 
        = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_data[1U][1U] 
        = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_data[1U][2U] 
        = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_data[1U][3U] 
        = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_fifo_pop 
        = ((0U != (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_count)) 
           & (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_RD_READY));
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_free_buffer_id = 0U;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_free_exists = 0U;
    if ((0U == vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state
         [0U])) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_free_buffer_id = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_free_exists = 1U;
    } else if ((0U == vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state
                [1U])) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_free_buffer_id = 1U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_free_exists = 1U;
    }
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_pipe_data = 0ULL;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_pipe_data 
        = ((0xffffffff00000000ULL & vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_pipe_data) 
           | (IData)((IData)(((vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_data
                               [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_buffer_id]
                               [(3U & ((IData)(1U) 
                                       + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_row_low)))] 
                               << 0x10U) | vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_data
                              [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_buffer_id]
                              [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_row_low]))));
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_pipe_data 
        = ((0xffffffffULL & vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_pipe_data) 
           | ((QData)((IData)(((vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_data
                                [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_buffer_id]
                                [(3U & ((IData)(3U) 
                                        + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_row_low)))] 
                                << 0x10U) | vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_data
                               [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_buffer_id]
                               [(3U & ((IData)(2U) 
                                       + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_row_low)))]))) 
              << 0x20U));
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_read_issue 
        = ((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_active) 
           & (((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_issue_count) 
               < (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_total_beats)) 
              & (2U > (7U & (((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_count) 
                              + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_valid)) 
                             - (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_fifo_pop))))));
    if (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_active) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id 
            = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_buffer_id;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_width 
            = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_width
            [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_buffer_id];
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_height 
            = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_height
            [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_buffer_id];
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col 
            = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_col;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_row_group 
            = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_row_group;
    } else {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id 
            = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_free_buffer_id;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_width 
            = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_WIDTH;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_height 
            = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_HEIGHT;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_row_group = 0U;
    }
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_WR_READY 
        = ((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_active) 
           | (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_free_exists));
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_fire 
        = ((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_VALID) 
           & (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_WR_READY));
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_final 
        = (((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_fire) 
            & ((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col) 
               == (0x3fU & (((IData)(4U) << (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_width)) 
                            - (IData)(1U))))) & ((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_row_group) 
                                                 == 
                                                 (0xfU 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_height)) 
                                                     - (IData)(1U)))));
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_en[0U] = 0U;
    if (((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_read_issue) 
         & (~ (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_buffer_id)))) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_en[0U] = 0xfU;
    }
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_en[1U] = 0U;
    if (((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_read_issue) 
         & (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_buffer_id))) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_en[1U] = 0xfU;
    }
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_en[0U] = 0U;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_en[1U] = 0U;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data[0U][0U] = 0U;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data[0U][1U] = 0U;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data[0U][2U] = 0U;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data[0U][3U] = 0U;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data[1U][0U] = 0U;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data[1U][1U] = 0U;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data[1U][2U] = 0U;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data[1U][3U] = 0U;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr[0U][0U] = 0U;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr[0U][1U] = 0U;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr[0U][2U] = 0U;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr[0U][3U] = 0U;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr[1U][0U] = 0U;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr[1U][1U] = 0U;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr[1U][2U] = 0U;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr[1U][3U] = 0U;
    if (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_fire) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__unnamedblk3__DOT__lane = 4U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_en[vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id] 
            = (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_en
               [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id] 
               | (0xfU & ((IData)(1U) << (3U & (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col)))));
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_en[vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id] 
            = (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_en
               [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id] 
               | (0xfU & ((IData)(1U) << (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col))))));
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_en[vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id] 
            = (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_en
               [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id] 
               | (0xfU & ((IData)(1U) << (3U & ((IData)(2U) 
                                                + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col))))));
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_en[vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id] 
            = (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_en
               [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id] 
               | (0xfU & ((IData)(1U) << (3U & ((IData)(3U) 
                                                + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col))))));
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data[vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id][(3U 
                                                                                & (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col))] 
            = (0xffffU & (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_DATA));
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data[vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id][(3U 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col)))] 
            = (0xffffU & (IData)((vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_DATA 
                                  >> 0x10U)));
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data[vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id][(3U 
                                                                                & ((IData)(2U) 
                                                                                + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col)))] 
            = (0xffffU & (IData)((vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_DATA 
                                  >> 0x20U)));
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data[vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id][(3U 
                                                                                & ((IData)(3U) 
                                                                                + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col)))] 
            = (0xffffU & (IData)((vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_DATA 
                                  >> 0x30U)));
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr[vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id][(3U 
                                                                                & (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col))] 
            = (0xffU & ((((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_row_group) 
                          << 2U) << (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_width)) 
                        + VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col), 2U)));
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr[vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id][(3U 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col)))] 
            = (0xffU & ((((IData)(1U) + ((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_row_group) 
                                         << 2U)) << (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_width)) 
                        + VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col), 2U)));
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr[vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id][(3U 
                                                                                & ((IData)(2U) 
                                                                                + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col)))] 
            = (0xffU & ((((IData)(2U) + ((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_row_group) 
                                         << 2U)) << (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_width)) 
                        + VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col), 2U)));
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr[vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id][(3U 
                                                                                & ((IData)(3U) 
                                                                                + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col)))] 
            = (0xffU & ((((IData)(3U) + ((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_row_group) 
                                         << 2U)) << (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_width)) 
                        + VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col), 2U)));
    }
}

VL_ATTR_COLD void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_stl(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_INV_TRANSPOSE_MEMORY_TB___024root___stl_sequent__TOP__0(vlSelf);
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

VL_ATTR_COLD void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_triggers__stl(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf);

VL_ATTR_COLD bool VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_phase__stl(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___dump_triggers__act(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge TQ_INV_TRANSPOSE_MEMORY_TB.I_CLK)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge TQ_INV_TRANSPOSE_MEMORY_TB.I_CLK or negedge TQ_INV_TRANSPOSE_MEMORY_TB.I_RESETN)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] (32'sh14 == TQ_INV_TRANSPOSE_MEMORY_TB.r_tu_completed))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___dump_triggers__nba(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge TQ_INV_TRANSPOSE_MEMORY_TB.I_CLK)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge TQ_INV_TRANSPOSE_MEMORY_TB.I_CLK or negedge TQ_INV_TRANSPOSE_MEMORY_TB.I_RESETN)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] (32'sh14 == TQ_INV_TRANSPOSE_MEMORY_TB.r_tu_completed))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___ctor_var_reset(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_CLK = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_RESETN = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_DATA = VL_RAND_RESET_Q(64);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_VALID = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_WR_READY = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_TU_START = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_TU_LAST = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_TU_ID = VL_RAND_RESET_I(16);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_WIDTH = VL_RAND_RESET_I(2);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_HEIGHT = VL_RAND_RESET_I(2);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_TRANSFORM_HOR = VL_RAND_RESET_I(2);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_TRANSFORM_VER = VL_RAND_RESET_I(2);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_COMPONENT = VL_RAND_RESET_I(2);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_DATA = VL_RAND_RESET_Q(64);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_RD_READY = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_VECTOR_LAST = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_TU_START = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_TU_LAST = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_TU_ID = VL_RAND_RESET_I(16);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_TU_DONE_VALID = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_TU_DONE_ID = VL_RAND_RESET_I(16);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_PROTOCOL_ERROR = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_cycle = VL_RAND_RESET_I(32);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_tu_completed = VL_RAND_RESET_I(32);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_output_beat = VL_RAND_RESET_I(32);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_stall_cycles = VL_RAND_RESET_I(32);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_tu_last_stalls = VL_RAND_RESET_I(32);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_input_stalls = VL_RAND_RESET_I(32);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_simultaneous_cycles = VL_RAND_RESET_I(32);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_active_tu = VL_RAND_RESET_I(32);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_stalled = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_held_data = VL_RAND_RESET_Q(64);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_held_start = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_held_vector_last = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_held_tu_last = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_held_id = VL_RAND_RESET_I(16);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_release_pipe_valid = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_release_pipe_id[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__unnamedblk3__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__w = VL_RAND_RESET_I(32);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__h = VL_RAND_RESET_I(32);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__row = VL_RAND_RESET_I(32);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__col_base = VL_RAND_RESET_I(32);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__expected_beats = VL_RAND_RESET_I(32);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__expected = VL_RAND_RESET_I(16);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__actual = VL_RAND_RESET_I(16);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__unnamedblk4__DOT__lane = VL_RAND_RESET_I(32);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__unnamedblk5__DOT__tu = VL_RAND_RESET_I(32);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT____Vlvbound_h7ae380de__0 = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT____Vlvbound_h673fde31__0 = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_width[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_height[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_hor[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_ver[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_component[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_active = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_buffer_id = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_col = VL_RAND_RESET_I(5);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_row_group = VL_RAND_RESET_I(3);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_free_exists = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_free_buffer_id = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_width = VL_RAND_RESET_I(2);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_height = VL_RAND_RESET_I(2);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col = VL_RAND_RESET_I(5);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_row_group = VL_RAND_RESET_I(3);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_fire = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_final = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_en[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_queue[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_head = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_tail = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_count = VL_RAND_RESET_I(2);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_ready_pop = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_active = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_buffer_id = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_row = VL_RAND_RESET_I(5);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_col_group = VL_RAND_RESET_I(3);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_issue_count = VL_RAND_RESET_I(9);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_accept_count = VL_RAND_RESET_I(9);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_total_beats = VL_RAND_RESET_I(9);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_read_issue = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_read_bank_addr = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_en[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_data[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_buffer_id = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_row_low = VL_RAND_RESET_I(2);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_vector_last = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_tu_start = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_tu_last = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_pipe_data = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_vector_last[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_start[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_last[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_head = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tail = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_count = VL_RAND_RESET_I(2);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_fifo_pop = VL_RAND_RESET_I(1);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__unnamedblk3__DOT__lane = VL_RAND_RESET_I(32);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__O_RD_DATA = VL_RAND_RESET_I(16);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__O_RD_DATA = VL_RAND_RESET_I(16);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__O_RD_DATA = VL_RAND_RESET_I(16);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__O_RD_DATA = VL_RAND_RESET_I(16);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__O_RD_DATA = VL_RAND_RESET_I(16);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__O_RD_DATA = VL_RAND_RESET_I(16);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__O_RD_DATA = VL_RAND_RESET_I(16);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__O_RD_DATA = VL_RAND_RESET_I(16);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__unnamedblk7__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__unnamedblk6__DOT__b = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_PROTOCOL_ERROR = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v0 = 0;
    vlSelf->__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_width__v0 = 0;
    vlSelf->__Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_width__v0 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_height__v0 = 0;
    vlSelf->__Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_height__v0 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_hor__v0 = 0;
    vlSelf->__Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_hor__v0 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_ver__v0 = 0;
    vlSelf->__Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_ver__v0 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_component__v0 = 0;
    vlSelf->__Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_component__v0 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id__v1 = 0;
    vlSelf->__Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_head = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_queue__v0 = 0;
    vlSelf->__Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_queue__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_queue__v0 = 0;
    vlSelf->__Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_count = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_RESETN__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hd70218bd__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
