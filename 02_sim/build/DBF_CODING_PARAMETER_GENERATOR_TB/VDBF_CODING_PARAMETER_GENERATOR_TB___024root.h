// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VDBF_CODING_PARAMETER_GENERATOR_TB.h for the primary calling header

#ifndef VERILATED_VDBF_CODING_PARAMETER_GENERATOR_TB___024ROOT_H_
#define VERILATED_VDBF_CODING_PARAMETER_GENERATOR_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VDBF_CODING_PARAMETER_GENERATOR_TB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VDBF_CODING_PARAMETER_GENERATOR_TB___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__clk;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__rst_n;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_start_valid;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_start_ready;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_bank;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_qp;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_qp_cb;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_qp_cr;
        CData/*7:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_width;
        CData/*7:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_height;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_dbf_enable;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_valid;
        CData/*7:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_cu_id;
        CData/*4:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_x;
        CData/*4:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_y;
        CData/*2:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_wcode;
        CData/*2:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_hcode;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__metadata_done;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_start_valid;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_start_ready;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_bank;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_valid;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_ready;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_done_valid;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_done_ready;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_valid;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_ready;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_bank;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_valid;
        CData/*1:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_source;
        CData/*2:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_code;
        CData/*2:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_current_state;
        CData/*2:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_next_state;
        CData/*2:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index;
        CData/*1:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_busy;
        CData/*1:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_metadata_ready;
        CData/*1:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_scan_finished;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_bank;
        CData/*7:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_width;
        CData/*7:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_height;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_dbf_en;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_qp_cb;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_qp_cr;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_collect_start_fire;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_scan_start_fire;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_scan_launch_fire;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_pass_done_fire;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_top_scan_done_fire;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_bank_release_fire;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_any_error;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_context_error;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_leaf_ready;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_en;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_entry_valid;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_start_valid;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_start_ready;
        CData/*1:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_component_id;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_en;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_resp_valid;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_entry_valid;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_valid;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_ready;
        CData/*7:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_x;
        CData/*7:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_y;
    };
    struct {
        CData/*3:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_lane_mask;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_done_valid;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_done_ready;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_error_valid;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT____VdfgTmp_he5286194__0;
        CData/*2:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state;
        CData/*2:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_state_next;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_bank;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_qp;
        CData/*7:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_valid_width;
        CData/*7:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_valid_height;
        CData/*7:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_cu_id;
        CData/*4:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_x_unit;
        CData/*4:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_y_unit;
        CData/*2:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_width_code;
        CData/*2:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_height_code;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_x;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_y;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_x_end;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_y_end;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_done_seen;
        CData/*2:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_error_code;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_start_fire;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_leaf_fire;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_done_fire;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_last_clear;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_last_cell;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_invalid_leaf;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_invalid_start;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_bad_done;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_input_xend;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_input_yend;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_width_limit;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_height_limit;
        CData/*2:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state;
        CData/*2:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_next_state;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_bank;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_direction;
        CData/*1:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id;
        CData/*7:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_width;
        CData/*7:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_height;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_major_limit;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_minor_limit;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_minor;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_have_previous;
        CData/*2:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_error_code;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_invalid_start;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_geometry_valid;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_last_major;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_end_of_minor;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_emit_candidate;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_valid_width_cells;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_valid_height_cells;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_x;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_y;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_x_end;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_y_end;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_minor_end;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_next_minor;
        CData/*1:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_current_state;
        CData/*1:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_next_state;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_bank;
        CData/*1:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_component_id;
    };
    struct {
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_direction;
        CData/*7:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_x;
        CData/*7:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_y;
        CData/*3:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_lane_mask;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_dbf_enable;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_qp_cb;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_qp_cr;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_bank;
        CData/*1:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_component_id;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_direction;
        CData/*7:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_x;
        CData/*7:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_y;
        CData/*3:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_lane_mask;
        CData/*2:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_sp;
        CData/*2:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_sq;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_qp_p;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_qp_q;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_x_end_p;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_x_end_q;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_y_end_p;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_y_end_q;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_x_grid;
        CData/*5:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_y_grid;
        CData/*2:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_orth_code_p;
        CData/*2:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_orth_code_q;
        CData/*2:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_sp;
        CData/*2:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_sq;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_geometry_valid;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_candidate_eligible;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_input_fire;
        CData/*0:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT____VdfgTmp_h96dbfac0__0;
        CData/*0:0*/ __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank0__v0;
        CData/*0:0*/ __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank0__v0;
        CData/*0:0*/ __Vdlyvval__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank1__v0;
        CData/*0:0*/ __Vdlyvset__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank1__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__rst_n__0;
        CData/*0:0*/ __VactContinue;
        SData/*8:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_id;
        SData/*8:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_ctu_id;
        SData/*8:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__metadata_done_id;
        SData/*8:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_ctu_id;
        SData/*8:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_ctu_id;
        SData/*8:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_ctu_id;
        SData/*9:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_addr;
        SData/*9:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_addr;
        SData/*8:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_ctu_id;
        SData/*9:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_clear_addr;
        SData/*8:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_ctu_id;
        SData/*11:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_edge_id;
        SData/*8:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_base;
        SData/*8:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_limit;
        SData/*11:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_id;
        SData/*8:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_ctu_id;
        SData/*11:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_edge_id;
        SData/*8:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_ctu_id;
        SData/*9:0*/ __Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank0__v0;
        SData/*9:0*/ __Vdlyvdim0__DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank1__v0;
        IData/*31:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__observed;
        IData/*31:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__expected_count;
        IData/*31:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_start_accepts;
        IData/*31:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_accepts;
        IData/*31:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_start_accepts;
    };
    struct {
        IData/*31:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_accepts;
        IData/*31:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_done_accepts;
        IData/*31:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ready0_wait__DOT__wait_count;
        IData/*31:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_wait__DOT__wait_count;
        IData/*31:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ready1_wait__DOT__wait_count;
        IData/*31:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ready2_wait__DOT__wait_count;
        IData/*31:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_data;
        IData/*31:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_data;
        IData/*31:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_meta_p;
        IData/*31:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_meta_q;
        IData/*31:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current;
        IData/*31:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_previous;
        IData/*31:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p;
        IData/*31:0*/ DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 48> DBF_CODING_PARAMETER_GENERATOR_TB__DOT__expected_dir;
        VlUnpacked<CData/*1:0*/, 48> DBF_CODING_PARAMETER_GENERATOR_TB__DOT__expected_comp;
        VlUnpacked<CData/*7:0*/, 48> DBF_CODING_PARAMETER_GENERATOR_TB__DOT__expected_x;
        VlUnpacked<CData/*7:0*/, 48> DBF_CODING_PARAMETER_GENERATOR_TB__DOT__expected_y;
        VlUnpacked<SData/*11:0*/, 48> DBF_CODING_PARAMETER_GENERATOR_TB__DOT__expected_id;
        VlUnpacked<SData/*8:0*/, 2> DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id;
        VlUnpacked<CData/*7:0*/, 2> DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width;
        VlUnpacked<CData/*7:0*/, 2> DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height;
        VlUnpacked<CData/*0:0*/, 2> DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en;
        VlUnpacked<CData/*5:0*/, 2> DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb;
        VlUnpacked<CData/*5:0*/, 2> DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr;
        VlUnpacked<IData/*31:0*/, 1024> DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_data_bank0;
        VlUnpacked<IData/*31:0*/, 1024> DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_data_bank1;
        VlUnpacked<CData/*0:0*/, 1024> DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank0;
        VlUnpacked<CData/*0:0*/, 1024> DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_ram__DOT__r_valid_bank1;
        VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    };
    std::string DBF_CODING_PARAMETER_GENERATOR_TB__DOT__tb_phase;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h388c6f86__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root(VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* symsp, const char* v__name);
    ~VDBF_CODING_PARAMETER_GENERATOR_TB___024root();
    VL_UNCOPYABLE(VDBF_CODING_PARAMETER_GENERATOR_TB___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
