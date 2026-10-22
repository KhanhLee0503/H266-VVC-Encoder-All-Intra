// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTB_DBF_FD_SAMPLE_ACTIVITY.h for the primary calling header

#ifndef VERILATED_VTB_DBF_FD_SAMPLE_ACTIVITY___024ROOT_H_
#define VERILATED_VTB_DBF_FD_SAMPLE_ACTIVITY___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VTB_DBF_FD_SAMPLE_ACTIVITY__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTB_DBF_FD_SAMPLE_ACTIVITY___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__clk;
        CData/*0:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__rst_n;
        CData/*0:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__clear;
        CData/*0:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid;
        CData/*0:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready;
        CData/*1:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp;
        CData/*0:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_dir;
        CData/*1:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_group_enable;
        CData/*2:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0;
        CData/*2:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0;
        CData/*2:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1;
        CData/*2:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1;
        CData/*1:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs0;
        CData/*1:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs1;
        CData/*0:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_ready;
        CData/*1:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_comp;
        CData/*0:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_dir;
        CData/*1:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_group_enable;
        CData/*2:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sp0;
        CData/*2:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sq0;
        CData/*2:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sp1;
        CData/*2:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sq1;
        CData/*1:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_bs0;
        CData/*1:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_bs1;
        CData/*2:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sp_g1_selected;
        CData/*2:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sq_g1_selected;
        CData/*0:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_slot_ready;
        CData/*0:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_accept;
        CData/*0:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__TB_DBF_FD_SAMPLE_ACTIVITY__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__TB_DBF_FD_SAMPLE_ACTIVITY__DOT__rst_n__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta0;
        SData/*15:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta1;
        SData/*15:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc0;
        SData/*15:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc1;
        SData/*15:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tag;
        SData/*15:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_beta0;
        SData/*15:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_beta1;
        SData/*15:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tc0;
        SData/*15:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tc1;
        SData/*15:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tag;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_near;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_near;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_far;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_far;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span3;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span3;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span_len;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span_len;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_extension;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_extension;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_boundary;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_near;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_near;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_far;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_far;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span3;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span3;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span_len;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span_len;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_extension;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_extension;
    };
    struct {
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_boundary;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_near;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_near;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_far;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_far;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span3;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span3;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span_len;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span_len;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_extension;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_extension;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_boundary;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_near;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_near;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_far;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_far;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span3;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span3;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span_len;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span_len;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_extension;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_extension;
        SData/*11:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_boundary;
        VlWide<32>/*1023:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples;
        VlWide<32>/*1023:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples;
        IData/*31:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__total_pass;
        IData/*31:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__unnamedblk1__DOT__n;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__index;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__comp;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__sp0;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__sq0;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__sp1;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__sq1;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__31__stall;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__transaction;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__verify_payload__32__line;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__index;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__comp;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__sp0;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__sq0;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__sp1;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__sq1;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__stall;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__62__i;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__index;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__comp;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__sp0;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__sq0;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__sp1;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__sq1;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__124__stall;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__index;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__comp;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__sp0;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__sq0;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__sp1;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__sq1;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__stall;
        IData/*31:0*/ __Vtask_TB_DBF_FD_SAMPLE_ACTIVITY__DOT__run_one__155__i;
        IData/*31:0*/ __VactIterCount;
        QData/*47:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near;
        QData/*47:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near;
        QData/*47:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far;
        QData/*47:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far;
    };
    struct {
        QData/*47:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3;
        QData/*47:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3;
        QData/*47:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len;
        QData/*47:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len;
        QData/*47:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext;
        QData/*47:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext;
        QData/*47:0*/ TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff;
        VlUnpacked<SData/*11:0*/, 8> TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p;
        VlUnpacked<SData/*11:0*/, 8> TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q;
        VlUnpacked<SData/*11:0*/, 8> TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p;
        VlUnpacked<SData/*11:0*/, 8> TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q;
        VlUnpacked<SData/*11:0*/, 8> TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p;
        VlUnpacked<SData/*11:0*/, 8> TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q;
        VlUnpacked<SData/*11:0*/, 8> TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p;
        VlUnpacked<SData/*11:0*/, 8> TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q;
        VlUnpacked<CData/*0:0*/, 10> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h4badd57d__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTB_DBF_FD_SAMPLE_ACTIVITY___024root(VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* symsp, const char* v__name);
    ~VTB_DBF_FD_SAMPLE_ACTIVITY___024root();
    VL_UNCOPYABLE(VTB_DBF_FD_SAMPLE_ACTIVITY___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
