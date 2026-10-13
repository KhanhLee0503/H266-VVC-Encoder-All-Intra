// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_INV_TRANSPOSE_MEMORY_TB.h for the primary calling header

#include "VTQ_INV_TRANSPOSE_MEMORY_TB__pch.h"
#include "VTQ_INV_TRANSPOSE_MEMORY_TB___024root.h"

VL_ATTR_COLD void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_initial__TOP(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf);
VlCoroutine VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_initial__TOP__Vtiming__0(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf);
VlCoroutine VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_initial__TOP__Vtiming__1(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf);
VlCoroutine VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_initial__TOP__Vtiming__2(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf);

void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_initial(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_initial\n"); );
    // Body
    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_CLK__0 
        = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_CLK;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_RESETN__0 
        = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_RESETN;
    vlSelf->__Vtrigprevexpr_hd70218bd__0 = (0x14U == vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_tu_completed);
}

VL_INLINE_OPT VlCoroutine VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_initial__TOP__Vtiming__0(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_CLK = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "../01_tb/INV_TRANS_QUANT/TQ_INV_TRANSPOSE_MEMORY_TB.sv", 
                                           114);
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_CLK 
            = (1U & (~ (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_CLK)));
    }
}

VL_INLINE_OPT void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___act_comb__TOP__0(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_fifo_pop 
        = ((0U != (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_count)) 
           & (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_RD_READY));
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_WR_READY 
        = ((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_active) 
           | (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_free_exists));
    if (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_active) {
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
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_width 
            = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_WIDTH;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_height 
            = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_HEIGHT;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_row_group = 0U;
    }
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
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_read_issue 
        = ((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_active) 
           & (((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_issue_count) 
               < (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_total_beats)) 
              & (2U > (7U & (((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_count) 
                              + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_valid)) 
                             - (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_fifo_pop))))));
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
}

void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_act(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_act\n"); );
    // Body
    if ((9ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_INV_TRANSPOSE_MEMORY_TB___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___nba_sequent__TOP__0(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v0;
    __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id__v0;
    __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id__v0 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id__v0;
    __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v1;
    __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v1;
    __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v1 = 0;
    CData/*0:0*/ __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_active;
    __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_active = 0;
    CData/*0:0*/ __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v2;
    __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v2;
    __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v2 = 0;
    CData/*4:0*/ __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_row;
    __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_row = 0;
    CData/*2:0*/ __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_col_group;
    __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_col_group = 0;
    SData/*8:0*/ __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_issue_count;
    __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_issue_count = 0;
    SData/*8:0*/ __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_accept_count;
    __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_accept_count = 0;
    SData/*8:0*/ __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_total_beats;
    __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_total_beats = 0;
    CData/*0:0*/ __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v3;
    __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v3;
    __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v4;
    __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v4 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v5;
    __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v5 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v6;
    __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v6 = 0;
    CData/*0:0*/ __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_data__v0;
    __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_data__v0 = 0;
    QData/*63:0*/ __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_data__v0;
    __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_data__v0;
    __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_data__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_vector_last__v0;
    __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_vector_last__v0 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_vector_last__v0;
    __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_vector_last__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_start__v0;
    __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_start__v0 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_start__v0;
    __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_start__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_last__v0;
    __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_last__v0 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_last__v0;
    __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_last__v0 = 0;
    // Body
    vlSelf->__Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_head 
        = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_head;
    vlSelf->__Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_queue__v0 = 0U;
    vlSelf->__Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_count 
        = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_count;
    __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_data__v0 = 0U;
    __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_accept_count 
        = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_accept_count;
    vlSelf->__Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_PROTOCOL_ERROR 
        = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_PROTOCOL_ERROR;
    __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_col_group 
        = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_col_group;
    __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_row 
        = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_row;
    __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_total_beats 
        = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_total_beats;
    __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_issue_count 
        = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_issue_count;
    __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_active 
        = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_active;
    __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v1 = 0U;
    __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v2 = 0U;
    __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v3 = 0U;
    __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v4 = 0U;
    __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v5 = 0U;
    __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v6 = 0U;
    vlSelf->__Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id__v1 = 0U;
    vlSelf->__Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_RESETN)))) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__unnamedblk6__DOT__b = 2U;
    }
    if (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_RESETN) {
        if (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_TU_DONE_VALID) {
            vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__unnamedblk7__DOT__b = 2U;
            if (((4U == vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state
                  [0U]) & (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id
                           [0U] == (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_TU_DONE_ID)))) {
                __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v4 = 1U;
            }
            if (((4U == vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state
                  [1U]) & (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id
                           [1U] == (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_TU_DONE_ID)))) {
                __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v5 = 1U;
            }
        }
        if (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_ready_pop) {
            vlSelf->__Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_head 
                = (1U & (~ (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_head)));
            __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_active = 1U;
            __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v2 = 1U;
            __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v2 
                = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_queue
                [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_head];
            __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_row = 0U;
            __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_col_group = 0U;
            __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_issue_count = 0U;
            __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_accept_count = 0U;
            __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_total_beats 
                = (0x1ffU & ((IData)(4U) << (7U & (
                                                   vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_width
                                                   [
                                                   vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_queue
                                                   [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_head]] 
                                                   + 
                                                   vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_height
                                                   [
                                                   vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_queue
                                                   [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_head]]))));
        } else if (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_active) {
            if (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_read_issue) {
                __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_issue_count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_issue_count)));
                if (((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_col_group) 
                     == (0xfU & (((IData)(1U) << vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_width
                                  [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_buffer_id]) 
                                 - (IData)(1U))))) {
                    __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_row 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_row)));
                    __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_col_group = 0U;
                } else {
                    __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_col_group 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_col_group)));
                }
            }
            if (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_fifo_pop) {
                __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_accept_count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_accept_count)));
                if (((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_accept_count) 
                     == (0x1ffU & ((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_total_beats) 
                                   - (IData)(1U))))) {
                    __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_active = 0U;
                    __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v3 = 1U;
                    __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v3 
                        = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_buffer_id;
                }
            }
        }
        if (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_fifo_pop) {
            vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_head 
                = (1U & (~ (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_head)));
        }
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_count 
            = (3U & ((2U == (((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_final) 
                              << 1U) | (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_ready_pop)))
                      ? ((IData)(1U) + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_count))
                      : ((1U == (((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_final) 
                                  << 1U) | (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_ready_pop)))
                          ? ((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_count) 
                             - (IData)(1U)) : (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_count))));
        if (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_final) {
            vlSelf->__Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_queue__v0 
                = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id;
            vlSelf->__Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_queue__v0 = 1U;
            vlSelf->__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_queue__v0 
                = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_tail;
            vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_tail 
                = (1U & (~ (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_tail)));
        }
        vlSelf->__Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_count 
            = (3U & ((2U == (((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_valid) 
                              << 1U) | (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_fifo_pop)))
                      ? ((IData)(1U) + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_count))
                      : ((1U == (((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_valid) 
                                  << 1U) | (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_fifo_pop)))
                          ? ((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_count) 
                             - (IData)(1U)) : (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_count))));
        if (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_valid) {
            __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_data__v0 
                = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_pipe_data;
            __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_data__v0 = 1U;
            __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_data__v0 
                = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tail;
            __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_vector_last__v0 
                = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_vector_last;
            __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_vector_last__v0 
                = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tail;
            __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_start__v0 
                = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_tu_start;
            __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_start__v0 
                = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tail;
            __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_last__v0 
                = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_tu_last;
            __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_last__v0 
                = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tail;
            vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tail 
                = (1U & (~ (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tail)));
        }
        if (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_read_issue) {
            vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_row_low 
                = (3U & (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_row));
            vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_buffer_id 
                = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_buffer_id;
            vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_tu_start 
                = (0U == (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_issue_count));
            vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_tu_last 
                = ((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_issue_count) 
                   == (0x1ffU & ((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_total_beats) 
                                 - (IData)(1U))));
            vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_vector_last 
                = ((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_col_group) 
                   == (0xfU & (((IData)(1U) << vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_width
                                [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_buffer_id]) 
                               - (IData)(1U))));
        }
        if (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_fire) {
            if ((1U & ((((~ (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_active)) 
                         & (~ (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_TU_START))) 
                        | ((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_active) 
                           & (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_TU_START))) 
                       | ((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_TU_LAST) 
                          != (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_final))))) {
                vlSelf->__Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_PROTOCOL_ERROR = 1U;
            }
            if ((1U & (~ (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_active)))) {
                vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_buffer_id 
                    = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id;
                vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_active = 1U;
                vlSelf->__Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v0 = 1U;
                __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v0 
                    = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id;
                __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id__v0 
                    = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_TU_ID;
                __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id__v0 
                    = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id;
                vlSelf->__Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_width__v0 
                    = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_WIDTH;
                vlSelf->__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_width__v0 
                    = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id;
                vlSelf->__Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_height__v0 
                    = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_HEIGHT;
                vlSelf->__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_height__v0 
                    = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id;
                vlSelf->__Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_hor__v0 
                    = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_TRANSFORM_HOR;
                vlSelf->__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_hor__v0 
                    = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id;
                vlSelf->__Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_ver__v0 
                    = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_TRANSFORM_VER;
                vlSelf->__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_ver__v0 
                    = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id;
                vlSelf->__Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_component__v0 
                    = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_COMPONENT;
                vlSelf->__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_component__v0 
                    = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id;
            }
            if (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_final) {
                vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_row_group = 0U;
                vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_col = 0U;
                vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_active = 0U;
                __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v1 = 1U;
                __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v1 
                    = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id;
            } else if (((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_row_group) 
                        == (0xfU & (((IData)(1U) << (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_height)) 
                                    - (IData)(1U))))) {
                vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_row_group = 0U;
                vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_col 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col)));
            } else {
                vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_row_group 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_row_group)));
                vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_col 
                    = (0x1fU & (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col));
            }
        }
    } else {
        vlSelf->__Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_head = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_head = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_count = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_tail = 0U;
        vlSelf->__Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_count = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tail = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_row_low = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_buffer_id = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_row_group = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_col = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_active = 0U;
        __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v6 = 1U;
        vlSelf->__Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_PROTOCOL_ERROR = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_buffer_id = 0U;
        __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_active = 0U;
        __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_row = 0U;
        __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_col_group = 0U;
        __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_issue_count = 0U;
        __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_accept_count = 0U;
        __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_total_beats = 0U;
        vlSelf->__Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id__v1 = 1U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_tu_start = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_tu_last = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_vector_last = 0U;
    }
    if (__Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_data__v0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_last[__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_last__v0] 
            = __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_last__v0;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_start[__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_start__v0] 
            = __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_start__v0;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_vector_last[__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_vector_last__v0] 
            = __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_vector_last__v0;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_data[__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_data__v0] 
            = __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_data__v0;
    }
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_accept_count 
        = __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_accept_count;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_row 
        = __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_row;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_active 
        = __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_active;
    if (vlSelf->__Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id[__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id__v0] 
            = __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id__v0;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state[__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v0] = 1U;
    }
    if (__Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v1) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state[__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v1] = 2U;
    }
    if (__Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v2) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state[__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v2] = 3U;
    }
    if (__Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v3) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state[__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v3] = 4U;
    }
    if (__Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v4) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state[0U] = 0U;
    }
    if (__Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v5) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state[1U] = 0U;
    }
    if (__Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v6) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id__v1) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id[0U] = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id[1U] = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state[1U] = 0U;
    }
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_valid 
        = ((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_read_issue));
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
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_total_beats 
        = __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_total_beats;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_issue_count 
        = __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_issue_count;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_col_group 
        = __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_col_group;
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id 
        = ((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_active)
            ? (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_buffer_id)
            : (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_free_buffer_id));
}

VL_INLINE_OPT void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___nba_sequent__TOP__2(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_PROTOCOL_ERROR 
        = vlSelf->__Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_PROTOCOL_ERROR;
    if (vlSelf->__Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_hor[vlSelf->__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_hor__v0] 
            = vlSelf->__Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_hor__v0;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_ver[vlSelf->__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_ver__v0] 
            = vlSelf->__Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_ver__v0;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_component[vlSelf->__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_component__v0] 
            = vlSelf->__Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_component__v0;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_height[vlSelf->__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_height__v0] 
            = vlSelf->__Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_height__v0;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_width[vlSelf->__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_width__v0] 
            = vlSelf->__Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_width__v0;
    }
    if (vlSelf->__Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id__v1) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_hor[0U] = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_hor[1U] = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_ver[0U] = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_ver[1U] = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_component[0U] = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_component[1U] = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_height[0U] = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_height[1U] = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_width[0U] = 0U;
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_width[1U] = 0U;
    }
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_count 
        = vlSelf->__Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_count;
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
    if (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_RESETN) {
        if (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_ready_pop) {
            vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_buffer_id 
                = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_queue
                [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_head];
        }
    } else {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_buffer_id = 0U;
    }
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_head 
        = vlSelf->__Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_head;
    if (vlSelf->__Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_queue__v0) {
        vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_queue[vlSelf->__Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_queue__v0] 
            = vlSelf->__Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_queue__v0;
    }
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_ready_pop 
        = ((~ (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_active)) 
           & ((0U != (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_count)) 
              & ((~ (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_valid)) 
                 & (0U == (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_count)))));
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_TU_ID 
        = vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id
        [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_buffer_id];
    vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_read_bank_addr 
        = (0xffU & (((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_row) 
                     << vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_width
                     [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_buffer_id]) 
                    + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_col_group)));
}

VL_INLINE_OPT void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___nba_comb__TOP__0(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___nba_comb__TOP__0\n"); );
    // Body
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
}

void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___nba_sequent__TOP__1(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf);

void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_nba(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INV_TRANSPOSE_MEMORY_TB___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INV_TRANSPOSE_MEMORY_TB___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INV_TRANSPOSE_MEMORY_TB___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INV_TRANSPOSE_MEMORY_TB___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0xbULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INV_TRANSPOSE_MEMORY_TB___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
}

void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___timing_resume(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hfea358fc__0.resume("@(posedge TQ_INV_TRANSPOSE_MEMORY_TB.I_CLK)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4eb64ecb__0.resume("@([changed] (32'sh14 == TQ_INV_TRANSPOSE_MEMORY_TB.r_tu_completed))");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___timing_commit(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hfea358fc__0.commit("@(posedge TQ_INV_TRANSPOSE_MEMORY_TB.I_CLK)");
    }
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4eb64ecb__0.commit("@([changed] (32'sh14 == TQ_INV_TRANSPOSE_MEMORY_TB.r_tu_completed))");
    }
}

void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_triggers__act(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf);

bool VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_phase__act(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_triggers__act(vlSelf);
    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTQ_INV_TRANSPOSE_MEMORY_TB___024root___timing_resume(vlSelf);
        VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_phase__nba(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___dump_triggers__nba(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___dump_triggers__act(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTQ_INV_TRANSPOSE_MEMORY_TB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/INV_TRANS_QUANT/TQ_INV_TRANSPOSE_MEMORY_TB.sv", 9, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTQ_INV_TRANSPOSE_MEMORY_TB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../01_tb/INV_TRANS_QUANT/TQ_INV_TRANSPOSE_MEMORY_TB.sv", 9, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_debug_assertions(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
