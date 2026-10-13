// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTQ_INVERSE_QUANTIZATION_ENGINE_TB.h for the primary calling header

#ifndef VERILATED_VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024ROOT_H_
#define VERILATED_VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_CLK;
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_RESETN;
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_VALID;
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_READY;
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_LAST;
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START;
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_LAST;
        CData/*1:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_WIDTH_SIZE;
        CData/*1:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_HEIGHT_SIZE;
        CData/*1:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_ROW_TRANSFORM_MODE;
        CData/*1:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_COLUMN_TRANSFORM_MODE;
        CData/*6:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_QP_PRIME;
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_IS_IRAP;
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA_READY;
        CData/*3:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_CLIPPED;
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_stalled;
        CData/*3:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_clip;
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_input_stalled;
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_active;
        CData/*6:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_qp_prime;
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_is_irap;
        CData/*1:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_width_size;
        CData/*1:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_height_size;
        CData/*1:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_row_transform_mode;
        CData/*1:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_column_transform_mode;
        CData/*6:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_prime;
        CData/*1:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_tu_width_size;
        CData/*1:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_tu_height_size;
        CData/*3:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_per;
        CData/*2:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_rem;
        CData/*7:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_inv_quant_scale;
        CData/*4:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits;
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_valid;
        CData/*3:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid;
        CData/*3:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready;
        CData/*3:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_enable;
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__O_CLIPPED;
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellinp__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__I_STAGE1_ENABLE;
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellinp__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__I_STAGE0_ENABLE;
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__O_CLIPPED;
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__O_CLIPPED;
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__O_CLIPPED;
        CData/*1:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____VdfgTmp_h03281ae3__0;
        CData/*3:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_log2_sum;
        CData/*6:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_right_shift_wide;
        CData/*7:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0;
        CData/*5:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0;
        CData/*5:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1;
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped;
        CData/*7:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0;
        CData/*5:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0;
        CData/*5:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1;
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped;
        CData/*7:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0;
        CData/*5:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0;
        CData/*5:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1;
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped;
        CData/*7:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0;
        CData/*5:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0;
        CData/*5:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1;
        CData/*0:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped;
        CData/*3:0*/ __Vtrigprevexpr___TOP__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
    };
    struct {
        CData/*3:0*/ __Vtrigprevexpr___TOP__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_RESETN__0;
        CData/*0:0*/ __Vtrigprevexpr_h07d37b0d__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_ID;
        SData/*15:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_id;
        SData/*15:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__O_DATA;
        SData/*15:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__O_DATA;
        SData/*15:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__O_DATA;
        SData/*15:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__O_DATA;
        SData/*15:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0;
        SData/*15:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_output_data;
        SData/*15:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0;
        SData/*15:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_output_data;
        SData/*15:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0;
        SData/*15:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_output_data;
        SData/*15:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0;
        SData/*15:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_output_data;
        IData/*31:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_cycle;
        IData/*31:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent;
        IData/*31:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received;
        IData/*31:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_tus_received;
        IData/*31:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_output_stalls;
        IData/*31:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__unnamedblk1__DOT__lane;
        IData/*16:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended;
        IData/*23:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1;
        IData/*16:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended;
        IData/*23:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1;
        IData/*16:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended;
        IData/*23:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1;
        IData/*16:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended;
        IData/*23:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA;
        QData/*63:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA;
        QData/*34:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__w_actual_meta;
        QData/*63:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_output;
        QData/*34:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_meta;
        QData/*63:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_input;
        QData/*34:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_input_meta;
        QData/*34:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__w_input_meta;
        QData/*39:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended;
        QData/*39:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset;
        QData/*39:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2;
        QData/*39:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2;
        QData/*39:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended;
        QData/*39:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset;
        QData/*39:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2;
        QData/*39:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2;
        QData/*39:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended;
        QData/*39:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset;
        QData/*39:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2;
        QData/*39:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2;
        QData/*39:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended;
        QData/*39:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset;
        QData/*39:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2;
        QData/*39:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2;
        VlUnpacked<QData/*63:0*/, 452> TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_input_mem;
        VlUnpacked<QData/*63:0*/, 452> TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_golden_mem;
        VlUnpacked<QData/*34:0*/, 452> TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_meta_mem;
        VlUnpacked<CData/*3:0*/, 452> TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_clipped_mem;
        VlUnpacked<QData/*34:0*/, 4> TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 9> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hf622d222__0;
    VlTriggerScheduler __VtrigSched_hd43bb609__0;
    VlTriggerScheduler __VtrigSched_h5fe4b39b__0;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root(VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* symsp, const char* v__name);
    ~VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root();
    VL_UNCOPYABLE(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
