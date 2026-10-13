// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTQ_INVERSE_TRANSFORM_TOP_TB.h for the primary calling header

#ifndef VERILATED_VTQ_INVERSE_TRANSFORM_TOP_TB___024ROOT_H_
#define VERILATED_VTQ_INVERSE_TRANSFORM_TOP_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE;


class VTQ_INVERSE_TRANSFORM_TOP_TB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTQ_INVERSE_TRANSFORM_TOP_TB___024root final : public VerilatedModule {
  public:
    // CELLS
    VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* __PVT__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d;
    VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* __PVT__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_CLK;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA_VALID;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_INPUT_READY;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_START;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_LAST;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_WIDTH;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_HEIGHT;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TRANSFORM_HOR;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TRANSFORM_VER;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_COMPONENT;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_DATA_VALID;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_OUTPUT_READY;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_TU_START;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_TU_LAST;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_VECTOR_LAST;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_active;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hold_valid;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_held_tu_start;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_held_tu_last;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_held_vector_last;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_in_valid;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_type;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_size;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_raw_ready;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_scale_in_valid;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_valid;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_ready;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_last;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_vector_last;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_start;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_last;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_width;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_height;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_hor;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_ver;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_component;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_error;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_in_valid;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_type;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_size;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_raw_ready;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scale_in_valid;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_state;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_state;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_width;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_height;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_hor;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_ver;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_component;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_width;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_height;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_hor;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_ver;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_component;
        CData/*2:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_outstanding_tus;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_in_fire;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_raw_fire;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_mem_write_fire;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_raw_fire;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_result_fire;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_first;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_first;
    };
    struct {
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_final_input;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_final_write;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_final_input;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_final_result;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_valid_type;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_allow_col;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_allow_row;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hbca79e53__0;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hdd45bd79__0;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_valid;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_valid;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_stage1_ready;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_stage2_ready;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_start;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_last;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_vector_last;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_tu_start;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_tu_last;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_vector_last;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_component;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_component;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_active;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_buffer_id;
        CData/*4:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_col;
        CData/*2:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_row_group;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_free_exists;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_free_buffer_id;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_width;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_height;
        CData/*4:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col;
        CData/*2:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_row_group;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_fire;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_final;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_head;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_tail;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_count;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_ready_pop;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_active;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id;
        CData/*4:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_row;
        CData/*2:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_col_group;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_read_issue;
        CData/*7:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_read_bank_addr;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_valid;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_buffer_id;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_row_low;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_vector_last;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_tu_start;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_tu_last;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_head;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tail;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_count;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_fifo_pop;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_valid;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_valid;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_stage1_ready;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_stage2_ready;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_start;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_last;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_vector_last;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_tu_start;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_tu_last;
        CData/*0:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_vector_last;
    };
    struct {
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_component;
        CData/*1:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_component;
        CData/*0:0*/ __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_active;
        CData/*0:0*/ __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA_VALID;
        CData/*1:0*/ __Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready__0;
        CData/*2:0*/ __Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready__0;
        CData/*2:0*/ __Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*1:0*/ __Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready__1;
        CData/*2:0*/ __Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready__1;
        CData/*2:0*/ __Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready__1;
        CData/*4:0*/ __Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN__0;
        CData/*0:0*/ __Vtrigprevexpr_h9b5f9cd8__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_ID;
        SData/*15:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_held_tu_id;
        SData/*15:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_id;
        SData/*15:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_tu_id;
        SData/*15:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_tu_id;
        SData/*8:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_total_beats;
        SData/*8:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_input_count;
        SData/*8:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_raw_count;
        SData/*8:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_write_count;
        SData/*8:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_total_beats;
        SData/*8:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_input_count;
        SData/*8:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_raw_count;
        SData/*8:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_result_count;
        SData/*8:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_first_total_beats;
        SData/*8:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_first_total_beats;
        SData/*15:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_id;
        SData/*15:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_tu_id;
        SData/*8:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_issue_count;
        SData/*8:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_accept_count;
        SData/*8:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_total_beats;
        SData/*15:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__O_RD_DATA;
        SData/*15:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__O_RD_DATA;
        SData/*15:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__O_RD_DATA;
        SData/*15:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__O_RD_DATA;
        SData/*15:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__O_RD_DATA;
        SData/*15:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__O_RD_DATA;
        SData/*15:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__O_RD_DATA;
        SData/*15:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__O_RD_DATA;
        SData/*15:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_id;
        SData/*15:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_tu_id;
        IData/*31:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_cycle;
        IData/*31:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc;
        IData/*31:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_beat;
        IData/*31:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc;
        IData/*31:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat;
        IData/*31:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_input_fire_count;
        IData/*31:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_output_fire_count;
        IData/*31:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_output_stall_count;
        IData/*31:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_last_stall_count;
        IData/*31:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_overlap_cycles;
        IData/*31:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__unnamedblk1__DOT__lane;
    };
    struct {
        IData/*31:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__unnamedblk2__DOT__lane;
        IData/*31:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__unnamedblk3__DOT__lane;
        IData/*31:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__unnamedblk3__DOT__lane;
        IData/*31:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__unnamedblk7__DOT__b;
        IData/*31:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__unnamedblk6__DOT__b;
        IData/*31:0*/ __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_beat;
        IData/*31:0*/ __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA;
        QData/*63:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_held_data;
        QData/*63:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_scaled_data;
        QData/*63:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data;
        QData/*63:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scaled_data;
        QData/*63:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_pipe_data;
        VlUnpacked<SData/*15:0*/, 16384> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_input_mem;
        VlUnpacked<SData/*15:0*/, 16384> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_golden_mem;
        VlUnpacked<IData/*31:0*/, 16> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w;
        VlUnpacked<IData/*31:0*/, 16> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h;
        VlUnpacked<CData/*1:0*/, 16> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hmode;
        VlUnpacked<CData/*1:0*/, 16> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_vmode;
        VlUnpacked<CData/*1:0*/, 16> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_component;
        VlUnpacked<IData/*28:0*/, 4> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_extended_input;
        VlUnpacked<IData/*28:0*/, 4> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_rounded_data;
        VlUnpacked<IData/*28:0*/, 4> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data;
        VlUnpacked<SData/*15:0*/, 4> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data;
        VlUnpacked<CData/*2:0*/, 2> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state;
        VlUnpacked<SData/*15:0*/, 2> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_tu_id;
        VlUnpacked<CData/*1:0*/, 2> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_width;
        VlUnpacked<CData/*1:0*/, 2> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_height;
        VlUnpacked<CData/*1:0*/, 2> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_hor;
        VlUnpacked<CData/*1:0*/, 2> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_ver;
        VlUnpacked<CData/*1:0*/, 2> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_component;
        VlUnpacked<CData/*3:0*/, 2> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 2> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 4>, 2> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data;
        VlUnpacked<CData/*0:0*/, 2> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_queue;
        VlUnpacked<CData/*3:0*/, 2> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_en;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 4>, 2> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data;
        VlUnpacked<QData/*63:0*/, 2> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_data;
        VlUnpacked<CData/*0:0*/, 2> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_vector_last;
        VlUnpacked<CData/*0:0*/, 2> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_start;
        VlUnpacked<CData/*0:0*/, 2> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_last;
        VlUnpacked<SData/*15:0*/, 256> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory;
        VlUnpacked<SData/*15:0*/, 256> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory;
        VlUnpacked<SData/*15:0*/, 256> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory;
        VlUnpacked<SData/*15:0*/, 256> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory;
        VlUnpacked<SData/*15:0*/, 256> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory;
        VlUnpacked<SData/*15:0*/, 256> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory;
        VlUnpacked<SData/*15:0*/, 256> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory;
        VlUnpacked<SData/*15:0*/, 256> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory;
        VlUnpacked<IData/*28:0*/, 4> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_extended_input;
        VlUnpacked<IData/*28:0*/, 4> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_rounded_data;
        VlUnpacked<IData/*28:0*/, 4> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data;
        VlUnpacked<SData/*15:0*/, 4> TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 8>, 8> __Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product__0;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 8>, 8> __Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product__0;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 8>, 8> __Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product__1;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 8>, 8> __Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product__1;
        VlUnpacked<CData/*0:0*/, 8> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h0b9c4a28__0;
    VlTriggerScheduler __VtrigSched_hc3711975__0;
    VlTriggerScheduler __VtrigSched_h0b68d2ea__0;
    VlTriggerVec<9> __VstlTriggered;
    VlTriggerVec<13> __VactTriggered;
    VlTriggerVec<13> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTQ_INVERSE_TRANSFORM_TOP_TB___024root(VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* symsp, const char* v__name);
    ~VTQ_INVERSE_TRANSFORM_TOP_TB___024root();
    VL_UNCOPYABLE(VTQ_INVERSE_TRANSFORM_TOP_TB___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
