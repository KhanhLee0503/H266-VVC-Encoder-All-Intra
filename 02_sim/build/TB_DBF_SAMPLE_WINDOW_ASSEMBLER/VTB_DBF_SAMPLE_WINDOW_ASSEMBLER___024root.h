// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTB_DBF_SAMPLE_WINDOW_ASSEMBLER.h for the primary calling header

#ifndef VERILATED_VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024ROOT_H_
#define VERILATED_VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clk;
        CData/*0:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__rst_n;
        CData/*0:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clear;
        CData/*0:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_start;
        CData/*7:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_width;
        CData/*7:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_height;
        CData/*0:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_read_enable;
        CData/*0:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_valid;
        CData/*0:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_ready;
        CData/*1:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_component;
        CData/*7:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_edge_x;
        CData/*7:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_y_base;
        CData/*0:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_ready;
        CData/*0:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_en;
        CData/*1:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_component;
        CData/*3:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_mask;
        CData/*2:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state;
        CData/*7:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_width;
        CData/*7:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_height;
        CData/*0:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_context_valid;
        CData/*0:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_context_error;
        CData/*0:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_protocol_error;
        CData/*1:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component;
        CData/*7:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_edge_x;
        CData/*7:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_y_base;
        CData/*0:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_valid;
        CData/*1:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_component;
        CData/*7:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_edge_x;
        CData/*7:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_y_base;
        CData/*1:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_fetch_mode;
        CData/*4:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_expected_count;
        CData/*4:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count;
        CData/*4:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_response_count;
        CData/*0:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_tag_valid;
        CData/*1:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row;
        CData/*1:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col;
        CData/*7:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_plane_width;
        CData/*7:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_plane_height;
        CData/*0:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_window;
        CData/*0:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_reuse_shift4;
        CData/*0:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_reuse_shift8;
        CData/*1:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode;
        CData/*4:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_count;
        CData/*1:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_row;
        CData/*1:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_col;
        CData/*0:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_fire;
        CData/*0:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire;
        CData/*0:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_output_fire;
        CData/*0:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_good_ctu_geometry;
        CData/*0:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__w_rd_component_valid;
        CData/*0:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_valid;
        CData/*0:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__9__expected_error;
        CData/*0:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__18__expected_error;
        CData/*0:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__24__expected_error;
        CData/*0:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__33__expected_error;
        CData/*0:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__39__expected_error;
        CData/*0:0*/ __Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_valid;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__rst_n__0;
        CData/*0:0*/ __VactContinue;
        SData/*8:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_id;
        SData/*15:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_tag;
        SData/*11:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_addr;
    };
    struct {
        SData/*15:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__last_accepted_tag;
        SData/*8:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_id;
        SData/*15:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_tag;
        SData/*15:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid;
        SData/*15:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_prepared_valid;
        SData/*15:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_after_response;
        SData/*8:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_row;
        SData/*9:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_word_col;
        SData/*11:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_calc;
        VlWide<32>/*1023:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples;
        IData/*31:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__read_total;
        IData/*31:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_total;
        IData/*31:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_accepted_count;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__9__cp;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__9__edge_x;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__9__ybase;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__9__expected_reads;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__9__stall_cycles;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__18__cp;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__18__edge_x;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__18__ybase;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__18__expected_reads;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__18__stall_cycles;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__18__accepted_before;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__24__cp;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__24__edge_x;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__24__ybase;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__24__expected_reads;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__24__stall_cycles;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__33__cp;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__33__edge_x;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__33__ybase;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__33__expected_reads;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__33__stall_cycles;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__33__accepted_before;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__39__cp;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__39__edge_x;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__39__ybase;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__39__expected_reads;
        IData/*31:0*/ __Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__39__stall_cycles;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_data;
        QData/*63:0*/ TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_data;
        VlUnpacked<VlUnpacked<QData/*63:0*/, 4>, 4> TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window;
        VlUnpacked<QData/*63:0*/, 4096> TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem;
        VlUnpacked<QData/*63:0*/, 1024> TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem;
        VlUnpacked<QData/*63:0*/, 1024> TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h8b00ae1c__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* symsp, const char* v__name);
    ~VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root();
    VL_UNCOPYABLE(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
