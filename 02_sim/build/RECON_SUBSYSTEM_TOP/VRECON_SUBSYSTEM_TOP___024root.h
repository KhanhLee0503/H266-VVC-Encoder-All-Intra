// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRECON_SUBSYSTEM_TOP.h for the primary calling header

#ifndef VERILATED_VRECON_SUBSYSTEM_TOP___024ROOT_H_
#define VERILATED_VRECON_SUBSYSTEM_TOP___024ROOT_H_  // guard

#include "verilated.h"


class VRECON_SUBSYSTEM_TOP__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRECON_SUBSYSTEM_TOP___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(I_CLK,0,0);
        VL_IN8(I_RESETN,0,0);
        VL_IN8(I_CLEAR_ERROR,0,0);
        VL_IN8(I_PICTURE_START,0,0);
        VL_IN8(I_CTU_START_VALID,0,0);
        VL_OUT8(O_CTU_START_READY,0,0);
        VL_IN8(I_CTU_VALID_WIDTH,7,0);
        VL_IN8(I_CTU_VALID_HEIGHT,7,0);
        VL_OUT8(O_CTU_INIT_DONE,0,0);
        VL_IN8(I_CTU_FINISH_VALID,0,0);
        VL_OUT8(O_CTU_FINISH_READY,0,0);
        VL_IN8(I_CU_VALID,0,0);
        VL_OUT8(O_CU_READY,0,0);
        VL_IN8(I_CU_X,6,0);
        VL_IN8(I_CU_Y,6,0);
        VL_IN8(I_CU_WIDTH,7,0);
        VL_IN8(I_CU_HEIGHT,7,0);
        VL_IN8(I_CU_REF_COMMIT_REQ,0,0);
        VL_OUT8(O_CU_REF_COMMIT_DONE,0,0);
        VL_IN8(I_CU_RELEASE,0,0);
        VL_IN8(I_RECON_VALID,0,0);
        VL_OUT8(O_RECON_READY,0,0);
        VL_IN8(I_RECON_COMPONENT_ID,1,0);
        VL_IN8(I_RECON_X_BASE,6,0);
        VL_IN8(I_RECON_Y,6,0);
        VL_IN8(I_RECON_LANE_VALID,3,0);
        VL_IN8(I_RECON_TU_LAST,0,0);
        VL_IN8(I_REF_MAP_QUERY_COMPONENT_ID,1,0);
        VL_IN8(I_REF_TOP_MAP_QUERY_VALID,0,0);
        VL_IN8(I_REF_TOP_MAP_X_UNIT,4,0);
        VL_IN8(I_REF_TOP_MAP_Y_UNIT,4,0);
        VL_OUT8(O_REF_TOP_MAP_AVAILABLE,0,0);
        VL_IN8(I_REF_LEFT_MAP_QUERY_VALID,0,0);
        VL_IN8(I_REF_LEFT_MAP_X_UNIT,4,0);
        VL_IN8(I_REF_LEFT_MAP_Y_UNIT,4,0);
        VL_OUT8(O_REF_LEFT_MAP_AVAILABLE,0,0);
        VL_IN8(I_REF_TL_MAP_QUERY_VALID,0,0);
        VL_IN8(I_REF_TL_MAP_X_UNIT,4,0);
        VL_IN8(I_REF_TL_MAP_Y_UNIT,4,0);
        VL_OUT8(O_REF_TL_MAP_AVAILABLE,0,0);
        VL_OUT8(O_REF_ABOVE_ROW_VALID,0,0);
        VL_OUT8(O_REF_LEFT_BOUNDARY_VALID,0,0);
        VL_OUT8(O_REF_ABOVE_LEFT_VALID,0,0);
        VL_IN8(I_REF_H_EDGE_RD_EN,0,0);
        VL_IN8(I_REF_H_EDGE_RD_COMPONENT_ID,1,0);
        VL_OUT8(O_REF_H_EDGE_RD_VALID,0,0);
        VL_IN8(I_REF_V_EDGE_RD_EN,0,0);
        VL_IN8(I_REF_V_EDGE_RD_COMPONENT_ID,1,0);
        VL_OUT8(O_REF_V_EDGE_RD_VALID,0,0);
        VL_IN8(I_REF_ABOVE_RD_EN,0,0);
        VL_IN8(I_REF_ABOVE_RD_COMPONENT_ID,1,0);
        VL_OUT8(O_REF_ABOVE_RD_VALID,0,0);
        VL_IN8(I_REF_LEFT_BOUND_RD_EN,0,0);
        VL_IN8(I_REF_LEFT_BOUND_RD_COMPONENT_ID,1,0);
        VL_IN8(I_REF_LEFT_BOUND_RD_ADDR,4,0);
        VL_OUT8(O_REF_LEFT_BOUND_RD_VALID,0,0);
        VL_IN8(I_REF_CORNER_QUERY_COMPONENT_ID,1,0);
        VL_OUT8(O_REF_CORNER_QUERY_VALID,0,0);
        VL_IN8(I_EXPORT_RAM_RD_EN,0,0);
        VL_IN8(I_EXPORT_RAM_RD_COMPONENT_ID,1,0);
        VL_OUT8(O_EXPORT_RAM_RD_VALID,0,0);
        VL_OUT8(O_BUSY,0,0);
        VL_OUT8(O_ERROR,0,0);
        CData/*2:0*/ RECON_SUBSYSTEM_TOP__DOT__r_current_state;
    };
    struct {
        CData/*2:0*/ RECON_SUBSYSTEM_TOP__DOT__w_next_state;
        CData/*7:0*/ RECON_SUBSYSTEM_TOP__DOT__r_valid_width;
        CData/*7:0*/ RECON_SUBSYSTEM_TOP__DOT__r_valid_height;
        CData/*1:0*/ RECON_SUBSYSTEM_TOP__DOT__r_corner_component;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__r_fault;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__w_ctu_start;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__w_ctu_finish;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__w_geometry_valid;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__w_corner_required;
        CData/*7:0*/ RECON_SUBSYSTEM_TOP__DOT__w_comp_width;
        CData/*7:0*/ RECON_SUBSYSTEM_TOP__DOT__w_comp_height;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__w_writer_accept;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__w_beat_legal;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__w_commit_cu_ready;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__w_can_accept;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__w_local_wr_en;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__w_h_wr_en;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__w_v_wr_en;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__w_query0_result;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__w_query1_result;
        CData/*4:0*/ RECON_SUBSYSTEM_TOP__DOT__w_query0_x;
        CData/*4:0*/ RECON_SUBSYSTEM_TOP__DOT__w_query0_y;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__w_h_read_gate;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__w_v_read_gate;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__w_h_written;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__w_v_written;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__w_above_rd_en;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__w_above_rd_valid;
        CData/*1:0*/ RECON_SUBSYSTEM_TOP__DOT__w_above_rd_comp;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__w_corner_load;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__w_corner_query_valid;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT____Vcellinp__u_cross__I_LEFT_RD_EN;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT____Vcellinp__u_cross__I_LEFT_WR_EN;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT____Vcellinp__u_cross__I_ABOVE_WR_EN;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT____Vcellinp__u_cross__I_CTU_ROW_DONE;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT____Vcellinp__u_cross__I_CTU_ROW_START;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT____VdfgTmp_h9ce5f4bb__0;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT____VdfgTmp_hcaeed50c__0;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_component_valid;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_recon_accept;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_commit_valid;
        CData/*1:0*/ RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_commit_component_id;
        CData/*4:0*/ RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_x_unit;
        CData/*4:0*/ RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_y_unit;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tu_ref_release;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_local__DOT__w_rd_component_valid;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_local__DOT__r_rd_valid;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_h_edge__DOT__w_rd_component_valid;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_h_edge__DOT__r_rd_valid;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_v_edge__DOT__w_rd_component_valid;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_v_edge__DOT__r_rd_valid;
        CData/*7:0*/ RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_c_commit_index;
        CData/*7:0*/ RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_c_query_0_index;
        CData/*7:0*/ RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_c_query_1_index;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_commit_component_valid;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_commit_coordinate_valid;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_query_0_coordinate_valid;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_query_1_coordinate_valid;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_read_bank_select;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_row_valid;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_read_bank_select;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_boundary_valid;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_y_valid;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cb_valid;
    };
    struct {
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cr_valid;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_active;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_error;
        CData/*6:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_x;
        CData/*6:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_y;
        CData/*7:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_width;
        CData/*7:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_height;
        CData/*2:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_complete;
        CData/*1:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_release_component;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_release_expected;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_all_released_q;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_commit_granted;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_cu_fire;
        CData/*6:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_expected_x;
        CData/*6:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_expected_y;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_geometry_ok;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_beat_ok;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_component_seq_ok;
        CData/*7:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_x;
        CData/*7:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_y;
        CData/*7:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_w;
        CData/*7:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_h;
        CData/*0:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT____Vlvbound_h0d602965__0;
        CData/*1:0*/ __Vdly__RECON_SUBSYSTEM_TOP__DOT__r_corner_component;
        CData/*0:0*/ __Vdly__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_read_bank_select;
        CData/*0:0*/ __Vdly__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_read_bank_select;
        CData/*0:0*/ __Vdlyvset__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_a__v0;
        CData/*0:0*/ __Vdlyvset__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_b__v0;
        CData/*0:0*/ __Vdlyvset__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_b__v0;
        CData/*0:0*/ __Vdlyvset__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_a__v0;
        CData/*0:0*/ __Vdlyvset__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_b__v0;
        CData/*0:0*/ __Vdlyvset__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_a__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__I_CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__I_RESETN__0;
        CData/*0:0*/ __VactContinue;
        VL_IN16(I_CTU_X_ORIGIN,12,0);
        VL_IN16(I_CTU_Y_ORIGIN,12,0);
        VL_IN16(I_PICTURE_WIDTH,12,0);
        VL_IN16(I_PICTURE_HEIGHT,12,0);
        VL_IN16(I_REF_H_EDGE_RD_ADDR,9,0);
        VL_IN16(I_REF_V_EDGE_RD_ADDR,9,0);
        VL_IN16(I_REF_ABOVE_RD_ADDR,9,0);
        VL_OUT16(O_REF_CORNER_QUERY_SAMPLE,15,0);
        VL_IN16(I_EXPORT_RAM_RD_ADDR,11,0);
        SData/*12:0*/ RECON_SUBSYSTEM_TOP__DOT__r_origin_x;
        SData/*12:0*/ RECON_SUBSYSTEM_TOP__DOT__r_origin_y;
        SData/*12:0*/ RECON_SUBSYSTEM_TOP__DOT__r_picture_width;
        SData/*9:0*/ RECON_SUBSYSTEM_TOP__DOT__w_above_wr_addr;
        SData/*10:0*/ RECON_SUBSYSTEM_TOP__DOT__w_above_x_words;
        SData/*9:0*/ RECON_SUBSYSTEM_TOP__DOT__w_above_rd_addr;
        SData/*11:0*/ RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_local_addr;
        SData/*9:0*/ RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_h_edge_addr;
        SData/*9:0*/ RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_v_edge_addr;
        SData/*15:0*/ RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_y_sample;
        SData/*15:0*/ RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cb_sample;
        SData/*15:0*/ RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cr_sample;
        SData/*8:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_count_y;
        SData/*8:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_count_cb;
        SData/*8:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_count_cr;
        SData/*8:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_expected_y;
        SData/*8:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_expected_c;
        SData/*8:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_actual_count;
    };
    struct {
        SData/*8:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_expected_count;
        SData/*8:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_word_col;
        SData/*8:0*/ RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_word_row;
        SData/*9:0*/ __Vdlyvdim0__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_a__v0;
        SData/*8:0*/ __Vdlyvdim0__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_b__v0;
        SData/*9:0*/ __Vdlyvdim0__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_b__v0;
        SData/*8:0*/ __Vdlyvdim0__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_a__v0;
        SData/*8:0*/ __Vdlyvdim0__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_b__v0;
        SData/*8:0*/ __Vdlyvdim0__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_a__v0;
        VlWide<32>/*1023:0*/ RECON_SUBSYSTEM_TOP__DOT__r_h_y_written;
        VlWide<32>/*1023:0*/ RECON_SUBSYSTEM_TOP__DOT__r_v_y_written;
        VlWide<8>/*255:0*/ RECON_SUBSYSTEM_TOP__DOT__r_h_cb_written;
        VlWide<8>/*255:0*/ RECON_SUBSYSTEM_TOP__DOT__r_h_cr_written;
        VlWide<8>/*255:0*/ RECON_SUBSYSTEM_TOP__DOT__r_v_cb_written;
        VlWide<8>/*255:0*/ RECON_SUBSYSTEM_TOP__DOT__r_v_cr_written;
        VlWide<32>/*1023:0*/ RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__r_y_avail;
        VlWide<8>/*255:0*/ RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__r_cb_avail;
        VlWide<8>/*255:0*/ RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__r_cr_avail;
        IData/*31:0*/ __VactIterCount;
        VL_IN64(I_RECON_SAMPLE,39,0);
        VL_OUT64(O_REF_H_EDGE_RD_DATA,63,0);
        VL_OUT64(O_REF_V_EDGE_RD_DATA,63,0);
        VL_OUT64(O_REF_ABOVE_RD_DATA,63,0);
        VL_OUT64(O_REF_LEFT_BOUND_RD_DATA,63,0);
        VL_OUT64(O_EXPORT_RAM_RD_DATA,63,0);
        QData/*63:0*/ RECON_SUBSYSTEM_TOP__DOT__w_above_rd_data;
        QData/*63:0*/ RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_recon_word;
        QData/*63:0*/ RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_v_partial_current;
        QData/*63:0*/ RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_v_partial_next;
        QData/*63:0*/ RECON_SUBSYSTEM_TOP__DOT__u_local__DOT__r_rd_data;
        QData/*63:0*/ RECON_SUBSYSTEM_TOP__DOT__u_h_edge__DOT__r_rd_data;
        QData/*63:0*/ RECON_SUBSYSTEM_TOP__DOT__u_v_edge__DOT__r_rd_data;
        QData/*63:0*/ __Vdlyvval__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_a__v0;
        QData/*63:0*/ __Vdlyvval__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_b__v0;
        QData/*63:0*/ __Vdlyvval__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_b__v0;
        QData/*63:0*/ __Vdlyvval__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_a__v0;
        QData/*63:0*/ __Vdlyvval__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_b__v0;
        QData/*63:0*/ __Vdlyvval__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_a__v0;
        VlUnpacked<QData/*63:0*/, 32> RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial;
        VlUnpacked<QData/*63:0*/, 4096> RECON_SUBSYSTEM_TOP__DOT__u_local__DOT__r_y_mem;
        VlUnpacked<QData/*63:0*/, 1024> RECON_SUBSYSTEM_TOP__DOT__u_local__DOT__r_cb_mem;
        VlUnpacked<QData/*63:0*/, 1024> RECON_SUBSYSTEM_TOP__DOT__u_local__DOT__r_cr_mem;
        VlUnpacked<QData/*63:0*/, 1024> RECON_SUBSYSTEM_TOP__DOT__u_h_edge__DOT__r_y_mem;
        VlUnpacked<QData/*63:0*/, 256> RECON_SUBSYSTEM_TOP__DOT__u_h_edge__DOT__r_cb_mem;
        VlUnpacked<QData/*63:0*/, 256> RECON_SUBSYSTEM_TOP__DOT__u_h_edge__DOT__r_cr_mem;
        VlUnpacked<QData/*63:0*/, 1024> RECON_SUBSYSTEM_TOP__DOT__u_v_edge__DOT__r_y_mem;
        VlUnpacked<QData/*63:0*/, 256> RECON_SUBSYSTEM_TOP__DOT__u_v_edge__DOT__r_cb_mem;
        VlUnpacked<QData/*63:0*/, 256> RECON_SUBSYSTEM_TOP__DOT__u_v_edge__DOT__r_cr_mem;
        VlUnpacked<QData/*63:0*/, 1024> RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_a;
        VlUnpacked<QData/*63:0*/, 1024> RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_b;
        VlUnpacked<QData/*63:0*/, 512> RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_a;
        VlUnpacked<QData/*63:0*/, 512> RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_b;
        VlUnpacked<QData/*63:0*/, 512> RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_a;
        VlUnpacked<QData/*63:0*/, 512> RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_b;
        VlUnpacked<QData/*63:0*/, 32> RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a;
        VlUnpacked<QData/*63:0*/, 32> RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b;
        VlUnpacked<QData/*63:0*/, 16> RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a;
        VlUnpacked<QData/*63:0*/, 16> RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b;
        VlUnpacked<QData/*63:0*/, 16> RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a;
        VlUnpacked<QData/*63:0*/, 16> RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VRECON_SUBSYSTEM_TOP__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRECON_SUBSYSTEM_TOP___024root(VRECON_SUBSYSTEM_TOP__Syms* symsp, const char* v__name);
    ~VRECON_SUBSYSTEM_TOP___024root();
    VL_UNCOPYABLE(VRECON_SUBSYSTEM_TOP___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
