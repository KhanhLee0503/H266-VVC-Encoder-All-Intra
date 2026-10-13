// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_DCT2_CORE_TB.h for the primary calling header

#include "VTQ_DCT2_CORE_TB__pch.h"
#include "VTQ_DCT2_CORE_TB___024root.h"

extern const VlUnpacked<CData/*2:0*/, 4> VTQ_DCT2_CORE_TB__ConstPool__TABLE_h9a6d1314_0;
extern const VlUnpacked<CData/*4:0*/, 4> VTQ_DCT2_CORE_TB__ConstPool__TABLE_h8fcb25b0_0;
extern const VlUnpacked<CData/*0:0*/, 4> VTQ_DCT2_CORE_TB__ConstPool__TABLE_ha981021f_0;
extern const VlUnpacked<CData/*0:0*/, 4> VTQ_DCT2_CORE_TB__ConstPool__TABLE_hc21201f3_0;
extern const VlUnpacked<CData/*0:0*/, 4> VTQ_DCT2_CORE_TB__ConstPool__TABLE_hf6164e5c_0;

VL_INLINE_OPT void VTQ_DCT2_CORE_TB___024root___nba_sequent__TOP__1(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*1:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*2:0*/ __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat;
    __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat = 0;
    CData/*1:0*/ __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage;
    __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage = 0;
    CData/*2:0*/ __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat;
    __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat = 0;
    CData/*1:0*/ __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx;
    __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx = 0;
    CData/*0:0*/ __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx;
    __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx = 0;
    CData/*4:0*/ __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid;
    __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid = 0;
    CData/*2:0*/ __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid;
    __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid = 0;
    CData/*1:0*/ __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_valid;
    __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_valid = 0;
    // Body
    __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid 
        = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid;
    __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid 
        = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid;
    __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx 
        = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx;
    __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx 
        = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx;
    __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat 
        = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat;
    __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_valid 
        = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_valid;
    __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat 
        = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat;
    __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage 
        = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage;
    if (vlSelf->TQ_DCT2_CORE_TB__DOT__I_RESETN) {
        if ((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready))) {
            __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid 
                = ((6U & (IData)(__Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid)) 
                   | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_4__I_DATA_VALID));
        }
        if ((2U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready))) {
            __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid 
                = ((5U & (IData)(__Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid)) 
                   | (2U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid) 
                            << 1U)));
        }
        if ((4U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready))) {
            __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid 
                = ((3U & (IData)(__Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid)) 
                   | (4U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid) 
                            << 1U)));
        }
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_valid 
            = ((0x1eU & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_valid) 
                         << 1U)) | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_issue));
        if ((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready))) {
            __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid 
                = ((0x1eU & (IData)(__Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid)) 
                   | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_8__I_DATA_VALID));
        }
        if ((2U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready))) {
            __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid 
                = ((0x1dU & (IData)(__Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid)) 
                   | (2U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid) 
                            << 1U)));
        }
        if ((4U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready))) {
            __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid 
                = ((0x1bU & (IData)(__Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid)) 
                   | (4U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid) 
                            << 1U)));
        }
        if ((8U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready))) {
            __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid 
                = ((0x17U & (IData)(__Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid)) 
                   | (8U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid) 
                            << 1U)));
        }
        if ((0x10U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready))) {
            __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid 
                = ((0xfU & (IData)(__Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid)) 
                   | (0x10U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid) 
                               << 1U)));
        }
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_valid 
            = ((0x1eU & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_valid) 
                         << 1U)) | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_issue));
        if ((0U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_current_state))) {
            __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx = 0U;
        } else if (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_issue) 
                    & (~ (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx)))) {
            __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx 
                = (1U & ((IData)(1U) + (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx)));
        }
        if ((0U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_current_state))) {
            __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx = 0U;
        } else if (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_issue) 
                    & (3U != (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx)))) {
            __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx 
                = (3U & ((IData)(1U) + (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx)));
        }
        if (((0U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
             & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_input_handshake))) {
            __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat = 1U;
            __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat = 0U;
            __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__I_TRANSFORM_SIZE;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_branch_done = 0U;
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__I_TRANSFORM_SIZE;
        } else {
            if (((1U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
                 & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_input_handshake))) {
                __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat)));
            }
            if (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_output_handshake) {
                __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat)));
            }
            if ((((4U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
                  & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_selected_ready)) 
                 & (0U != (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)))) {
                __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage 
                    = (3U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage) 
                             - (IData)(1U)));
            }
            if ((8U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_output_valid))) {
                vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_branch_done 
                    = (0x10U | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_branch_done));
            }
            if ((4U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_output_valid))) {
                vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_branch_done 
                    = (8U | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_branch_done));
            }
            if ((2U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_output_valid))) {
                vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_branch_done 
                    = (4U | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_branch_done));
            }
            if ((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_output_valid))) {
                vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_branch_done 
                    = (2U | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_branch_done));
            }
            if ((2U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_valid))) {
                vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_branch_done 
                    = (1U | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_branch_done));
            }
        }
        if ((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_ready))) {
            __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_valid 
                = ((2U & (IData)(__Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_valid)) 
                   | (5U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)));
        }
        if ((2U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_ready))) {
            __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_valid 
                = ((1U & (IData)(__Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_valid)) 
                   | (2U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_valid) 
                            << 1U)));
        }
        if (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_4__O_DATA_READY) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__r_data_valid 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_4__I_DATA_VALID;
        }
        if (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_8__O_DATA_READY) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_data_valid 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_8__I_DATA_VALID;
        }
        if (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_16__O_DATA_READY) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_data_valid 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_16__I_DATA_VALID;
        }
        if (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_32__O_DATA_READY) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_data_valid 
                = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_32__I_DATA_VALID;
        }
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_current_state 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_next_state;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_current_state 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_next_state;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_next_state;
    } else {
        __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_valid = 0U;
        __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_valid = 0U;
        __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx = 0U;
        __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx = 0U;
        __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat = 0U;
        __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_valid = 0U;
        __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat = 0U;
        __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__r_data_valid = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_data_valid = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_data_valid = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_data_valid = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_branch_done = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_current_state = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_current_state = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state = 0U;
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid 
        = __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid 
        = __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx 
        = __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx 
        = __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat 
        = __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat 
        = __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage 
        = __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_valid 
        = __Vdly__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_valid;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_output_valid 
        = (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_data_valid) 
            << 3U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_data_valid) 
                       << 2U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_data_valid) 
                                  << 1U) | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__r_data_valid))));
    __Vtableidx1 = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_last_beat 
        = VTQ_DCT2_CORE_TB__ConstPool__TABLE_h9a6d1314_0
        [__Vtableidx1];
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_required_branches 
        = VTQ_DCT2_CORE_TB__ConstPool__TABLE_h8fcb25b0_0
        [__Vtableidx1];
    __Vtableidx5 = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_current_state;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_16__O_DATA_READY 
        = VTQ_DCT2_CORE_TB__ConstPool__TABLE_ha981021f_0
        [__Vtableidx5];
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_16__O_DATA_VALID 
        = VTQ_DCT2_CORE_TB__ConstPool__TABLE_hc21201f3_0
        [__Vtableidx5];
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_issue 
        = VTQ_DCT2_CORE_TB__ConstPool__TABLE_hf6164e5c_0
        [__Vtableidx5];
    __Vtableidx3 = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_current_state;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_32__O_DATA_READY 
        = VTQ_DCT2_CORE_TB__ConstPool__TABLE_ha981021f_0
        [__Vtableidx3];
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_32__O_DATA_VALID 
        = VTQ_DCT2_CORE_TB__ConstPool__TABLE_hc21201f3_0
        [__Vtableidx3];
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_issue 
        = VTQ_DCT2_CORE_TB__ConstPool__TABLE_hf6164e5c_0
        [__Vtableidx3];
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_32__I_DATA_VALID 
        = ((2U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (3U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_16__I_DATA_VALID 
        = ((2U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (2U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_8__I_DATA_VALID 
        = ((2U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (1U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_4__I_DATA_VALID 
        = ((2U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (0U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_8__I_DATA_VALID 
        = ((4U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (1U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_4__I_DATA_VALID 
        = ((4U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (0U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_LAST = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_32__I_DATA_VALID 
        = ((4U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (3U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_16__I_DATA_VALID 
        = ((4U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (2U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_READY = 0U;
    if (((0U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
         | (1U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_READY = 1U;
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_VALID = 0U;
    if ((7U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk7__DOT__lane_idx = 4U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_LAST = 
            ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat) 
             == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_last_beat));
        vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_VALID = 1U;
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_32__I_DATA_READY 
        = ((3U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (3U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_16__I_DATA_READY 
        = ((3U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (2U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_8__I_DATA_READY 
        = ((3U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (1U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_4__I_DATA_READY 
        = ((3U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
           & (0U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_output_valid 
        = (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_32__O_DATA_VALID) 
            << 3U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_16__O_DATA_VALID) 
                       << 2U) | ((2U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid) 
                                        >> 3U)) | (1U 
                                                   & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid) 
                                                      >> 2U)))));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_32__O_DATA_READY 
        = (1U & ((~ (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_data_valid)) 
                 | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_32__I_DATA_READY)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_16__O_DATA_READY 
        = (1U & ((~ (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_data_valid)) 
                 | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_16__I_DATA_READY)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_8__O_DATA_READY 
        = (1U & ((~ (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_data_valid)) 
                 | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_8__I_DATA_READY)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_4__O_DATA_READY 
        = (1U & ((~ (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__r_data_valid)) 
                 | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_4__I_DATA_READY)));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_input_ready 
        = (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_32__O_DATA_READY) 
            << 3U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_16__O_DATA_READY) 
                       << 2U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_8__O_DATA_READY) 
                                  << 1U) | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_4__O_DATA_READY))));
    if ((2U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage))) {
        if ((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage))) {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_valid 
                = (1U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_output_valid) 
                         >> 3U));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_ready 
                = (1U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_input_ready) 
                         >> 3U));
        } else {
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_valid 
                = (1U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_output_valid) 
                         >> 2U));
            vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_ready 
                = (1U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_input_ready) 
                         >> 2U));
        }
    } else if ((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_valid 
            = (1U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_output_valid) 
                     >> 1U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_ready 
            = (1U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_input_ready) 
                     >> 1U));
    } else {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_valid 
            = (1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_output_valid));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_ready 
            = (1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_input_ready));
    }
}

extern const VlUnpacked<CData/*1:0*/, 128> VTQ_DCT2_CORE_TB__ConstPool__TABLE_he1a2e337_0;
extern const VlUnpacked<CData/*1:0*/, 64> VTQ_DCT2_CORE_TB__ConstPool__TABLE_h85c5f1cc_0;

VL_INLINE_OPT void VTQ_DCT2_CORE_TB___024root___nba_comb__TOP__2(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___nba_comb__TOP__2\n"); );
    // Init
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__0__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,18, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx)))]));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__1__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,18, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & ((IData)(1U) 
                                              + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx))))]));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__2__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,18, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & ((IData)(2U) 
                                              + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx))))]));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__3__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,18, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & ((IData)(3U) 
                                              + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx))))]));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,17, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx)))]));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,17, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx))))]));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,17, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx))))]));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,17, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx))))]));
    if ((1U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
        vlSelf->__VdfgTmp_hae8a7367__0 = (0x3ffffU 
                                          & ((0x30000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [7U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [7U]));
        vlSelf->__VdfgTmp_h2a84b06a__0 = (0x3ffffU 
                                          & ((0x30000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [6U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [6U]));
        vlSelf->__VdfgTmp_h02f6e96c__0 = (0x3ffffU 
                                          & ((0x30000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [5U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [5U]));
        vlSelf->__VdfgTmp_hcce9ec7a__0 = (0x3ffffU 
                                          & ((0x30000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [4U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [4U]));
        vlSelf->__VdfgTmp_h25c57c71__0 = (0x3ffffU 
                                          & ((0x30000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [3U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [3U]));
        vlSelf->__VdfgTmp_h40a3c2dd__0 = (0x3ffffU 
                                          & ((0x30000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [2U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [2U]));
        vlSelf->__VdfgTmp_hdf848912__0 = (0x3ffffU 
                                          & ((0x30000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [1U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [1U]));
        vlSelf->__VdfgTmp_h63e39fe5__0 = (0x3ffffU 
                                          & ((0x30000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [0U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [0U]));
    } else {
        vlSelf->__VdfgTmp_hae8a7367__0 = (0x3ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[4U] 
                                              << 2U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[3U] 
                                                >> 0x1eU)));
        vlSelf->__VdfgTmp_h2a84b06a__0 = (0x3ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[3U] 
                                              << 0x14U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[3U] 
                                                >> 0xcU)));
        vlSelf->__VdfgTmp_h02f6e96c__0 = (0x3ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[3U] 
                                              << 6U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[2U] 
                                                >> 0x1aU)));
        vlSelf->__VdfgTmp_hcce9ec7a__0 = (0x3ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[2U] 
                                              << 0x18U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[2U] 
                                                >> 8U)));
        vlSelf->__VdfgTmp_h25c57c71__0 = (0x3ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[2U] 
                                              << 0xaU) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[1U] 
                                                >> 0x16U)));
        vlSelf->__VdfgTmp_h40a3c2dd__0 = (0x3ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[1U] 
                                              << 0x1cU) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[1U] 
                                                >> 4U)));
        vlSelf->__VdfgTmp_hdf848912__0 = (0x3ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[1U] 
                                              << 0xeU) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[0U] 
                                                >> 0x12U)));
        vlSelf->__VdfgTmp_h63e39fe5__0 = (0x3ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16[0U]);
    }
    if ((0U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
        vlSelf->__VdfgTmp_hd7981b1a__0 = (0x7ffffU 
                                          & ((0x70000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [3U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [3U]));
        vlSelf->__VdfgTmp_h38140bf3__0 = (0x7ffffU 
                                          & ((0x70000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [2U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [2U]));
        vlSelf->__VdfgTmp_he313587d__0 = (0x7ffffU 
                                          & ((0x70000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [1U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [1U]));
        vlSelf->__VdfgTmp_h0826cdfe__0 = (0x7ffffU 
                                          & ((0x70000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                                [0U] 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                             [0U]));
    } else {
        vlSelf->__VdfgTmp_hd7981b1a__0 = (0x7ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_8[2U] 
                                              << 7U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_8[1U] 
                                                >> 0x19U)));
        vlSelf->__VdfgTmp_h38140bf3__0 = (0x7ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_8[1U] 
                                              << 0x1aU) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_8[1U] 
                                                >> 6U)));
        vlSelf->__VdfgTmp_he313587d__0 = (0x7ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_8[1U] 
                                              << 0xdU) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_8[0U] 
                                                >> 0x13U)));
        vlSelf->__VdfgTmp_h0826cdfe__0 = (0x7ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_8[0U]);
    }
    if ((2U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size))) {
        vlSelf->__VdfgTmp_h312cbc05__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_first);
        vlSelf->__VdfgTmp_h31e5f47b__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_first);
        vlSelf->__VdfgTmp_h8590e32c__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_first);
        vlSelf->__VdfgTmp_hcff819dd__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_first);
        vlSelf->__VdfgTmp_hb25b76ee__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_first);
        vlSelf->__VdfgTmp_h658ce4b7__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_first);
        vlSelf->__VdfgTmp_h2803f5e2__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_first);
        vlSelf->__VdfgTmp_hc6366976__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_first);
        vlSelf->__VdfgTmp_h394abbe9__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first);
        vlSelf->__VdfgTmp_hc9305433__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first);
        vlSelf->__VdfgTmp_h86e84127__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first);
        vlSelf->__VdfgTmp_hb6cc2408__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first);
        vlSelf->__VdfgTmp_h82fffea4__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first);
        vlSelf->__VdfgTmp_hd7bdaf7f__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first);
        vlSelf->__VdfgTmp_h1d6eba1b__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first);
        vlSelf->__VdfgTmp_hc08cf5ad__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first);
    } else {
        vlSelf->__VdfgTmp_h312cbc05__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[8U] 
                                              << 1U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[7U] 
                                                >> 0x1fU)));
        vlSelf->__VdfgTmp_h31e5f47b__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[7U] 
                                              << 0x12U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[7U] 
                                                >> 0xeU)));
        vlSelf->__VdfgTmp_h8590e32c__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[7U] 
                                              << 3U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[6U] 
                                                >> 0x1dU)));
        vlSelf->__VdfgTmp_hcff819dd__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[6U] 
                                              << 0x14U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[6U] 
                                                >> 0xcU)));
        vlSelf->__VdfgTmp_hb25b76ee__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[6U] 
                                              << 5U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[5U] 
                                                >> 0x1bU)));
        vlSelf->__VdfgTmp_h658ce4b7__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[5U] 
                                              << 0x16U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[5U] 
                                                >> 0xaU)));
        vlSelf->__VdfgTmp_h2803f5e2__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[5U] 
                                              << 7U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[4U] 
                                                >> 0x19U)));
        vlSelf->__VdfgTmp_hc6366976__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[4U] 
                                              << 0x18U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[4U] 
                                                >> 8U)));
        vlSelf->__VdfgTmp_h394abbe9__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[4U] 
                                              << 9U) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[3U] 
                                                >> 0x17U)));
        vlSelf->__VdfgTmp_hc9305433__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[3U] 
                                              << 0x1aU) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[3U] 
                                                >> 6U)));
        vlSelf->__VdfgTmp_h86e84127__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[3U] 
                                              << 0xbU) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[2U] 
                                                >> 0x15U)));
        vlSelf->__VdfgTmp_hb6cc2408__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[2U] 
                                              << 0x1cU) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[2U] 
                                                >> 4U)));
        vlSelf->__VdfgTmp_h82fffea4__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[2U] 
                                              << 0xdU) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[1U] 
                                                >> 0x13U)));
        vlSelf->__VdfgTmp_hd7bdaf7f__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[1U] 
                                              << 0x1eU) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[1U] 
                                                >> 2U)));
        vlSelf->__VdfgTmp_h1d6eba1b__0 = (0x1ffffU 
                                          & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[1U] 
                                              << 0xfU) 
                                             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[0U] 
                                                >> 0x11U)));
        vlSelf->__VdfgTmp_hc08cf5ad__0 = (0x1ffffU 
                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32[0U]);
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[0U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[1U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[2U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[3U] = 0U;
    if ((7U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_ha5ff5011__0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient
            [(0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat), 2U))];
        vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[0U] = 
            ((0xf0000000U & vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[0U]) 
             | vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_ha5ff5011__0);
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_ha5ff5011__0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient
            [(0x1fU & ((IData)(1U) + VL_SHIFTL_III(5,32,32, (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat), 2U)))];
        vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[0U] = 
            ((0xfffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[0U]) 
             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_ha5ff5011__0 
                << 0x1cU));
        vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[1U] = 
            ((0xff000000U & vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[1U]) 
             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_ha5ff5011__0 
                >> 4U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_ha5ff5011__0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient
            [(0x1fU & ((IData)(2U) + VL_SHIFTL_III(5,32,32, (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat), 2U)))];
        vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[1U] = 
            ((0xffffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[1U]) 
             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_ha5ff5011__0 
                << 0x18U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[2U] = 
            ((0xfff00000U & vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[2U]) 
             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_ha5ff5011__0 
                >> 8U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_ha5ff5011__0 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient
            [(0x1fU & ((IData)(3U) + VL_SHIFTL_III(5,32,32, (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat), 2U)))];
        vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[2U] = 
            ((0xfffffU & vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[2U]) 
             | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_ha5ff5011__0 
                << 0x14U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA[3U] = 
            (0xffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vlvbound_ha5ff5011__0 
                        >> 0xcU));
    }
    __Vtableidx2 = (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_32__O_DATA_READY) 
                     << 6U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_32__I_DATA_VALID) 
                                << 5U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx) 
                                           << 3U) | 
                                          ((0x3ffffffcU 
                                            & (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_valid) 
                                                >> 2U) 
                                               & ((3U 
                                                   == 
                                                   vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group
                                                   [4U]) 
                                                  << 2U))) 
                                           | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_current_state)))));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_next_state 
        = VTQ_DCT2_CORE_TB__ConstPool__TABLE_he1a2e337_0
        [__Vtableidx2];
    __Vtableidx4 = (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_16__O_DATA_READY) 
                     << 5U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_16__I_DATA_VALID) 
                                << 4U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx) 
                                           << 3U) | 
                                          ((0x3ffffffcU 
                                            & (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_valid) 
                                                >> 2U) 
                                               & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group
                                                  [4U] 
                                                  << 2U))) 
                                           | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_current_state)))));
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_next_state 
        = VTQ_DCT2_CORE_TB__ConstPool__TABLE_h85c5f1cc_0
        [__Vtableidx4];
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last 
        = ((0x40000U & (vlSelf->__VdfgTmp_hae8a7367__0 
                        << 1U)) | vlSelf->__VdfgTmp_hae8a7367__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last 
        = ((0x40000U & (vlSelf->__VdfgTmp_h2a84b06a__0 
                        << 1U)) | vlSelf->__VdfgTmp_h2a84b06a__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last 
        = ((0x40000U & (vlSelf->__VdfgTmp_h02f6e96c__0 
                        << 1U)) | vlSelf->__VdfgTmp_h02f6e96c__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last 
        = ((0x40000U & (vlSelf->__VdfgTmp_hcce9ec7a__0 
                        << 1U)) | vlSelf->__VdfgTmp_hcce9ec7a__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
        = ((0x40000U & (vlSelf->__VdfgTmp_h25c57c71__0 
                        << 1U)) | vlSelf->__VdfgTmp_h25c57c71__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
        = ((0x40000U & (vlSelf->__VdfgTmp_h40a3c2dd__0 
                        << 1U)) | vlSelf->__VdfgTmp_h40a3c2dd__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
        = ((0x40000U & (vlSelf->__VdfgTmp_hdf848912__0 
                        << 1U)) | vlSelf->__VdfgTmp_hdf848912__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
        = ((0x40000U & (vlSelf->__VdfgTmp_h63e39fe5__0 
                        << 1U)) | vlSelf->__VdfgTmp_h63e39fe5__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last 
        = ((0x80000U & (vlSelf->__VdfgTmp_hd7981b1a__0 
                        << 1U)) | vlSelf->__VdfgTmp_hd7981b1a__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last 
        = ((0x80000U & (vlSelf->__VdfgTmp_h38140bf3__0 
                        << 1U)) | vlSelf->__VdfgTmp_h38140bf3__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
        = ((0x80000U & (vlSelf->__VdfgTmp_he313587d__0 
                        << 1U)) | vlSelf->__VdfgTmp_he313587d__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
        = ((0x80000U & (vlSelf->__VdfgTmp_h0826cdfe__0 
                        << 1U)) | vlSelf->__VdfgTmp_h0826cdfe__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last 
        = ((0x20000U & (vlSelf->__VdfgTmp_h312cbc05__0 
                        << 1U)) | vlSelf->__VdfgTmp_h312cbc05__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last 
        = ((0x20000U & (vlSelf->__VdfgTmp_h31e5f47b__0 
                        << 1U)) | vlSelf->__VdfgTmp_h31e5f47b__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last 
        = ((0x20000U & (vlSelf->__VdfgTmp_h8590e32c__0 
                        << 1U)) | vlSelf->__VdfgTmp_h8590e32c__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last 
        = ((0x20000U & (vlSelf->__VdfgTmp_hcff819dd__0 
                        << 1U)) | vlSelf->__VdfgTmp_hcff819dd__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last 
        = ((0x20000U & (vlSelf->__VdfgTmp_hb25b76ee__0 
                        << 1U)) | vlSelf->__VdfgTmp_hb25b76ee__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last 
        = ((0x20000U & (vlSelf->__VdfgTmp_h658ce4b7__0 
                        << 1U)) | vlSelf->__VdfgTmp_h658ce4b7__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last 
        = ((0x20000U & (vlSelf->__VdfgTmp_h2803f5e2__0 
                        << 1U)) | vlSelf->__VdfgTmp_h2803f5e2__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last 
        = ((0x20000U & (vlSelf->__VdfgTmp_hc6366976__0 
                        << 1U)) | vlSelf->__VdfgTmp_hc6366976__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
        = ((0x20000U & (vlSelf->__VdfgTmp_h394abbe9__0 
                        << 1U)) | vlSelf->__VdfgTmp_h394abbe9__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
        = ((0x20000U & (vlSelf->__VdfgTmp_hc9305433__0 
                        << 1U)) | vlSelf->__VdfgTmp_hc9305433__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
        = ((0x20000U & (vlSelf->__VdfgTmp_h86e84127__0 
                        << 1U)) | vlSelf->__VdfgTmp_h86e84127__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
        = ((0x20000U & (vlSelf->__VdfgTmp_hb6cc2408__0 
                        << 1U)) | vlSelf->__VdfgTmp_hb6cc2408__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
        = ((0x20000U & (vlSelf->__VdfgTmp_h82fffea4__0 
                        << 1U)) | vlSelf->__VdfgTmp_h82fffea4__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
        = ((0x20000U & (vlSelf->__VdfgTmp_hd7bdaf7f__0 
                        << 1U)) | vlSelf->__VdfgTmp_hd7bdaf7f__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
        = ((0x20000U & (vlSelf->__VdfgTmp_h1d6eba1b__0 
                        << 1U)) | vlSelf->__VdfgTmp_h1d6eba1b__0);
    vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
        = ((0x20000U & (vlSelf->__VdfgTmp_hc08cf5ad__0 
                        << 1U)) | vlSelf->__VdfgTmp_hc08cf5ad__0);
}

void VTQ_DCT2_CORE_TB___024root___nba_sequent__TOP__0(VTQ_DCT2_CORE_TB___024root* vlSelf);
void VTQ_DCT2_CORE_TB___024root___act_sequent__TOP__2(VTQ_DCT2_CORE_TB___024root* vlSelf);
void VTQ_DCT2_CORE_TB___024root___act_sequent__TOP__1(VTQ_DCT2_CORE_TB___024root* vlSelf);
void VTQ_DCT2_CORE_TB___024root___act_sequent__TOP__0(VTQ_DCT2_CORE_TB___024root* vlSelf);
void VTQ_DCT2_CORE_TB___024root___act_comb__TOP__0(VTQ_DCT2_CORE_TB___024root* vlSelf);
void VTQ_DCT2_CORE_TB___024root___act_comb__TOP__1(VTQ_DCT2_CORE_TB___024root* vlSelf);
void VTQ_DCT2_CORE_TB___024root___act_comb__TOP__2(VTQ_DCT2_CORE_TB___024root* vlSelf);

void VTQ_DCT2_CORE_TB___024root___eval_nba(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___eval_nba\n"); );
    // Body
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_DCT2_CORE_TB___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_DCT2_CORE_TB___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((0x14ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_DCT2_CORE_TB___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x12ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_DCT2_CORE_TB___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x18ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_DCT2_CORE_TB___024root___nba_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x11ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_DCT2_CORE_TB___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x3f8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_DCT2_CORE_TB___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x16ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_DCT2_CORE_TB___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x3ffULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_DCT2_CORE_TB___024root___act_comb__TOP__2(vlSelf);
    }
}

void VTQ_DCT2_CORE_TB___024root___timing_resume(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___timing_resume\n"); );
    // Body
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h230c653a__0.resume("@(posedge TQ_DCT2_CORE_TB.I_CLK)");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h8a91bc16__0.resume("@([changed] (32'h1 == TQ_DCT2_CORE_TB.r_completed))");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h8a91cc25__0.resume("@([changed] (32'h2 == TQ_DCT2_CORE_TB.r_completed))");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h8a915aba__0.resume("@([changed] (32'h3 == TQ_DCT2_CORE_TB.r_completed))");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h8a92eac9__0.resume("@([changed] (32'h4 == TQ_DCT2_CORE_TB.r_completed))");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h8a917994__0.resume("@([changed] (32'h5 == TQ_DCT2_CORE_TB.r_completed))");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VTQ_DCT2_CORE_TB___024root___timing_commit(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___timing_commit\n"); );
    // Body
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h230c653a__0.commit("@(posedge TQ_DCT2_CORE_TB.I_CLK)");
    }
    if ((! (0x20ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h8a91bc16__0.commit("@([changed] (32'h1 == TQ_DCT2_CORE_TB.r_completed))");
    }
    if ((! (0x40ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h8a91cc25__0.commit("@([changed] (32'h2 == TQ_DCT2_CORE_TB.r_completed))");
    }
    if ((! (0x80ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h8a915aba__0.commit("@([changed] (32'h3 == TQ_DCT2_CORE_TB.r_completed))");
    }
    if ((! (0x100ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h8a92eac9__0.commit("@([changed] (32'h4 == TQ_DCT2_CORE_TB.r_completed))");
    }
    if ((! (0x200ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h8a917994__0.commit("@([changed] (32'h5 == TQ_DCT2_CORE_TB.r_completed))");
    }
}

void VTQ_DCT2_CORE_TB___024root___eval_triggers__act(VTQ_DCT2_CORE_TB___024root* vlSelf);
void VTQ_DCT2_CORE_TB___024root___eval_act(VTQ_DCT2_CORE_TB___024root* vlSelf);

bool VTQ_DCT2_CORE_TB___024root___eval_phase__act(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<11> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTQ_DCT2_CORE_TB___024root___eval_triggers__act(vlSelf);
    VTQ_DCT2_CORE_TB___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTQ_DCT2_CORE_TB___024root___timing_resume(vlSelf);
        VTQ_DCT2_CORE_TB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTQ_DCT2_CORE_TB___024root___eval_phase__nba(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTQ_DCT2_CORE_TB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root___dump_triggers__nba(VTQ_DCT2_CORE_TB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root___dump_triggers__act(VTQ_DCT2_CORE_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VTQ_DCT2_CORE_TB___024root___eval(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTQ_DCT2_CORE_TB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/TQ_DCT2_CORE_TB.sv", 10, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTQ_DCT2_CORE_TB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../01_tb/TQ_DCT2_CORE_TB.sv", 10, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTQ_DCT2_CORE_TB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTQ_DCT2_CORE_TB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTQ_DCT2_CORE_TB___024root___eval_debug_assertions(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
