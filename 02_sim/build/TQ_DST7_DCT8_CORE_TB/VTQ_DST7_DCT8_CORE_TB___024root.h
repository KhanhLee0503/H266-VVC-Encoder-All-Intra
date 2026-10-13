// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTQ_DST7_DCT8_CORE_TB.h for the primary calling header

#ifndef VERILATED_VTQ_DST7_DCT8_CORE_TB___024ROOT_H_
#define VERILATED_VTQ_DST7_DCT8_CORE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VTQ_DST7_DCT8_CORE_TB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTQ_DST7_DCT8_CORE_TB___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__I_CLK;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN;
        CData/*1:0*/ TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_SIZE;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_MODE;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_VALID;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_READY;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_VALID;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_READY;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_LAST;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__r_hold_valid;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__r_hold_last;
        CData/*2:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_current_state;
        CData/*2:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_next_state;
        CData/*1:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_mode;
        CData/*2:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat;
        CData/*1:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_write_beat;
        CData/*1:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_read_beat;
        CData/*1:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_size;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_mode;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_fire;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_core_output_fire;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_wrapper_output_fire;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_last_beat;
        CData/*1:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_final_beat;
        CData/*4:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_length;
        CData/*4:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_base_index;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_4_input_valid;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_input_valid;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_input_valid;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_valid;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_4_input_ready;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_input_ready;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_input_ready;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_ready;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_valid;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_valid;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_ready;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output_ready;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_last;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_last;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_accept_input_enable;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_stream_output_enable;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_capture_reverse_enable;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_send_reverse_enable;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_valid;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_last;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_haf798fd9__0;
        CData/*4:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_valid;
        CData/*2:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state;
        CData/*2:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_next_state;
        CData/*2:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state;
        CData/*2:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_next_state;
        CData/*1:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_issue_group;
        CData/*1:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_output_beat;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pre_valid;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_prod_valid;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_valid;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_sign_valid;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair_valid;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial_valid;
        CData/*1:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pre_group;
        CData/*1:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_prod_group;
        CData/*1:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_group;
    };
    struct {
        CData/*1:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_sign_group;
        CData/*1:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair_group;
        CData/*1:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial_group;
        CData/*2:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state;
        CData/*2:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_next_state;
        CData/*2:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_capture_group;
        CData/*2:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_issue_group;
        CData/*2:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_transform_mode;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_valid;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_valid;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_valid;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_valid;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_sign_valid;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair_valid;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial_valid;
        CData/*2:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_group;
        CData/*2:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_group;
        CData/*2:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_group;
        CData/*2:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_group;
        CData/*2:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_sign_group;
        CData/*2:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair_group;
        CData/*2:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial_group;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_mode;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_mode;
        CData/*0:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_mode;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__TQ_DST7_DCT8_CORE_TB__DOT__I_CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN__0;
        CData/*0:0*/ __Vtrigprevexpr_h56f2315d__0;
        CData/*0:0*/ __Vtrigprevexpr_h56f1c0ee__0;
        CData/*0:0*/ __Vtrigprevexpr_h56f24e7b__0;
        CData/*0:0*/ __Vtrigprevexpr_h56ecde8c__0;
        CData/*0:0*/ __Vtrigprevexpr_h56eceed9__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        VlWide<4>/*111:0*/ TQ_DST7_DCT8_CORE_TB__DOT__O_DATA;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__r_completed;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__r_total_errors;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__r_cycle;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__r_stall_cycles;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__r_test_in_progress;
        VlWide<4>/*111:0*/ TQ_DST7_DCT8_CORE_TB__DOT__r_hold_data;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__unnamedblk1__DOT__lane_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk2__DOT__tc;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__tc;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h0fa7f65f__0;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h737b5365__0;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h0fa7f65f__1;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT____Vlvbound_h0fa7f65f__2;
        VlWide<3>/*67:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small;
        VlWide<4>/*111:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output;
        VlWide<4>/*111:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output;
        VlWide<4>/*111:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output;
        VlWide<4>/*111:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__unnamedblk1__DOT__lane_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__unnamedblk2__DOT__lane_idx;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____Vlvbound_haab68f21__0;
        IData/*16:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_hf8de3ef5__0;
    };
    struct {
        IData/*16:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_h289f2ce1__0;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_preadd;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_29_x0;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_29_x2;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_29_x3;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_55_x0;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_55_x2;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_55_x3;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_74_x1;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_84_x0;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_84_x2;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_84_x3;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_29_x0_d;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_29_x2_d;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_29_x3_d;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_55_x0_d;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_55_x2_d;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_55_x3_d;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_74_x1_d;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_74_preadd;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_0a;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_0b;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_1a;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_1b;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_3a;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_3b;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_74_preadd_d;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__unnamedblk1__DOT__sample_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk1__DOT__lane_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk2__DOT__lane_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk3__DOT__sample_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk4__DOT__sample_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk5__DOT__sample_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk5__DOT__unnamedblk6__DOT__coefficient_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk7__DOT__lane_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk7__DOT__unnamedblk8__DOT__pair_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk9__DOT__lane_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk10__DOT__lane_idx;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_haab68f21__0;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT____Vlvbound_ha9c1f601__0;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk3__DOT__mcm_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk4__DOT__mcm_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk5__DOT__lane_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk5__DOT__unnamedblk6__DOT__mcm_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk7__DOT__lane_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk7__DOT__unnamedblk8__DOT__mcm_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk9__DOT__lane_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk10__DOT__lane_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk11__DOT__lane_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk1__DOT__lane_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk7__DOT__mcm_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk8__DOT__mcm_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk9__DOT__mcm_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk10__DOT__mcm_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk11__DOT__lane_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk11__DOT__unnamedblk12__DOT__mcm_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk13__DOT__lane_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk13__DOT__unnamedblk14__DOT__mcm_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk15__DOT__lane_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk16__DOT__lane_idx;
        IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk17__DOT__lane_idx;
        IData/*27:0*/ TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT____Vlvbound_haab68f21__0;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ TQ_DST7_DCT8_CORE_TB__DOT__I_DATA;
    };
    struct {
        QData/*63:0*/ TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 32>, 5> TQ_DST7_DCT8_CORE_TB__DOT__r_input;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 32>, 5> TQ_DST7_DCT8_CORE_TB__DOT__r_golden;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 32>, 5> TQ_DST7_DCT8_CORE_TB__DOT__r_actual;
        VlUnpacked<IData/*31:0*/, 5> TQ_DST7_DCT8_CORE_TB__DOT__r_n;
        VlUnpacked<CData/*0:0*/, 5> TQ_DST7_DCT8_CORE_TB__DOT__r_mode;
        VlUnpacked<IData/*31:0*/, 5> TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors;
        VlUnpacked<IData/*16:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_extended;
        VlUnpacked<IData/*16:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_adapted;
        VlUnpacked<IData/*27:0*/, 16> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer;
        VlUnpacked<IData/*16:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input;
        VlUnpacked<IData/*27:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__w_input_ext;
        VlUnpacked<IData/*27:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result;
        VlUnpacked<IData/*16:0*/, 8> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input;
        VlUnpacked<IData/*27:0*/, 8> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext;
        VlUnpacked<IData/*27:0*/, 8> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3;
        VlUnpacked<IData/*27:0*/, 8> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5;
        VlUnpacked<IData/*27:0*/, 8> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 8>, 8> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 8>, 8> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_product;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 8>, 8> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_route;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 4>, 8> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 2>, 8> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad;
        VlUnpacked<IData/*27:0*/, 8> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result;
        VlUnpacked<IData/*16:0*/, 16> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input;
        VlUnpacked<IData/*16:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample;
        VlUnpacked<IData/*27:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext;
        VlUnpacked<IData/*27:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_mul_3;
        VlUnpacked<IData/*27:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x;
        VlUnpacked<IData/*27:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3;
        VlUnpacked<IData/*27:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5;
        VlUnpacked<IData/*27:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7;
        VlUnpacked<IData/*27:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9;
        VlUnpacked<IData/*27:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 15>, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_product;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 4>, 16> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_mag;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 16> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_route_neg;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 4>, 16> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_mag;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 16> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_neg;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 4>, 16> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_signed;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 2>, 16> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair;
        VlUnpacked<IData/*27:0*/, 16> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial;
        VlUnpacked<IData/*27:0*/, 16> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc;
        VlUnpacked<SData/*15:0*/, 32> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input;
        VlUnpacked<SData/*15:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_sample;
        VlUnpacked<IData/*27:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_ext;
        VlUnpacked<IData/*27:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x;
        VlUnpacked<IData/*27:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x;
        VlUnpacked<IData/*27:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3;
        VlUnpacked<IData/*27:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5;
        VlUnpacked<IData/*27:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7;
        VlUnpacked<IData/*27:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9;
        VlUnpacked<IData/*27:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11;
        VlUnpacked<IData/*27:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13;
        VlUnpacked<IData/*27:0*/, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 31>, 4> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_product;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 4>, 16> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_mag;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 4>, 16> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_mag;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 16> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dst_neg;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 16> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_dct_neg;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 4>, 16> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_mag;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 16> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_route_neg;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 4>, 16> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_mag;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 16> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_neg;
    };
    struct {
        VlUnpacked<VlUnpacked<IData/*27:0*/, 4>, 16> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_signed;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 2>, 16> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair;
        VlUnpacked<IData/*27:0*/, 16> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial;
        VlUnpacked<IData/*27:0*/, 16> TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 8>, 8> __Vtrigprevexpr___TOP__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product__0;
        VlUnpacked<VlUnpacked<IData/*27:0*/, 8>, 8> __Vtrigprevexpr___TOP__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product__1;
        VlUnpacked<CData/*0:0*/, 8> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h2b4e4f02__0;
    VlTriggerScheduler __VtrigSched_hcec6656b__0;
    VlTriggerScheduler __VtrigSched_hcec6f57c__0;
    VlTriggerScheduler __VtrigSched_hcec5890d__0;
    VlTriggerScheduler __VtrigSched_hcedb191e__0;
    VlTriggerScheduler __VtrigSched_hcedb28f7__0;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<9> __VactTriggered;
    VlTriggerVec<9> __VnbaTriggered;
    VlUnpacked<std::string, 5> TQ_DST7_DCT8_CORE_TB__DOT__r_name;

    // INTERNAL VARIABLES
    VTQ_DST7_DCT8_CORE_TB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTQ_DST7_DCT8_CORE_TB___024root(VTQ_DST7_DCT8_CORE_TB__Syms* symsp, const char* v__name);
    ~VTQ_DST7_DCT8_CORE_TB___024root();
    VL_UNCOPYABLE(VTQ_DST7_DCT8_CORE_TB___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
