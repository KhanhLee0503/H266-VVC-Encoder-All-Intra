// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCTU_RECON_EXPORT_TB.h for the primary calling header

#ifndef VERILATED_VCTU_RECON_EXPORT_TB___024ROOT_H_
#define VERILATED_VCTU_RECON_EXPORT_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VCTU_RECON_EXPORT_TB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCTU_RECON_EXPORT_TB___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ CTU_RECON_EXPORT_TB__DOT__I_CLK;
        CData/*0:0*/ CTU_RECON_EXPORT_TB__DOT__I_RESETN;
        CData/*0:0*/ CTU_RECON_EXPORT_TB__DOT__I_EXPORT_START_VALID;
        CData/*7:0*/ CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_WIDTH;
        CData/*7:0*/ CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_HEIGHT;
        CData/*0:0*/ CTU_RECON_EXPORT_TB__DOT__I_DATA_READY;
        CData/*0:0*/ CTU_RECON_EXPORT_TB__DOT__wr_en;
        CData/*1:0*/ CTU_RECON_EXPORT_TB__DOT__wr_comp;
        CData/*0:0*/ CTU_RECON_EXPORT_TB__DOT__export_active;
        CData/*1:0*/ CTU_RECON_EXPORT_TB__DOT__stall_comp;
        CData/*6:0*/ CTU_RECON_EXPORT_TB__DOT__stall_x;
        CData/*6:0*/ CTU_RECON_EXPORT_TB__DOT__stall_y;
        CData/*0:0*/ CTU_RECON_EXPORT_TB__DOT__stall_row_last;
        CData/*0:0*/ CTU_RECON_EXPORT_TB__DOT__stall_comp_last;
        CData/*0:0*/ CTU_RECON_EXPORT_TB__DOT__stall_ctu_last;
        CData/*0:0*/ CTU_RECON_EXPORT_TB__DOT__was_stalled;
        CData/*0:0*/ CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__w_rd_component_valid;
        CData/*0:0*/ CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_rd_valid;
        CData/*2:0*/ CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state;
        CData/*7:0*/ CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_luma_width;
        CData/*7:0*/ CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_luma_height;
        CData/*7:0*/ CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_comp_width;
        CData/*7:0*/ CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_comp_height;
        CData/*1:0*/ CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component;
        CData/*7:0*/ CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x;
        CData/*7:0*/ CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y;
        CData/*0:0*/ CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_row_last;
        CData/*0:0*/ CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component_last;
        CData/*0:0*/ CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_ctu_last;
        CData/*0:0*/ CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_done;
        CData/*0:0*/ CTU_RECON_EXPORT_TB__DOT__u_export__DOT__w_last_in_row;
        CData/*0:0*/ CTU_RECON_EXPORT_TB__DOT__u_export__DOT__w_last_in_component;
        CData/*5:0*/ __Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v0;
        CData/*0:0*/ __Vdlyvset__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v0;
        CData/*5:0*/ __Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v1;
        CData/*5:0*/ __Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v2;
        CData/*5:0*/ __Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v3;
        CData/*5:0*/ __Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v0;
        CData/*0:0*/ __Vdlyvset__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v0;
        CData/*5:0*/ __Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v1;
        CData/*5:0*/ __Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v2;
        CData/*5:0*/ __Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v3;
        CData/*5:0*/ __Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v0;
        CData/*0:0*/ __Vdlyvset__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v0;
        CData/*5:0*/ __Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v1;
        CData/*5:0*/ __Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v2;
        CData/*5:0*/ __Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v3;
        CData/*2:0*/ __Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state;
        CData/*1:0*/ __Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__CTU_RECON_EXPORT_TB__DOT__I_CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__CTU_RECON_EXPORT_TB__DOT__I_RESETN__0;
        CData/*0:0*/ __VactContinue;
        SData/*8:0*/ CTU_RECON_EXPORT_TB__DOT__I_CTU_ID;
        SData/*11:0*/ CTU_RECON_EXPORT_TB__DOT__O_RAM_RD_ADDR;
        SData/*11:0*/ CTU_RECON_EXPORT_TB__DOT__wr_addr;
        SData/*8:0*/ CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_ctu_id;
        SData/*9:0*/ __Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v0;
        SData/*15:0*/ __Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v0;
        SData/*9:0*/ __Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v1;
        SData/*15:0*/ __Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v1;
        SData/*9:0*/ __Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v2;
        SData/*15:0*/ __Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v2;
        SData/*9:0*/ __Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v3;
    };
    struct {
        SData/*15:0*/ __Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v3;
        SData/*11:0*/ __Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v0;
        SData/*15:0*/ __Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v0;
        SData/*11:0*/ __Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v1;
        SData/*15:0*/ __Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v1;
        SData/*11:0*/ __Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v2;
        SData/*15:0*/ __Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v2;
        SData/*11:0*/ __Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v3;
        SData/*15:0*/ __Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v3;
        SData/*9:0*/ __Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v0;
        SData/*15:0*/ __Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v0;
        SData/*9:0*/ __Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v1;
        SData/*15:0*/ __Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v1;
        SData/*9:0*/ __Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v2;
        SData/*15:0*/ __Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v2;
        SData/*9:0*/ __Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v3;
        SData/*15:0*/ __Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v3;
        IData/*31:0*/ CTU_RECON_EXPORT_TB__DOT__case_id;
        IData/*31:0*/ CTU_RECON_EXPORT_TB__DOT__expected_beats;
        IData/*31:0*/ CTU_RECON_EXPORT_TB__DOT__observed_beats;
        IData/*31:0*/ CTU_RECON_EXPORT_TB__DOT__reads;
        IData/*31:0*/ CTU_RECON_EXPORT_TB__DOT__exp_comp;
        IData/*31:0*/ CTU_RECON_EXPORT_TB__DOT__exp_x;
        IData/*31:0*/ CTU_RECON_EXPORT_TB__DOT__exp_y;
        IData/*31:0*/ CTU_RECON_EXPORT_TB__DOT__w;
        IData/*31:0*/ CTU_RECON_EXPORT_TB__DOT__h;
        IData/*31:0*/ CTU_RECON_EXPORT_TB__DOT__done_seen;
        IData/*31:0*/ CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__cw;
        IData/*31:0*/ CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__ch;
        IData/*31:0*/ CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__addr;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ CTU_RECON_EXPORT_TB__DOT__wr_data;
        QData/*63:0*/ CTU_RECON_EXPORT_TB__DOT__stall_data;
        QData/*63:0*/ CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_rd_data;
        QData/*63:0*/ CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_data;
        VlUnpacked<QData/*63:0*/, 4096> CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem;
        VlUnpacked<QData/*63:0*/, 1024> CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem;
        VlUnpacked<QData/*63:0*/, 1024> CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h52bfbd70__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCTU_RECON_EXPORT_TB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCTU_RECON_EXPORT_TB___024root(VCTU_RECON_EXPORT_TB__Syms* symsp, const char* v__name);
    ~VCTU_RECON_EXPORT_TB___024root();
    VL_UNCOPYABLE(VCTU_RECON_EXPORT_TB___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
