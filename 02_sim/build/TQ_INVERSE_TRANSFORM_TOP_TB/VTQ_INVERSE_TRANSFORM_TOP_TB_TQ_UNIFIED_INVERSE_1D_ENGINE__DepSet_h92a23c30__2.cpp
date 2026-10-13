// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_INVERSE_TRANSFORM_TOP_TB.h for the primary calling header

#include "VTQ_INVERSE_TRANSFORM_TOP_TB__pch.h"
#include "VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE.h"
#include "VTQ_INVERSE_TRANSFORM_TOP_TB__Syms.h"

extern const VlUnpacked<CData/*4:0*/, 4> VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_h8fcb25b0_0;
extern const VlUnpacked<CData/*2:0*/, 4> VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_h9a6d1314_0;
extern const VlUnpacked<CData/*0:0*/, 4> VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_ha981021f_0;
extern const VlUnpacked<CData/*0:0*/, 4> VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_hc21201f3_0;
extern const VlUnpacked<CData/*0:0*/, 4> VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_hf6164e5c_0;

VL_INLINE_OPT void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__3(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__3\n"); );
    // Init
    CData/*1:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*1:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*1:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*1:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*3:0*/ __Vdly__r_input_beat_count;
    __Vdly__r_input_beat_count = 0;
    CData/*2:0*/ __Vdly__u_idct2_core__DOT__r_output_beat;
    __Vdly__u_idct2_core__DOT__r_output_beat = 0;
    CData/*4:0*/ __Vdly__u_idct2_core__DOT__r_sent;
    __Vdly__u_idct2_core__DOT__r_sent = 0;
    CData/*1:0*/ __Vdly__u_idct2_core__DOT__u_idct2_base_2__DOT__r_valid;
    __Vdly__u_idct2_core__DOT__u_idct2_base_2__DOT__r_valid = 0;
    CData/*2:0*/ __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid;
    __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid = 0;
    CData/*4:0*/ __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid;
    __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid = 0;
    CData/*1:0*/ __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx;
    __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx = 0;
    CData/*3:0*/ __Vdly__u_idst7_idct8_core__DOT__r_collected_beat;
    __Vdly__u_idst7_idct8_core__DOT__r_collected_beat = 0;
    CData/*2:0*/ __Vdly__u_idst7_idct8_core__DOT__r_output_beat;
    __Vdly__u_idst7_idct8_core__DOT__r_output_beat = 0;
    CData/*1:0*/ __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group;
    __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group = 0;
    CData/*1:0*/ __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat;
    __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat = 0;
    CData/*2:0*/ __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_capture_group;
    __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_capture_group = 0;
    CData/*2:0*/ __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group;
    __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group = 0;
    CData/*2:0*/ __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat;
    __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat = 0;
    // Body
    __Vdly__u_idct2_core__DOT__u_idct2_base_2__DOT__r_valid 
        = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_valid;
    __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid 
        = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid;
    __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid 
        = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid;
    __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx 
        = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx;
    __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_capture_group 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_capture_group;
    __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group;
    __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat;
    __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group;
    __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat;
    __Vdly__u_idst7_idct8_core__DOT__r_collected_beat 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__r_collected_beat;
    __Vdly__u_idst7_idct8_core__DOT__r_output_beat 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__r_output_beat;
    __Vdly__u_idct2_core__DOT__r_sent = vlSelf->__PVT__u_idct2_core__DOT__r_sent;
    __Vdly__u_idct2_core__DOT__r_output_beat = vlSelf->__PVT__u_idct2_core__DOT__r_output_beat;
    __Vdly__r_input_beat_count = vlSelf->__PVT__r_input_beat_count;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_ext[0U] 
        = ((0x10000U & ((IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0xfU)) << 0x10U)) 
           | (0xffffU & (IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_ext[1U] 
        = ((0x10000U & ((IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x1fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x10U))));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_ext[2U] 
        = ((0x10000U & ((IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x2fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x20U))));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_ext[3U] 
        = ((0x10000U & ((IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x3fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x30U))));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_signed[0U] 
        = ((0x10000U & ((IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0xfU)) << 0x10U)) 
           | (0xffffU & (IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_signed[2U] 
        = ((0x10000U & ((IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x2fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x20U))));
    vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0 
        = ((0x10000U & ((IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x1fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x10U))));
    vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0 
        = ((0x10000U & ((IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x3fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                 >> 0x30U))));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial_valid 
        = ((IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair_valid));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial_valid 
        = ((IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pair_valid));
    if (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) {
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_valid 
            = ((0x1eU & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_valid) 
                         << 1U)) | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_issue));
        if ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready))) {
            __Vdly__u_idct2_core__DOT__u_idct2_base_2__DOT__r_valid 
                = ((2U & (IData)(__Vdly__u_idct2_core__DOT__u_idct2_base_2__DOT__r_valid)) 
                   | (1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_dispatch_valid)));
        }
        if ((2U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready))) {
            __Vdly__u_idct2_core__DOT__u_idct2_base_2__DOT__r_valid 
                = ((1U & (IData)(__Vdly__u_idct2_core__DOT__u_idct2_base_2__DOT__r_valid)) 
                   | (2U & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_valid) 
                            << 1U)));
        }
        if ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready))) {
            __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid 
                = ((6U & (IData)(__Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid)) 
                   | (1U & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__w_dispatch_valid) 
                            >> 1U)));
        }
        if ((2U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready))) {
            __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid 
                = ((5U & (IData)(__Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid)) 
                   | (2U & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid) 
                            << 1U)));
        }
        if ((4U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready))) {
            __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid 
                = ((3U & (IData)(__Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid)) 
                   | (4U & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid) 
                            << 1U)));
        }
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_valid 
            = ((0x1eU & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_valid) 
                         << 1U)) | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_issue));
        if ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready))) {
            __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid 
                = ((0x1eU & (IData)(__Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid)) 
                   | (1U & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__w_dispatch_valid) 
                            >> 2U)));
        }
        if ((2U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready))) {
            __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid 
                = ((0x1dU & (IData)(__Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid)) 
                   | (2U & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid) 
                            << 1U)));
        }
        if ((4U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready))) {
            __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid 
                = ((0x1bU & (IData)(__Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid)) 
                   | (4U & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid) 
                            << 1U)));
        }
        if ((8U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready))) {
            __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid 
                = ((0x17U & (IData)(__Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid)) 
                   | (8U & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid) 
                            << 1U)));
        }
        if ((0x10U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready))) {
            __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid 
                = ((0xfU & (IData)(__Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid)) 
                   | (0x10U & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid) 
                               << 1U)));
        }
        if (vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_4_input_ready) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_valid 
                = ((0x1eU & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_valid) 
                             << 1U)) | (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_4_input_valid));
        }
        if ((0U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_current_state))) {
            __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx = 0U;
        } else if (((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_issue) 
                    & (3U != (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx)))) {
            __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx)));
        }
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx 
            = __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx;
        if ((((0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)) 
              & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_valid)) 
             & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_ready))) {
            __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_capture_group = 1U;
            __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group = 0U;
            __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat = 0U;
        } else if ((((1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)) 
                     & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_valid)) 
                    & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_ready))) {
            if ((3U != (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_capture_group))) {
                __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_capture_group 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_capture_group)));
            }
        }
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_capture_group 
            = __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_capture_group;
        if (((0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state)) 
             & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_valid))) {
            __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group = 0U;
            __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat = 0U;
        } else if (((4U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state)) 
                    & (3U != (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group)))) {
            __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group)));
        }
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group 
            = __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group;
        if ((((6U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state)) 
              & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_ready)) 
             & (3U != (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat)))) {
            __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat)));
        }
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat 
            = __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat;
        if (((2U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)) 
             & (3U != (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group)))) {
            __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group 
                = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group)));
        }
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group 
            = __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group;
        if ((((4U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)) 
              & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_ready)) 
             & (7U != (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat)))) {
            __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat 
                = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat)));
        }
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat 
            = __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat;
        if (vlSelf->__PVT__u_idst7_idct8_core__DOT__w_input_fire) {
            if ((0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__r_input_beat = 1U;
                __Vdly__u_idst7_idct8_core__DOT__r_collected_beat = 0U;
                __Vdly__u_idst7_idct8_core__DOT__r_output_beat = 0U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_mode 
                    = (2U == (IData)(vlSelf->__PVT__w_active_type));
                vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size 
                    = vlSelf->__PVT__w_active_size;
            } else {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__r_input_beat 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_input_beat)));
            }
        }
        if (vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_fire) {
            __Vdly__u_idst7_idct8_core__DOT__r_collected_beat 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_collected_beat)));
        }
        vlSelf->__PVT__u_idst7_idct8_core__DOT__r_collected_beat 
            = __Vdly__u_idst7_idct8_core__DOT__r_collected_beat;
        if (vlSelf->__PVT__u_idst7_idct8_core__DOT__w_output_fire) {
            __Vdly__u_idst7_idct8_core__DOT__r_output_beat 
                = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_output_beat)));
        }
        vlSelf->__PVT__u_idst7_idct8_core__DOT__r_output_beat 
            = __Vdly__u_idst7_idct8_core__DOT__r_output_beat;
        if (vlSelf->__PVT__u_idct2_core__DOT__w_input_handshake) {
            if ((0U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state))) {
                vlSelf->__PVT__u_idct2_core__DOT__r_input_beat = 1U;
                __Vdly__u_idct2_core__DOT__r_sent = 0U;
                __Vdly__u_idct2_core__DOT__r_output_beat = 0U;
                vlSelf->__PVT__u_idct2_core__DOT__r_transform_size 
                    = vlSelf->__PVT__w_active_size;
            } else {
                vlSelf->__PVT__u_idct2_core__DOT__r_input_beat 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_input_beat)));
            }
        }
        if ((2U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state))) {
            __Vdly__u_idct2_core__DOT__r_sent = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__r_sent) 
                                                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_dispatch_fire));
        }
        vlSelf->__PVT__u_idct2_core__DOT__r_sent = __Vdly__u_idct2_core__DOT__r_sent;
        if (vlSelf->__PVT__u_idct2_core__DOT__w_output_handshake) {
            __Vdly__u_idct2_core__DOT__r_output_beat 
                = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_output_beat)));
        }
        vlSelf->__PVT__u_idct2_core__DOT__r_output_beat 
            = __Vdly__u_idct2_core__DOT__r_output_beat;
        if (((0U == (IData)(vlSelf->__PVT__r_current_state)) 
             & (IData)(vlSelf->__PVT__w_input_fire))) {
            __Vdly__r_input_beat_count = 1U;
            vlSelf->__PVT__r_transform_size = vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_size;
        } else if (((1U == (IData)(vlSelf->__PVT__r_current_state)) 
                    & (IData)(vlSelf->__PVT__w_input_fire))) {
            __Vdly__r_input_beat_count = (0xfU & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__r_input_beat_count)));
        } else if ((((2U == (IData)(vlSelf->__PVT__r_current_state)) 
                     & (IData)(vlSelf->__PVT__w_output_fire)) 
                    & (IData)(vlSelf->O_DATA_LAST))) {
            __Vdly__r_input_beat_count = 0U;
        }
        vlSelf->__PVT__r_input_beat_count = __Vdly__r_input_beat_count;
        if (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__w_output_ready) {
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_valid 
                = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_even_valid) 
                   & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_odd_valid));
        }
        if (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__w_output_ready) {
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output_valid 
                = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even_valid) 
                   & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd_valid));
        }
        if (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__w_output_ready) {
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output_valid 
                = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even_valid) 
                   & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd_valid));
        }
        if (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__w_output_ready) {
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output_valid 
                = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even_valid) 
                   & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd_valid));
        }
    } else {
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_valid = 0U;
        __Vdly__u_idct2_core__DOT__u_idct2_base_2__DOT__r_valid = 0U;
        __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_valid = 0U;
        __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_valid = 0U;
        __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx 
            = __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx;
        __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_capture_group = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_capture_group 
            = __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_capture_group;
        __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group 
            = __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group;
        __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat 
            = __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat;
        __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group 
            = __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group;
        __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat 
            = __Vdly__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__r_input_beat = 0U;
        __Vdly__u_idst7_idct8_core__DOT__r_collected_beat = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__r_collected_beat 
            = __Vdly__u_idst7_idct8_core__DOT__r_collected_beat;
        __Vdly__u_idst7_idct8_core__DOT__r_output_beat = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__r_output_beat 
            = __Vdly__u_idst7_idct8_core__DOT__r_output_beat;
        vlSelf->__PVT__u_idct2_core__DOT__r_input_beat = 0U;
        __Vdly__u_idct2_core__DOT__r_sent = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__r_sent = __Vdly__u_idct2_core__DOT__r_sent;
        __Vdly__u_idct2_core__DOT__r_output_beat = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__r_output_beat 
            = __Vdly__u_idct2_core__DOT__r_output_beat;
        __Vdly__r_input_beat_count = 0U;
        vlSelf->__PVT__r_input_beat_count = __Vdly__r_input_beat_count;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_valid = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output_valid = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_mode = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output_valid = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output_valid = 0U;
        vlSelf->__PVT__r_transform_size = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__r_transform_size = 0U;
    }
    vlSelf->__PVT__u_idct2_core__DOT__w_shift16 = (
                                                   (2U 
                                                    <= (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size) 
                                                       - (IData)(2U)))
                                                    : 0U);
    vlSelf->__PVT__u_idct2_core__DOT__w_shift32 = (
                                                   (3U 
                                                    <= (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size) 
                                                       - (IData)(3U)))
                                                    : 0U);
    vlSelf->__PVT__u_idct2_core__DOT__w_shift8 = ((1U 
                                                   <= (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size) 
                                                      - (IData)(1U)))
                                                   : 0U);
    __Vtableidx8 = vlSelf->__PVT__u_idct2_core__DOT__r_transform_size;
    vlSelf->__PVT__u_idct2_core__DOT__w_required = 
        VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_h8fcb25b0_0
        [__Vtableidx8];
    __Vtableidx9 = vlSelf->__PVT__u_idct2_core__DOT__r_transform_size;
    vlSelf->__PVT__u_idct2_core__DOT__w_last_beat = 
        VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_h9a6d1314_0
        [__Vtableidx9];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair_valid 
        = ((IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_sign_valid));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pair_valid 
        = ((IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_sign_valid));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_last = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_valid = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_input_ready = 0U;
    if (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) {
        if (((0U == (IData)(vlSelf->__PVT__r_current_state)) 
             & (IData)(vlSelf->__PVT__w_input_fire))) {
            vlSelf->__PVT__r_transform_type = vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_type;
        }
        if ((0U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_current_state))) {
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx = 0U;
        } else if (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_issue) {
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx = 1U;
        }
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_next_state;
    } else {
        vlSelf->__PVT__r_transform_type = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state = 0U;
    }
    if ((4U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state)))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk1__DOT__lane_idx = 4U;
            }
            if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk2__DOT__lane_idx = 4U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_last = 1U;
            }
        } else {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_last = 0U;
        }
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_valid 
            = (1U & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state) 
                     >> 1U));
        if ((1U & (~ ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state) 
                      >> 1U)))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_input_ready = 0U;
        }
    } else {
        if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_last = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_valid = 0U;
        }
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_input_ready 
            = (1U & (~ ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state) 
                        >> 1U)));
    }
    if (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) {
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_current_state 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_next_state;
        if (vlSelf->__PVT__u_idct2_core__DOT__w_base_out_ready) {
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_even_valid 
                = (1U & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_valid) 
                         >> 1U));
        }
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_valid 
            = __Vdly__u_idct2_core__DOT__u_idct2_base_2__DOT__r_valid;
        if (vlSelf->__PVT__u_idct2_core__DOT__w_odd4_out_ready) {
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_odd_valid 
                = (1U & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid) 
                         >> 2U));
        }
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid 
            = __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid;
        if (vlSelf->__PVT__u_idct2_core__DOT__w_odd8_out_ready) {
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd_valid 
                = (1U & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid) 
                         >> 4U));
        }
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid 
            = __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid;
        if (vlSelf->__PVT__u_idct2_core__DOT__w_combine8_even_ready) {
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even_valid 
                = vlSelf->u_idct2_core__DOT____Vcellinp__u_idct2_combine_8__I_EVEN_VALID;
        }
    } else {
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_current_state = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_even_valid = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_valid 
            = __Vdly__u_idct2_core__DOT__u_idct2_base_2__DOT__r_valid;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_odd_valid = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid 
            = __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd_valid = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid 
            = __Vdly__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even_valid = 0U;
    }
    vlSelf->u_idct2_core__DOT____Vcellinp__u_idct2_combine_8__I_EVEN_VALID 
        = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_valid) 
           & (1U <= (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size)));
    if (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) {
        if (vlSelf->__PVT__u_idct2_core__DOT__w_odd16_out_ready) {
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd_valid 
                = vlSelf->__PVT__u_idct2_core__DOT__w_odd16_valid;
        }
        if (vlSelf->__PVT__u_idct2_core__DOT__w_combine16_even_ready) {
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even_valid 
                = vlSelf->u_idct2_core__DOT____Vcellinp__u_idct2_combine_16__I_EVEN_VALID;
        }
    } else {
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd_valid = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even_valid = 0U;
    }
    vlSelf->u_idct2_core__DOT____Vcellinp__u_idct2_combine_16__I_EVEN_VALID 
        = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output_valid) 
           & (2U <= (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size)));
    if (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_next_state;
        if (vlSelf->__PVT__u_idct2_core__DOT__w_odd32_out_ready) {
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd_valid 
                = vlSelf->__PVT__u_idct2_core__DOT__w_odd32_valid;
        }
        if (vlSelf->__PVT__u_idct2_core__DOT__w_combine32_even_ready) {
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even_valid 
                = vlSelf->u_idct2_core__DOT____Vcellinp__u_idct2_combine_32__I_EVEN_VALID;
        }
    } else {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd_valid = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even_valid = 0U;
    }
    vlSelf->u_idct2_core__DOT____Vcellinp__u_idct2_combine_32__I_EVEN_VALID 
        = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output_valid) 
           & (3U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size)));
    __Vtableidx13 = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_current_state;
    vlSelf->u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_32__O_DATA_READY 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_ha981021f_0
        [__Vtableidx13];
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_valid 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_hc21201f3_0
        [__Vtableidx13];
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_issue 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_hf6164e5c_0
        [__Vtableidx13];
    vlSelf->__PVT__w_mts_output_valid = (3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state));
    vlSelf->__PVT__w_mts_output_last = ((IData)(vlSelf->__PVT__w_mts_output_valid) 
                                        & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_output_beat) 
                                           == (0xfU 
                                               & (((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size)) 
                                                  - (IData)(1U)))));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_4_output_ready = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_ready = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_ready = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_ready = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_ready 
        = ((((1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state)) 
             | (2U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))) 
            | (0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))) 
           & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_collected_beat) 
              < (0xfU & ((IData)(1U) << (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size)))));
    vlSelf->__PVT__u_idct2_core__DOT__r_current_state 
        = ((IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN)
            ? (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_next_state)
            : 0U);
    vlSelf->__PVT__w_dct2_input_ready = ((0U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state)) 
                                         | (1U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state)));
    vlSelf->__PVT__w_dct2_output_valid = (4U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state));
    vlSelf->__PVT__w_dct2_output_last = ((IData)(vlSelf->__PVT__w_dct2_output_valid) 
                                         & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__r_output_beat) 
                                            == (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_last_beat)));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_ready = 0U;
    vlSelf->__PVT__u_idct2_core__DOT__w_dispatch_valid 
        = ((- (IData)((2U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state)))) 
           & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_sent)) 
              & (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_required)));
    if (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) {
        vlSelf->__PVT__r_current_state = vlSelf->__PVT__w_next_state;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_current_state 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_next_state;
    } else {
        vlSelf->__PVT__r_current_state = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_current_state = 0U;
    }
    __Vtableidx11 = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_current_state;
    vlSelf->u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_16__O_DATA_READY 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_ha981021f_0
        [__Vtableidx11];
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_valid 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_hc21201f3_0
        [__Vtableidx11];
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_issue 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_hf6164e5c_0
        [__Vtableidx11];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_sign_valid 
        = ((IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_route_valid));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_sign_valid 
        = ((IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_route_valid));
    if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_ready 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_ready;
        } else {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_ready 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_ready;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size))) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_ready 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_ready;
    } else {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_4_output_ready 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_ready;
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_4_input_ready 
        = (1U & ((~ ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_valid) 
                     >> 4U)) | (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_4_output_ready)));
    vlSelf->O_DATA_LAST = 0U;
    vlSelf->O_DATA_VALID = 0U;
    if ((2U == (IData)(vlSelf->__PVT__r_current_state))) {
        if ((0U == (IData)(vlSelf->__PVT__r_transform_type))) {
            vlSelf->O_DATA_LAST = ((IData)(vlSelf->__PVT__w_dct2_output_valid) 
                                   & (IData)(vlSelf->__PVT__w_dct2_output_last));
            vlSelf->O_DATA_VALID = vlSelf->__PVT__w_dct2_output_valid;
        } else if (((1U == (IData)(vlSelf->__PVT__r_transform_type)) 
                    || (2U == (IData)(vlSelf->__PVT__r_transform_type)))) {
            vlSelf->O_DATA_LAST = ((IData)(vlSelf->__PVT__w_mts_output_valid) 
                                   & (IData)(vlSelf->__PVT__w_mts_output_last));
            vlSelf->O_DATA_VALID = vlSelf->__PVT__w_mts_output_valid;
        }
    }
    if ((2U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))) {
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_valid 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output_valid;
            vlSelf->__PVT__u_idct2_core__DOT__w_combine32_ready 
                = (3U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state));
        } else {
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_valid 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output_valid;
        }
    } else {
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_valid 
            = ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))
                ? (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output_valid)
                : (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_valid));
    }
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__w_output_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_combine32_ready)));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__w_combine_enable 
        = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even_valid) 
           & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd_valid) 
              & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__w_output_ready)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_route_valid 
        = ((IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_prod_valid));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_route_valid 
        = ((IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_prod_valid));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__w_combine_enable)));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_even_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__w_combine_enable)));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine16_ready = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_prod_valid 
        = ((IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pre_valid));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_prod_valid 
        = ((IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_base_valid));
    if ((2U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))) {
        vlSelf->__PVT__u_idct2_core__DOT__w_combine16_ready 
            = ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))
                ? (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_combine32_even_ready)
                : (3U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state)));
    }
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__w_output_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_combine16_ready)));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__w_combine_enable 
        = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even_valid) 
           & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd_valid) 
              & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__w_output_ready)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pre_valid 
        = ((IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) 
           && (4U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_base_valid 
        = ((IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pre_valid));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__w_combine_enable)));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine16_even_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__w_combine_enable)));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine8_ready = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pre_valid 
        = ((IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) 
           && (2U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)));
    if (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state;
    } else {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state = 0U;
    }
    if ((2U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))) {
        vlSelf->__PVT__u_idct2_core__DOT__w_combine8_ready 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_even_ready;
    } else if ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))) {
        vlSelf->__PVT__u_idct2_core__DOT__w_combine8_ready 
            = (3U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state));
    }
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__w_output_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_combine8_ready)));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__w_combine_enable 
        = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even_valid) 
           & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd_valid) 
              & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__w_output_ready)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_last = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_valid = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_ready = 0U;
    if ((4U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_last 
            = ((1U & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state) 
                      >> 1U)) && ((1U & (~ (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) 
                                  && (3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat))));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_valid 
            = ((1U & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state) 
                      >> 1U)) && (1U & (~ (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))));
    }
    if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_last 
                = (1U & ((4U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)) 
                         & (7U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat))));
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_valid 
                = (1U & (4U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)));
        } else {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_last 
                = (1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_last));
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_valid 
                = (1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_valid));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size))) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_last 
            = (1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_last));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_valid 
            = (1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_valid));
    } else {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_last 
            = (1U & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_valid) 
                     >> 4U));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_valid 
            = (1U & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_valid) 
                     >> 4U));
    }
    if ((4U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_ready = 0U;
            }
        } else {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_ready = 0U;
        }
    } else {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_ready = 1U;
    }
    vlSelf->__PVT__u_idct2_core__DOT__w_odd8_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__w_combine_enable)));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine8_even_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__w_combine_enable)));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine4_ready 
        = ((2U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))
            ? (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_combine8_even_ready)
            : ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))
                ? (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_combine8_even_ready)
                : (3U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state))));
    if ((4U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk1__DOT__lane_idx = 4U;
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_ready 
        = ((0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)) 
           | (1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__w_output_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_combine4_ready)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_fire 
        = ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_ready) 
           & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_valid));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__w_combine_enable 
        = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_even_valid) 
           & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_odd_valid) 
              & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__w_output_ready)));
    vlSelf->__PVT__u_idct2_core__DOT__w_base_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_even_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__w_combine_enable)));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd4_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_odd_valid)) 
                 | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__w_combine_enable)));
}

extern const VlUnpacked<CData/*2:0*/, 32> VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_h5a5172de_0;

VL_INLINE_OPT void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__4(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__4\n"); );
    // Init
    CData/*0:0*/ u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0;
    u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0 = 0;
    CData/*4:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    // Body
    if ((0U == (IData)(vlSelf->__PVT__r_current_state))) {
        vlSelf->__PVT__w_active_size = vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_size;
        vlSelf->__PVT__w_active_type = vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_type;
    } else {
        vlSelf->__PVT__w_active_size = vlSelf->__PVT__r_transform_size;
        vlSelf->__PVT__w_active_type = vlSelf->__PVT__r_transform_type;
    }
    if ((0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size 
            = vlSelf->__PVT__w_active_size;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_mode 
            = (2U == (IData)(vlSelf->__PVT__w_active_type));
    } else {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_mode 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_mode;
    }
    vlSelf->__VdfgTmp_hc516f753__0 = ((1U == (IData)(vlSelf->__PVT__w_active_type)) 
                                      | (2U == (IData)(vlSelf->__PVT__w_active_type)));
    vlSelf->__PVT__w_mts_input_ready = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_selected_input_ready = 0U;
    if (((0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state)) 
         | (1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state)))) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_selected_input_ready 
            = ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size))
                ? ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size))
                    ? (((1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state)) 
                        & (4U <= (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_input_beat))) 
                       | (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_ready))
                    : (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_ready))
                : ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size))
                    ? (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_input_ready)
                    : (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_4_input_ready)));
        vlSelf->__PVT__w_mts_input_ready = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_selected_input_ready;
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_adapted_coefficients[0U] 
        = (IData)((((QData)((IData)(((0x10000U & ((IData)(
                                                          (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                                           >> 0x2fU)) 
                                                  << 0x10U)) 
                                     | (0xffffU & (IData)(
                                                          (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                                           >> 0x20U)))))) 
                    << 0x22U) | (((QData)((IData)((0x1ffffU 
                                                   & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_mode)
                                                       ? 
                                                      (- vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0)
                                                       : vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0)))) 
                                  << 0x11U) | (QData)((IData)(
                                                              ((0x10000U 
                                                                & ((IData)(
                                                                           (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                                                            >> 0xfU)) 
                                                                   << 0x10U)) 
                                                               | (0xffffU 
                                                                  & (IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data))))))));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_adapted_coefficients[1U] 
        = ((((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_mode)
              ? (- vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0)
              : vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0) 
            << 0x13U) | (IData)(((((QData)((IData)(
                                                   ((0x10000U 
                                                     & ((IData)(
                                                                (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                                                 >> 0x2fU)) 
                                                        << 0x10U)) 
                                                    | (0xffffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                                                  >> 0x20U)))))) 
                                   << 0x22U) | (((QData)((IData)(
                                                                 (0x1ffffU 
                                                                  & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_mode)
                                                                      ? 
                                                                     (- vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0)
                                                                      : vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0)))) 
                                                 << 0x11U) 
                                                | (QData)((IData)(
                                                                  ((0x10000U 
                                                                    & ((IData)(
                                                                               (vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
                                                                                >> 0xfU)) 
                                                                       << 0x10U)) 
                                                                   | (0xffffU 
                                                                      & (IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data))))))) 
                                 >> 0x20U)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_adapted_coefficients[2U] 
        = (0xfU & (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_mode)
                     ? (- vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0)
                     : vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0) 
                   >> 0xdU));
    if (vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_mode) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_signed[1U] 
            = (0x1ffffU & (- vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_signed[3U] 
            = (0x1ffffU & (- vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0));
    } else {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_signed[1U] 
            = (0x1ffffU & vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0);
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_coefficient_signed[3U] 
            = (0x1ffffU & vlSelf->u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0);
    }
    vlSelf->__PVT__w_input_enable = (((0U == (IData)(vlSelf->__PVT__r_current_state)) 
                                      | (1U == (IData)(vlSelf->__PVT__r_current_state))) 
                                     & (((IData)(vlSelf->__PVT__r_input_beat_count) 
                                         < (0xfU & 
                                            ((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__w_active_size)))) 
                                        & ((0U == (IData)(vlSelf->__PVT__w_active_type)) 
                                           | (IData)(vlSelf->__VdfgTmp_hc516f753__0))));
    if (vlSelf->__PVT__w_input_enable) {
        vlSelf->__VdfgTmp_h1c9e6317__0 = vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_in_valid;
        vlSelf->I_DATA_READY = 0U;
        vlSelf->I_DATA_READY = ((0U == (IData)(vlSelf->__PVT__w_active_type))
                                 ? (IData)(vlSelf->__PVT__w_dct2_input_ready)
                                 : (((1U == (IData)(vlSelf->__PVT__w_active_type)) 
                                     || (2U == (IData)(vlSelf->__PVT__w_active_type))) 
                                    && (IData)(vlSelf->__PVT__w_mts_input_ready)));
    } else {
        vlSelf->__VdfgTmp_h1c9e6317__0 = 0U;
        vlSelf->I_DATA_READY = 0U;
    }
    vlSelf->__PVT__u_idct2_core__DOT__w_input_handshake 
        = ((IData)(vlSelf->__PVT__w_dct2_input_ready) 
           & ((IData)(vlSelf->__VdfgTmp_h1c9e6317__0) 
              & (0U == (IData)(vlSelf->__PVT__w_active_type))));
    vlSelf->__PVT__w_mts_input_valid = ((IData)(vlSelf->__VdfgTmp_h1c9e6317__0) 
                                        & (IData)(vlSelf->__VdfgTmp_hc516f753__0));
    vlSelf->__PVT__w_input_fire = ((IData)(vlSelf->I_DATA_READY) 
                                   & (IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_in_valid));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_valid 
        = ((IData)(vlSelf->__PVT__w_mts_input_valid) 
           & ((3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size)) 
              & ((0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state)) 
                 | ((1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state)) 
                    & (4U > (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_input_beat))))));
    u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0 
        = ((IData)(vlSelf->__PVT__w_mts_input_valid) 
           & ((0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state)) 
              | (1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_input_fire 
        = ((IData)(vlSelf->__PVT__w_mts_input_valid) 
           & (IData)(vlSelf->__PVT__w_mts_input_ready));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_4_input_valid 
        = ((IData)(u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0) 
           & (0U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_input_valid 
        = ((IData)(u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0) 
           & (1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_valid 
        = ((IData)(u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0) 
           & (2U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size)));
    __Vtableidx14 = (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_input_valid) 
                      << 4U) | (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_ready) 
                                 << 3U) | (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_next_state 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_h5a5172de_0
        [__Vtableidx14];
}

extern const VlWide<28>/*895:0*/ VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0;
extern const VlUnpacked<CData/*1:0*/, 256> VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_hc34802d6_0;
extern const VlUnpacked<CData/*1:0*/, 128> VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_hc513c410_0;

VL_INLINE_OPT void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_comb__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__1(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_comb__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__1\n"); );
    // Init
    IData/*27:0*/ u_idct2_core__DOT____Vlvbound_h3393d105__0;
    u_idct2_core__DOT____Vlvbound_h3393d105__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0;
    u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h9c90b00e__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h9c90b00e__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h998c785a__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h998c785a__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h8291f1ca__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h8291f1ca__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h5e3e9e20__0;
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h5e3e9e20__0 = 0;
    CData/*6:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*7:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<8>/*255:0*/ __Vtemp_12;
    // Body
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx)))]));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx))))]));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx))))]));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx))))]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[3U] = 0U;
    if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
                [0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
                [0xdU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
                [0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
                [0xfU];
        } else {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
                [8U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
                [9U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
                [0xaU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
                [0xbU];
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group))) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
            [4U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
            [5U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
            [6U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
            [7U];
    } else {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
            [0U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
            [1U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
            [2U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
            [3U];
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample[0U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input
        [(0xfU & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group) 
                  << 2U))];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample[1U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input
        [(0xfU & ((IData)(1U) + ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group) 
                                 << 2U)))];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample[2U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input
        [(0xfU & ((IData)(2U) + ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group) 
                                 << 2U)))];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample[3U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input
        [(0xfU & ((IData)(3U) + ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group) 
                                 << 2U)))];
    vlSelf->__PVT__w_dct2_output_data[0U] = 0U;
    vlSelf->__PVT__w_dct2_output_data[1U] = 0U;
    vlSelf->__PVT__w_dct2_output_data[2U] = 0U;
    vlSelf->__PVT__w_dct2_output_data[3U] = 0U;
    u_idct2_core__DOT____Vlvbound_h3393d105__0 = vlSelf->__PVT__u_idct2_core__DOT__r_output_vector
        [(0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_output_beat), 2U))];
    vlSelf->__PVT__w_dct2_output_data[0U] = ((0xf0000000U 
                                              & vlSelf->__PVT__w_dct2_output_data[0U]) 
                                             | u_idct2_core__DOT____Vlvbound_h3393d105__0);
    u_idct2_core__DOT____Vlvbound_h3393d105__0 = vlSelf->__PVT__u_idct2_core__DOT__r_output_vector
        [(0x1fU & ((IData)(1U) + VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_output_beat), 2U)))];
    vlSelf->__PVT__w_dct2_output_data[0U] = ((0xfffffffU 
                                              & vlSelf->__PVT__w_dct2_output_data[0U]) 
                                             | (u_idct2_core__DOT____Vlvbound_h3393d105__0 
                                                << 0x1cU));
    vlSelf->__PVT__w_dct2_output_data[1U] = ((0xff000000U 
                                              & vlSelf->__PVT__w_dct2_output_data[1U]) 
                                             | (u_idct2_core__DOT____Vlvbound_h3393d105__0 
                                                >> 4U));
    u_idct2_core__DOT____Vlvbound_h3393d105__0 = vlSelf->__PVT__u_idct2_core__DOT__r_output_vector
        [(0x1fU & ((IData)(2U) + VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_output_beat), 2U)))];
    vlSelf->__PVT__w_dct2_output_data[1U] = ((0xffffffU 
                                              & vlSelf->__PVT__w_dct2_output_data[1U]) 
                                             | (u_idct2_core__DOT____Vlvbound_h3393d105__0 
                                                << 0x18U));
    vlSelf->__PVT__w_dct2_output_data[2U] = ((0xfff00000U 
                                              & vlSelf->__PVT__w_dct2_output_data[2U]) 
                                             | (u_idct2_core__DOT____Vlvbound_h3393d105__0 
                                                >> 8U));
    u_idct2_core__DOT____Vlvbound_h3393d105__0 = vlSelf->__PVT__u_idct2_core__DOT__r_output_vector
        [(0x1fU & ((IData)(3U) + VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_output_beat), 2U)))];
    vlSelf->__PVT__w_dct2_output_data[2U] = ((0xfffffU 
                                              & vlSelf->__PVT__w_dct2_output_data[2U]) 
                                             | (u_idct2_core__DOT____Vlvbound_h3393d105__0 
                                                << 0x14U));
    vlSelf->__PVT__w_dct2_output_data[3U] = (0xffffU 
                                             & (u_idct2_core__DOT____Vlvbound_h3393d105__0 
                                                >> 0xcU));
    vlSelf->__PVT__w_mts_output_data[0U] = 0U;
    vlSelf->__PVT__w_mts_output_data[1U] = 0U;
    vlSelf->__PVT__w_mts_output_data[2U] = 0U;
    vlSelf->__PVT__w_mts_output_data[3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index[0U] 
        = ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_output_beat) 
           << 2U);
    if (vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_mode) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index[0U] 
            = (0x3fU & ((((IData)(4U) << (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size)) 
                         - (IData)(1U)) - vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index
                        [0U]));
    }
    u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__r_result_vector
        [(0x1fU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index
          [0U])];
    vlSelf->__PVT__w_mts_output_data[0U] = ((0xf0000000U 
                                             & vlSelf->__PVT__w_mts_output_data[0U]) 
                                            | u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index[1U] 
        = (0x3fU & ((IData)(1U) + ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_output_beat) 
                                   << 2U)));
    if (vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_mode) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index[1U] 
            = (0x3fU & ((((IData)(4U) << (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size)) 
                         - (IData)(1U)) - vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index
                        [1U]));
    }
    u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__r_result_vector
        [(0x1fU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index
          [1U])];
    vlSelf->__PVT__w_mts_output_data[0U] = ((0xfffffffU 
                                             & vlSelf->__PVT__w_mts_output_data[0U]) 
                                            | (u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0 
                                               << 0x1cU));
    vlSelf->__PVT__w_mts_output_data[1U] = ((0xff000000U 
                                             & vlSelf->__PVT__w_mts_output_data[1U]) 
                                            | (u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0 
                                               >> 4U));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index[2U] 
        = (0x3fU & ((IData)(2U) + ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_output_beat) 
                                   << 2U)));
    if (vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_mode) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index[2U] 
            = (0x3fU & ((((IData)(4U) << (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size)) 
                         - (IData)(1U)) - vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index
                        [2U]));
    }
    u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__r_result_vector
        [(0x1fU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index
          [2U])];
    vlSelf->__PVT__w_mts_output_data[1U] = ((0xffffffU 
                                             & vlSelf->__PVT__w_mts_output_data[1U]) 
                                            | (u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0 
                                               << 0x18U));
    vlSelf->__PVT__w_mts_output_data[2U] = ((0xfff00000U 
                                             & vlSelf->__PVT__w_mts_output_data[2U]) 
                                            | (u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0 
                                               >> 8U));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index[3U] 
        = (0x3fU & ((IData)(3U) + ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_output_beat) 
                                   << 2U)));
    if (vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_mode) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index[3U] 
            = (0x3fU & ((((IData)(4U) << (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size)) 
                         - (IData)(1U)) - vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index
                        [3U]));
    }
    u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__r_result_vector
        [(0x1fU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index
          [3U])];
    vlSelf->__PVT__w_mts_output_data[2U] = ((0xfffffU 
                                             & vlSelf->__PVT__w_mts_output_data[2U]) 
                                            | (u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0 
                                               << 0x14U));
    vlSelf->__PVT__w_mts_output_data[3U] = (0xffffU 
                                            & (u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0 
                                               >> 0xcU));
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[1U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[1U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[2U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[2U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[3U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[3U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[4U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[4U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[5U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[5U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[6U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[6U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[7U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[7U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[8U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[8U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[9U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[9U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xaU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0xaU];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xbU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0xbU];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xcU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0xcU];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xdU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0xdU];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xeU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0xeU];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xfU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0xfU];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x10U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x10U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x11U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x11U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x12U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x12U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x13U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x13U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x14U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x14U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x15U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x15U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x16U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x16U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x17U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x17U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x18U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x18U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x19U] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x19U];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x1aU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x1aU];
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x1bU] 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_hab12d6e6_0[0x1bU];
    if ((2U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))) {
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[1U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[1U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[2U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[2U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[3U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[3U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[4U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[4U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[5U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[5U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[6U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[6U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[7U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[7U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[8U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[8U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[9U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[9U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xaU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xaU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xbU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xbU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xcU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xcU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xdU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xdU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xeU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xeU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xfU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xfU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x10U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x10U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x11U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x11U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x12U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x12U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x13U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x13U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x14U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x14U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x15U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x15U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x16U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x16U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x17U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x17U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x18U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x18U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x19U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x19U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x1aU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x1aU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0x1bU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x1bU];
        } else {
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[0U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[1U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[1U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[2U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[2U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[3U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[3U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[4U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[4U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[5U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[5U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[6U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[6U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[7U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[7U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[8U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[8U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[9U] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[9U];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xaU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[0xaU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xbU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[0xbU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xcU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[0xcU];
            vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0xdU] 
                = vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[0xdU];
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))) {
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[0U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[1U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[1U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[2U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[2U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[3U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[3U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[4U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[4U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[5U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[5U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[6U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[6U];
    } else {
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[0U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine4_data[0U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[1U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine4_data[1U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[2U] 
            = vlSelf->__PVT__u_idct2_core__DOT__w_combine4_data[2U];
        vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[3U] 
            = ((0xffff0000U & vlSelf->__PVT__u_idct2_core__DOT__w_collect_data[3U]) 
               | vlSelf->__PVT__u_idct2_core__DOT__w_combine4_data[3U]);
    }
    vlSelf->__VdfgTmp_h5c914d2e__0 = vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
        [(0x1fU & ((IData)(2U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size)))];
    vlSelf->__VdfgTmp_h5c94b798__0 = vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
        [(0x1fU & ((IData)(3U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size)))];
    vlSelf->__VdfgTmp_h5d53bd5a__0 = vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
        [(0x1fU & ((IData)(1U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size)))];
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__0__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx)))]));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__1__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & ((IData)(1U) 
                                              + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx))))]));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__2__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & ((IData)(2U) 
                                              + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx))))]));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__3__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & ((IData)(3U) 
                                              + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx))))]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[3U] = 0U;
    if ((4U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state))) {
                vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result
                    [4U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U] 
                    = ((0xf0000000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U]) 
                       | vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_ha9c1f601__0);
                vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result
                    [5U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U] 
                    = ((0xfffffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U]) 
                       | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                          << 0x1cU));
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U] 
                    = ((0xff000000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U]) 
                       | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                          >> 4U));
                vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result
                    [6U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U] 
                    = ((0xffffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U]) 
                       | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                          << 0x18U));
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U] 
                    = ((0xfff00000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U]) 
                       | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                          >> 8U));
                vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result
                    [7U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U] 
                    = ((0xfffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U]) 
                       | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                          << 0x14U));
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[3U] 
                    = (0xffffU & (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                                  >> 0xcU));
            } else {
                vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result
                    [0U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U] 
                    = ((0xf0000000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U]) 
                       | vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_haab68f21__0);
                vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result
                    [1U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U] 
                    = ((0xfffffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U]) 
                       | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                          << 0x1cU));
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U] 
                    = ((0xff000000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U]) 
                       | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                          >> 4U));
                vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result
                    [2U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U] 
                    = ((0xffffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U]) 
                       | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                          << 0x18U));
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U] 
                    = ((0xfff00000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U]) 
                       | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                          >> 8U));
                vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result
                    [3U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U] 
                    = ((0xfffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U]) 
                       | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                          << 0x14U));
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[3U] 
                    = (0xffffU & (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                                  >> 0xcU));
            }
        } else {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[3U] = 0U;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state))) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[3U] = 0U;
    }
    __Vtemp_6[1U] = (((0xffffU & vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                       [(0x1fU & ((IData)(5U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]) 
                      | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                         [(0x1fU & ((IData)(3U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                         >> 0x10U)) | ((IData)((((QData)((IData)(
                                                                 ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                   [
                                                                   (0x1fU 
                                                                    & ((IData)(0xdU) 
                                                                       << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                                   << 0x10U) 
                                                                  | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                  [
                                                                  (0x1fU 
                                                                   & ((IData)(0xbU) 
                                                                      << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                    [
                                                                    (0x1fU 
                                                                     & ((IData)(9U) 
                                                                        << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                                    << 0x10U) 
                                                                   | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                   [
                                                                   (0x1fU 
                                                                    & ((IData)(7U) 
                                                                       << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]))))) 
                                       << 0x10U));
    __Vtemp_6[2U] = (((IData)((((QData)((IData)(((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                  [
                                                  (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                  << 0x10U) 
                                                 | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                 [(0x1fU 
                                                   & ((IData)(0xbU) 
                                                      << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                              [
                                                              (0x1fU 
                                                               & ((IData)(9U) 
                                                                  << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                              << 0x10U) 
                                                             | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                             [
                                                             (0x1fU 
                                                              & ((IData)(7U) 
                                                                 << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]))))) 
                      >> 0x10U) | ((IData)(((((QData)((IData)(
                                                              ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                [
                                                                (0x1fU 
                                                                 & ((IData)(0xdU) 
                                                                    << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                                << 0x10U) 
                                                               | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                               [
                                                               (0x1fU 
                                                                & ((IData)(0xbU) 
                                                                   << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                 [
                                                                 (0x1fU 
                                                                  & ((IData)(9U) 
                                                                     << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                                 << 0x10U) 
                                                                | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                [
                                                                (0x1fU 
                                                                 & ((IData)(7U) 
                                                                    << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))])))) 
                                            >> 0x20U)) 
                                   << 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_input[0U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
            [(0x1fU & ((IData)(3U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
            << 0x10U) | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
           [(0x1fU & ((IData)(1U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]);
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_input[1U] 
        = __Vtemp_6[1U];
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_input[2U] 
        = __Vtemp_6[2U];
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_input[3U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
            [(0x1fU & ((IData)(0xfU) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                      [
                                                      (0x1fU 
                                                       & ((IData)(0xdU) 
                                                          << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                      << 0x10U) 
                                                     | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                     [
                                                     (0x1fU 
                                                      & ((IData)(0xbU) 
                                                         << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))]))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                  [
                                                                  (0x1fU 
                                                                   & ((IData)(9U) 
                                                                      << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))] 
                                                                  << 0x10U) 
                                                                 | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                 [
                                                                 (0x1fU 
                                                                  & ((IData)(7U) 
                                                                     << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift16)))])))) 
                                  >> 0x20U)) >> 0x10U));
    __Vtemp_12[5U] = (((0xffffU & vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                        [(0x1fU & ((IData)(0x15U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]) 
                       | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                          [(0x1fU & ((IData)(0x13U) 
                                     << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                          >> 0x10U)) | ((IData)((((QData)((IData)(
                                                                  ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                    [
                                                                    (0x1fU 
                                                                     & ((IData)(0x1dU) 
                                                                        << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                                    << 0x10U) 
                                                                   | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                   [
                                                                   (0x1fU 
                                                                    & ((IData)(0x1bU) 
                                                                       << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                     [
                                                                     (0x1fU 
                                                                      & ((IData)(0x19U) 
                                                                         << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                                     << 0x10U) 
                                                                    | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                    [
                                                                    (0x1fU 
                                                                     & ((IData)(0x17U) 
                                                                        << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]))))) 
                                        << 0x10U));
    __Vtemp_12[6U] = (((IData)((((QData)((IData)(((
                                                   vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                   [
                                                   (0x1fU 
                                                    & ((IData)(0x1dU) 
                                                       << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                   << 0x10U) 
                                                  | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                  [
                                                  (0x1fU 
                                                   & ((IData)(0x1bU) 
                                                      << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                               [
                                                               (0x1fU 
                                                                & ((IData)(0x19U) 
                                                                   << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                               << 0x10U) 
                                                              | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                              [
                                                              (0x1fU 
                                                               & ((IData)(0x17U) 
                                                                  << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]))))) 
                       >> 0x10U) | ((IData)(((((QData)((IData)(
                                                               ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                 [
                                                                 (0x1fU 
                                                                  & ((IData)(0x1dU) 
                                                                     << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                                 << 0x10U) 
                                                                | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                [
                                                                (0x1fU 
                                                                 & ((IData)(0x1bU) 
                                                                    << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                  [
                                                                  (0x1fU 
                                                                   & ((IData)(0x19U) 
                                                                      << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                                  << 0x10U) 
                                                                 | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                 [
                                                                 (0x1fU 
                                                                  & ((IData)(0x17U) 
                                                                     << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))])))) 
                                             >> 0x20U)) 
                                    << 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[0U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
            [(0x1fU & ((IData)(3U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
            << 0x10U) | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
           [(0x1fU & ((IData)(1U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]);
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[1U] 
        = (((0xffffU & vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
             [(0x1fU & ((IData)(5U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]) 
            | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
               [(0x1fU & ((IData)(3U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
               >> 0x10U)) | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                             [(0x1fU & ((IData)(7U) 
                                        << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                             << 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[2U] 
        = (((0xffffU & vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
             [(0x1fU & ((IData)(9U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]) 
            | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
               [(0x1fU & ((IData)(7U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
               >> 0x10U)) | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                             [(0x1fU & ((IData)(0xbU) 
                                        << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                             << 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[3U] 
        = (((0xffffU & vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
             [(0x1fU & ((IData)(0xdU) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]) 
            | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
               [(0x1fU & ((IData)(0xbU) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
               >> 0x10U)) | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                             [(0x1fU & ((IData)(0xfU) 
                                        << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                             << 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[4U] 
        = (((0xffffU & vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
             [(0x1fU & ((IData)(0x11U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]) 
            | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
               [(0x1fU & ((IData)(0xfU) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
               >> 0x10U)) | (vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                             [(0x1fU & ((IData)(0x13U) 
                                        << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                             << 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[5U] 
        = __Vtemp_12[5U];
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[6U] 
        = __Vtemp_12[6U];
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_input[7U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
            [(0x1fU & ((IData)(0x1fU) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                      [
                                                      (0x1fU 
                                                       & ((IData)(0x1dU) 
                                                          << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                      << 0x10U) 
                                                     | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                     [
                                                     (0x1fU 
                                                      & ((IData)(0x1bU) 
                                                         << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))]))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                  [
                                                                  (0x1fU 
                                                                   & ((IData)(0x19U) 
                                                                      << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))] 
                                                                  << 0x10U) 
                                                                 | vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
                                                                 [
                                                                 (0x1fU 
                                                                  & ((IData)(0x17U) 
                                                                     << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift32)))])))) 
                                  >> 0x20U)) >> 0x10U));
    vlSelf->__VdfgTmp_hac367811__0 = vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
        [(0x1fU & ((IData)(7U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift8)))];
    vlSelf->__VdfgTmp_hafacefe0__0 = vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
        [(0x1fU & ((IData)(5U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift8)))];
    vlSelf->__VdfgTmp_hafd47e8e__0 = vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
        [(0x1fU & ((IData)(3U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift8)))];
    vlSelf->__VdfgTmp_haf857428__0 = vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
        [(0x1fU & ((IData)(1U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_shift8)))];
    __Vtableidx12 = (((IData)(vlSelf->u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_32__O_DATA_READY) 
                      << 7U) | ((0x40U & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__w_dispatch_valid) 
                                          << 2U)) | 
                                (((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx) 
                                  << 4U) | ((0x7ffffff8U 
                                             & (((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_valid) 
                                                 >> 1U) 
                                                & ((3U 
                                                    == 
                                                    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group
                                                    [4U]) 
                                                   << 3U))) 
                                            | (((IData)(vlSelf->__PVT__u_idct2_core__DOT__w_odd32_out_ready) 
                                                << 2U) 
                                               | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_current_state))))));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_next_state 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_hc34802d6_0
        [__Vtableidx12];
    __Vtableidx10 = (((IData)(vlSelf->u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_16__O_DATA_READY) 
                      << 6U) | ((0x20U & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__w_dispatch_valid) 
                                          << 2U)) | 
                                (((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx) 
                                  << 4U) | ((0x7ffffff8U 
                                             & (((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_valid) 
                                                 >> 1U) 
                                                & (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group
                                                   [4U] 
                                                   << 3U))) 
                                            | (((IData)(vlSelf->__PVT__u_idct2_core__DOT__w_odd16_out_ready) 
                                                << 2U) 
                                               | (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_current_state))))));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_next_state 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_hc513c410_0
        [__Vtableidx10];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[3U] = 0U;
    if ((4U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
        vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT____Vlvbound_haab68f21__0 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc
            [((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat) 
              << 2U)];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[0U] 
            = ((0xf0000000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[0U]) 
               | vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT____Vlvbound_haab68f21__0);
        vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT____Vlvbound_haab68f21__0 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc
            [(0x1fU & ((IData)(1U) + ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat) 
                                      << 2U)))];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[0U] 
            = ((0xfffffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[0U]) 
               | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT____Vlvbound_haab68f21__0 
                  << 0x1cU));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[1U] 
            = ((0xff000000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[1U]) 
               | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT____Vlvbound_haab68f21__0 
                  >> 4U));
        vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT____Vlvbound_haab68f21__0 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc
            [(0x1fU & ((IData)(2U) + ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat) 
                                      << 2U)))];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[1U] 
            = ((0xffffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[1U]) 
               | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT____Vlvbound_haab68f21__0 
                  << 0x18U));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[2U] 
            = ((0xfff00000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[2U]) 
               | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT____Vlvbound_haab68f21__0 
                  >> 8U));
        vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT____Vlvbound_haab68f21__0 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc
            [(0x1fU & ((IData)(3U) + ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat) 
                                      << 2U)))];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[2U] 
            = ((0xfffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[2U]) 
               | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT____Vlvbound_haab68f21__0 
                  << 0x14U));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[3U] 
            = (0xffffU & (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT____Vlvbound_haab68f21__0 
                          >> 0xcU));
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state;
    if ((4U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 0U;
        } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 0U;
        } else if ((((4U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)) 
                     & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_ready)) 
                    & (7U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat)))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
            if (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial_valid) 
                 & (3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial_group)))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 4U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
        if ((((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_valid) 
              & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_ready)) 
             & (3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_capture_group)))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 2U;
        }
    } else if (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_valid) 
                & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_input_ready))) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 1U;
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state;
    if ((4U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[0U] = 0U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[1U] = 0U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U] = 0U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[3U] = 0U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 0U;
            } else {
                if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat))) {
                    if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat))) {
                        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[0U] 
                            = (IData)((((QData)((IData)(
                                                        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                        [0xdU])) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                                    [0xcU]))));
                        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[1U] 
                            = ((vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                [0xeU] << 0x18U) | (IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                                              [0xdU])) 
                                                              << 0x1cU) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                                               [0xcU]))) 
                                                            >> 0x20U)));
                        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U] 
                            = ((0xfff00000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U]) 
                               | (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                  [0xeU] >> 8U));
                        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U] 
                            = ((0xfffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U]) 
                               | (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                  [0xfU] << 0x14U));
                        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[3U] 
                            = (0xffffU & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                          [0xfU] >> 0xcU));
                    } else {
                        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[0U] 
                            = (IData)((((QData)((IData)(
                                                        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                        [9U])) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                                    [8U]))));
                        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[1U] 
                            = ((vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                [0xaU] << 0x18U) | (IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                                              [9U])) 
                                                              << 0x1cU) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                                               [8U]))) 
                                                            >> 0x20U)));
                        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U] 
                            = ((0xfff00000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U]) 
                               | (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                  [0xaU] >> 8U));
                        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U] 
                            = ((0xfffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U]) 
                               | (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                  [0xbU] << 0x14U));
                        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[3U] 
                            = (0xffffU & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                          [0xbU] >> 0xcU));
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat))) {
                    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[0U] 
                        = (IData)((((QData)((IData)(
                                                    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                    [5U])) 
                                    << 0x1cU) | (QData)((IData)(
                                                                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                                [4U]))));
                    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[1U] 
                        = ((vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                            [6U] << 0x18U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                                        [5U])) 
                                                        << 0x1cU) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                                         [4U]))) 
                                                      >> 0x20U)));
                    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U] 
                        = ((0xfff00000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U]) 
                           | (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                              [6U] >> 8U));
                    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U] 
                        = ((0xfffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U]) 
                           | (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                              [7U] << 0x14U));
                    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[3U] 
                        = (0xffffU & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                      [7U] >> 0xcU));
                } else {
                    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[0U] 
                        = (IData)((((QData)((IData)(
                                                    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                    [1U])) 
                                    << 0x1cU) | (QData)((IData)(
                                                                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                                [0U]))));
                    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[1U] 
                        = ((vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                            [2U] << 0x18U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                                        [1U])) 
                                                        << 0x1cU) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                                         [0U]))) 
                                                      >> 0x20U)));
                    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U] 
                        = ((0xfff00000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U]) 
                           | (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                              [2U] >> 8U));
                    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U] 
                        = ((0xfffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U]) 
                           | (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                              [3U] << 0x14U));
                    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[3U] 
                        = (0xffffU & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                      [3U] >> 0xcU));
                }
                if (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_ready) 
                     & (3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat)))) {
                    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 0U;
                }
            }
        } else {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[0U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[1U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[3U] = 0U;
            if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
                if (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial_valid) 
                     & (3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial_group)))) {
                    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 6U;
                }
            } else if ((3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 5U;
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
            if (vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_valid) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 4U;
            }
        } else if (vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_valid) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
        if (vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_valid) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 2U;
        }
    } else if (vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_input_valid) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 1U;
    }
    vlSelf->__PVT__w_output_fire = ((IData)(vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_raw_ready) 
                                    & (IData)(vlSelf->O_DATA_VALID));
    vlSelf->__PVT__w_mts_output_ready = 0U;
    vlSelf->__PVT__w_dct2_output_ready = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[0U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [0U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [0U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[1U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [1U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [1U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[2U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [2U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [2U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[3U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [3U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [3U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h9c90b00e__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [0U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [0U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h998c785a__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [1U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [1U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h8291f1ca__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [2U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [2U]);
    u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h5e3e9e20__0 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
                                            [3U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample
           [3U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[0U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
                                            [0U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
           [0U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[1U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
                                            [1U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
           [1U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[2U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
                                            [2U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
           [2U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[3U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
                                            [3U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample
           [3U]);
    vlSelf->O_DATA[0U] = 0U;
    vlSelf->O_DATA[1U] = 0U;
    vlSelf->O_DATA[2U] = 0U;
    vlSelf->O_DATA[3U] = 0U;
    if ((2U == (IData)(vlSelf->__PVT__r_current_state))) {
        if ((0U != (IData)(vlSelf->__PVT__r_transform_type))) {
            if (((1U == (IData)(vlSelf->__PVT__r_transform_type)) 
                 || (2U == (IData)(vlSelf->__PVT__r_transform_type)))) {
                vlSelf->__PVT__w_mts_output_ready = vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_raw_ready;
            }
        }
        if ((0U == (IData)(vlSelf->__PVT__r_transform_type))) {
            vlSelf->__PVT__w_dct2_output_ready = vlSymsp->TOP.TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_raw_ready;
            vlSelf->O_DATA[0U] = vlSelf->__PVT__w_dct2_output_data[0U];
            vlSelf->O_DATA[1U] = vlSelf->__PVT__w_dct2_output_data[1U];
            vlSelf->O_DATA[2U] = vlSelf->__PVT__w_dct2_output_data[2U];
            vlSelf->O_DATA[3U] = vlSelf->__PVT__w_dct2_output_data[3U];
        } else if (((1U == (IData)(vlSelf->__PVT__r_transform_type)) 
                    || (2U == (IData)(vlSelf->__PVT__r_transform_type)))) {
            vlSelf->O_DATA[0U] = vlSelf->__PVT__w_mts_output_data[0U];
            vlSelf->O_DATA[1U] = vlSelf->__PVT__w_mts_output_data[1U];
            vlSelf->O_DATA[2U] = vlSelf->__PVT__w_mts_output_data[2U];
            vlSelf->O_DATA[3U] = vlSelf->__PVT__w_mts_output_data[3U];
        } else {
            vlSelf->O_DATA[0U] = 0U;
            vlSelf->O_DATA[1U] = 0U;
            vlSelf->O_DATA[2U] = 0U;
            vlSelf->O_DATA[3U] = 0U;
        }
    }
    if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[0U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[1U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[2U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[3U];
        } else {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[0U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[1U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[3U];
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size))) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[3U];
    } else {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[0U] 
            = (IData)((((QData)((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                        [1U])) << 0x1cU) 
                       | (QData)((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                         [0U]))));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[1U] 
            = ((vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                [2U] << 0x18U) | (IData)(((((QData)((IData)(
                                                            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                                            [1U])) 
                                            << 0x1cU) 
                                           | (QData)((IData)(
                                                             vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                                             [0U]))) 
                                          >> 0x20U)));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[2U] 
            = ((vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                [3U] << 0x14U) | (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                  [2U] >> 8U));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_output_data[3U] 
            = (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
               [3U] >> 0xcU);
    }
    vlSelf->__PVT__w_next_state = vlSelf->__PVT__r_current_state;
    if ((0U == (IData)(vlSelf->__PVT__r_current_state))) {
        if (vlSelf->__PVT__w_input_fire) {
            vlSelf->__PVT__w_next_state = ((1U == (0xfU 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__w_active_size))))
                                            ? 2U : 1U);
        }
    } else if ((1U == (IData)(vlSelf->__PVT__r_current_state))) {
        if (((IData)(vlSelf->__PVT__w_input_fire) & 
             ((0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__r_input_beat_count))) 
              == (0xfU & ((IData)(1U) << (IData)(vlSelf->__PVT__w_active_size)))))) {
            vlSelf->__PVT__w_next_state = 2U;
        }
    } else if ((2U == (IData)(vlSelf->__PVT__r_current_state))) {
        if (((IData)(vlSelf->__PVT__w_output_fire) 
             & (IData)(vlSelf->O_DATA_LAST))) {
            vlSelf->__PVT__w_next_state = 0U;
        }
    } else {
        vlSelf->__PVT__w_next_state = 0U;
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_output_fire 
        = ((IData)(vlSelf->__PVT__w_mts_output_ready) 
           & (IData)(vlSelf->__PVT__w_mts_output_valid));
    vlSelf->__PVT__u_idct2_core__DOT__w_output_handshake 
        = ((IData)(vlSelf->__PVT__w_dct2_output_ready) 
           & (IData)(vlSelf->__PVT__w_dct2_output_valid));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[0U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h9c90b00e__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h9c90b00e__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[1U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h998c785a__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h998c785a__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[2U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h8291f1ca__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h8291f1ca__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[3U] 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h5e3e9e20__0, 1U) 
                         + u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT____VdfgTmp_h5e3e9e20__0));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_next_state 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_num_beats 
        = (0xfU & ((IData)(1U) << (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_active_size)));
    if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))) {
            if (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_output_fire) 
                 & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_output_beat) 
                    == (0xfU & (((IData)(1U) << (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size)) 
                                - (IData)(1U)))))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_next_state = 0U;
            }
        } else if (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_collected_beat) 
                    == (0xfU & ((IData)(1U) << (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size))))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_current_state))) {
        if (((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_input_fire) 
             & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_input_beat) 
                == (0xfU & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_num_beats) 
                            - (IData)(1U)))))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_next_state = 2U;
        }
    } else if (vlSelf->__PVT__u_idst7_idct8_core__DOT__w_input_fire) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_next_state 
            = ((1U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__w_num_beats))
                ? 2U : 1U);
    }
}
