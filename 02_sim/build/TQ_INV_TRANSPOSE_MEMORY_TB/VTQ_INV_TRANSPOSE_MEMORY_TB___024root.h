// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTQ_INV_TRANSPOSE_MEMORY_TB.h for the primary calling header

#ifndef VERILATED_VTQ_INV_TRANSPOSE_MEMORY_TB___024ROOT_H_
#define VERILATED_VTQ_INV_TRANSPOSE_MEMORY_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VTQ_INV_TRANSPOSE_MEMORY_TB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTQ_INV_TRANSPOSE_MEMORY_TB___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_CLK;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_RESETN;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_VALID;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_WR_READY;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_TU_START;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_TU_LAST;
        CData/*1:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_WIDTH;
        CData/*1:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_HEIGHT;
        CData/*1:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_TRANSFORM_HOR;
        CData/*1:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_TRANSFORM_VER;
        CData/*1:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_COMPONENT;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_RD_READY;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_VECTOR_LAST;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_TU_START;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_TU_LAST;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_TU_DONE_VALID;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_PROTOCOL_ERROR;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_stalled;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_held_start;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_held_vector_last;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_held_tu_last;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT____Vlvbound_h7ae380de__0;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_active;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_buffer_id;
        CData/*4:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_col;
        CData/*2:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_row_group;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_free_exists;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_free_buffer_id;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id;
        CData/*1:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_width;
        CData/*1:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_height;
        CData/*4:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col;
        CData/*2:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_row_group;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_fire;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_final;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_head;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_tail;
        CData/*1:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_count;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_ready_pop;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_active;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_buffer_id;
        CData/*4:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_row;
        CData/*2:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_col_group;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_read_issue;
        CData/*7:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_read_bank_addr;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_valid;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_buffer_id;
        CData/*1:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_row_low;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_vector_last;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_tu_start;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_tu_last;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_head;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tail;
        CData/*1:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_count;
        CData/*0:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_fifo_pop;
        CData/*0:0*/ __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_PROTOCOL_ERROR;
        CData/*0:0*/ __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state__v0;
        CData/*0:0*/ __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_width__v0;
        CData/*1:0*/ __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_width__v0;
        CData/*0:0*/ __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_height__v0;
        CData/*1:0*/ __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_height__v0;
        CData/*0:0*/ __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_hor__v0;
        CData/*1:0*/ __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_hor__v0;
        CData/*0:0*/ __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_ver__v0;
    };
    struct {
        CData/*1:0*/ __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_ver__v0;
        CData/*0:0*/ __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_component__v0;
        CData/*1:0*/ __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_component__v0;
        CData/*0:0*/ __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id__v1;
        CData/*0:0*/ __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_head;
        CData/*0:0*/ __Vdlyvdim0__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_queue__v0;
        CData/*0:0*/ __Vdlyvval__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_queue__v0;
        CData/*0:0*/ __Vdlyvset__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_queue__v0;
        CData/*1:0*/ __Vdly__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_count;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_RESETN__0;
        CData/*0:0*/ __Vtrigprevexpr_hd70218bd__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_TU_ID;
        SData/*15:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_TU_ID;
        SData/*15:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_TU_DONE_ID;
        SData/*15:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_held_id;
        SData/*9:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_release_pipe_valid;
        SData/*15:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__expected;
        SData/*15:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__actual;
        SData/*15:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT____Vlvbound_h673fde31__0;
        SData/*8:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_issue_count;
        SData/*8:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_accept_count;
        SData/*8:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_total_beats;
        SData/*15:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__O_RD_DATA;
        SData/*15:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__O_RD_DATA;
        SData/*15:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__O_RD_DATA;
        SData/*15:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__O_RD_DATA;
        SData/*15:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__O_RD_DATA;
        SData/*15:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__O_RD_DATA;
        SData/*15:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__O_RD_DATA;
        SData/*15:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__O_RD_DATA;
        IData/*31:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_cycle;
        IData/*31:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_tu_completed;
        IData/*31:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_output_beat;
        IData/*31:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_stall_cycles;
        IData/*31:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_tu_last_stalls;
        IData/*31:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_input_stalls;
        IData/*31:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_simultaneous_cycles;
        IData/*31:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_active_tu;
        IData/*31:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__unnamedblk3__DOT__d;
        IData/*31:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__w;
        IData/*31:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__h;
        IData/*31:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__row;
        IData/*31:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__col_base;
        IData/*31:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__expected_beats;
        IData/*31:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__unnamedblk4__DOT__lane;
        IData/*31:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__unnamedblk5__DOT__tu;
        IData/*31:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__unnamedblk3__DOT__lane;
        IData/*31:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__unnamedblk7__DOT__b;
        IData/*31:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__unnamedblk6__DOT__b;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_DATA;
        QData/*63:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_DATA;
        QData/*63:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_held_data;
        QData/*63:0*/ TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_pipe_data;
        VlUnpacked<SData/*15:0*/, 10> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_release_pipe_id;
        VlUnpacked<CData/*2:0*/, 2> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state;
        VlUnpacked<SData/*15:0*/, 2> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id;
        VlUnpacked<CData/*1:0*/, 2> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_width;
        VlUnpacked<CData/*1:0*/, 2> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_height;
        VlUnpacked<CData/*1:0*/, 2> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_hor;
    };
    struct {
        VlUnpacked<CData/*1:0*/, 2> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_ver;
        VlUnpacked<CData/*1:0*/, 2> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_component;
        VlUnpacked<CData/*3:0*/, 2> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_en;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 2> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 4>, 2> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data;
        VlUnpacked<CData/*0:0*/, 2> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_queue;
        VlUnpacked<CData/*3:0*/, 2> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_en;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 4>, 2> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_data;
        VlUnpacked<QData/*63:0*/, 2> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_data;
        VlUnpacked<CData/*0:0*/, 2> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_vector_last;
        VlUnpacked<CData/*0:0*/, 2> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_start;
        VlUnpacked<CData/*0:0*/, 2> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_last;
        VlUnpacked<SData/*15:0*/, 256> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory;
        VlUnpacked<SData/*15:0*/, 256> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory;
        VlUnpacked<SData/*15:0*/, 256> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory;
        VlUnpacked<SData/*15:0*/, 256> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory;
        VlUnpacked<SData/*15:0*/, 256> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory;
        VlUnpacked<SData/*15:0*/, 256> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory;
        VlUnpacked<SData/*15:0*/, 256> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory;
        VlUnpacked<SData/*15:0*/, 256> TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory;
        VlUnpacked<CData/*0:0*/, 8> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hfea358fc__0;
    VlTriggerScheduler __VtrigSched_h4eb64ecb__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTQ_INV_TRANSPOSE_MEMORY_TB___024root(VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* symsp, const char* v__name);
    ~VTQ_INV_TRANSPOSE_MEMORY_TB___024root();
    VL_UNCOPYABLE(VTQ_INV_TRANSPOSE_MEMORY_TB___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
