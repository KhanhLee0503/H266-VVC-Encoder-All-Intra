// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DBF_SAMPLE_WINDOW_ASSEMBLER.h for the primary calling header

#include "VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__pch.h"
#include "VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root.h"

VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_static(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_final(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___dump_triggers__stl(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_phase__stl(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);

VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_settle(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_SAMPLE_WINDOW_ASSEMBLER.sv", 8, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___dump_triggers__stl(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___stl_sequent__TOP__0(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__w_rd_component_valid 
        = ((0U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component)) 
           || ((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component)) 
               || (2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component))));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_output_fire 
        = (((4U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
            | (5U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state))) 
           & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_ready));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_good_ctu_geometry 
        = ((0U != (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_width)) 
           & ((0U != (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_height)) 
              & ((0x80U >= (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_width)) 
                 & ((0x80U >= (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_height)) 
                    & ((0U == (3U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_width))) 
                       & (0U == (3U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_height))))))));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_ready 
        = ((0U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
           & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_context_valid) 
              & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_read_enable) 
                 & ((~ (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_start)) 
                    & (~ (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clear))))));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_fire 
        = ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
           & (((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count) 
               < (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_expected_count)) 
              & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_read_enable) 
                 & ((~ (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clear)) 
                    & (~ (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_start))))));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0U] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [0U][0U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[1U] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [0U][0U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[2U] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [0U][1U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[3U] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [0U][1U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[4U] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [0U][2U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[5U] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [0U][2U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[6U] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [0U][3U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[7U] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [0U][3U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[8U] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [1U][0U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[9U] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [1U][0U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0xaU] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [1U][1U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0xbU] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [1U][1U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0xcU] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [1U][2U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0xdU] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [1U][2U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0xeU] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [1U][3U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0xfU] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [1U][3U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x10U] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [2U][0U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x11U] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [2U][0U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x12U] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [2U][1U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x13U] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [2U][1U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x14U] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [2U][2U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x15U] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [2U][2U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x16U] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [2U][3U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x17U] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [2U][3U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x18U] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [3U][0U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x19U] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [3U][0U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x1aU] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [3U][1U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x1bU] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [3U][1U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x1cU] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [3U][2U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x1dU] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [3U][2U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x1eU] 
        = (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                  [3U][3U]);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x1fU] 
        = (IData)((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                   [3U][3U] >> 0x20U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_plane_width 
        = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_width;
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_plane_height 
        = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_height;
    if ((0U != (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component))) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_plane_width 
            = (0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_width), 1U));
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_plane_height 
            = (0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_height), 1U));
    }
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_window 
        = ((((((((0U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component)) 
                 | (1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component))) 
                | (2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component))) 
               & (0U == (3U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_edge_x)))) 
              & (0U == (3U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_y_base)))) 
             & (8U <= (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_edge_x))) 
            & ((0x1ffU & ((IData)(8U) + (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_edge_x))) 
               <= (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_plane_width))) 
           & ((0x1ffU & ((IData)(4U) + (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_y_base))) 
              <= (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_plane_height)));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire 
        = ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_valid) 
           & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_tag_valid) 
              & ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
                 | (3U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)))));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_row = 0U;
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_col = 0U;
    if ((0U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_fetch_mode))) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_row 
            = (3U & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count) 
                     >> 2U));
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_col 
            = (3U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count));
    } else if ((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_fetch_mode))) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_row 
            = (3U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count));
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_col = 3U;
    } else if ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_fetch_mode))) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_row 
            = (3U & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count) 
                     >> 1U));
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_col 
            = (2U | (1U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count)));
    }
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_row 
        = (0x1ffU & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_y_base) 
                     + (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_row)));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_word_col 
        = (0x3ffU & (((0x3fU & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_edge_x) 
                                >> 2U)) - (IData)(2U)) 
                     + (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_col)));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_calc 
        = (0xfffU & ((0U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component))
                      ? (VL_SHIFTL_III(12,12,32, (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_row), 5U) 
                         + (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_word_col))
                      : (VL_SHIFTL_III(12,12,32, (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_row), 4U) 
                         + (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_word_col))));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_reuse_shift4 
        = ((((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_valid) 
             & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component) 
                == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_component))) 
            & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_y_base) 
               == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_y_base))) 
           & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_edge_x) 
              == (0x1ffU & ((IData)(4U) + (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_edge_x)))));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_reuse_shift8 
        = ((((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_valid) 
             & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component) 
                == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_component))) 
            & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_y_base) 
               == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_y_base))) 
           & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_edge_x) 
              == (0x1ffU & ((IData)(8U) + (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_edge_x)))));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode = 0U;
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_count = 0x10U;
    if (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_reuse_shift4) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode = 1U;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_count = 4U;
    } else if (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_reuse_shift8) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode = 2U;
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_count = 8U;
    }
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_after_response 
        = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid;
    if (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_after_response 
            = ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_after_response) 
               | (0xffffU & ((IData)(1U) << (((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row) 
                                              << 2U) 
                                             | (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col)))));
    }
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_prepared_valid = 0U;
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_prepared_valid 
        = ((0xfff0U & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_prepared_valid)) 
           | ((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))
               ? (7U & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid) 
                        >> 1U)) : ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))
                                    ? (3U & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid) 
                                             >> 2U))
                                    : 0U)));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_prepared_valid 
        = ((0xff0fU & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_prepared_valid)) 
           | (((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))
                ? (7U & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid) 
                         >> 5U)) : ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))
                                     ? (3U & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid) 
                                              >> 6U))
                                     : 0U)) << 4U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_prepared_valid 
        = ((0xf0ffU & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_prepared_valid)) 
           | (((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))
                ? (7U & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid) 
                         >> 9U)) : ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))
                                     ? (3U & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid) 
                                              >> 0xaU))
                                     : 0U)) << 8U));
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_prepared_valid 
        = ((0xfffU & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_prepared_valid)) 
           | (((1U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))
                ? (7U & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid) 
                         >> 0xdU)) : ((2U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode))
                                       ? (3U & ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid) 
                                                >> 0xeU))
                                       : 0U)) << 0xcU));
}

VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_stl(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_triggers__stl(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);

VL_ATTR_COLD bool VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_phase__stl(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___dump_triggers__act(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge TB_DBF_SAMPLE_WINDOW_ASSEMBLER.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge TB_DBF_SAMPLE_WINDOW_ASSEMBLER.clk or negedge TB_DBF_SAMPLE_WINDOW_ASSEMBLER.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___dump_triggers__nba(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge TB_DBF_SAMPLE_WINDOW_ASSEMBLER.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge TB_DBF_SAMPLE_WINDOW_ASSEMBLER.clk or negedge TB_DBF_SAMPLE_WINDOW_ASSEMBLER.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___ctor_var_reset(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_start = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_id = VL_RAND_RESET_I(9);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_width = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_height = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_read_enable = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_ready = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_component = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_edge_x = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_y_base = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_tag = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_en = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_component = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_addr = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_data = VL_RAND_RESET_Q(64);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_mask = VL_RAND_RESET_I(4);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__read_total = VL_RAND_RESET_I(32);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_total = VL_RAND_RESET_I(32);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_accepted_count = VL_RAND_RESET_I(32);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__last_accepted_tag = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state = VL_RAND_RESET_I(3);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_id = VL_RAND_RESET_I(9);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_width = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_height = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_context_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_context_error = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_protocol_error = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_edge_x = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_y_base = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_tag = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_component = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_edge_x = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_y_base = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_prepared_valid = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_after_response = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_fetch_mode = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_expected_count = VL_RAND_RESET_I(5);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count = VL_RAND_RESET_I(5);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_response_count = VL_RAND_RESET_I(5);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_tag_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_plane_width = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_plane_height = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_window = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_reuse_shift4 = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_reuse_shift8 = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_count = VL_RAND_RESET_I(5);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_row = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_col = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_row = VL_RAND_RESET_I(9);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_word_col = VL_RAND_RESET_I(10);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_calc = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_fire = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_output_fire = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_good_ctu_geometry = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_y_mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cb_mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_cr_mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__w_rd_component_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_data = VL_RAND_RESET_Q(64);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__9__cp = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__9__edge_x = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__9__ybase = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__9__expected_reads = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__9__expected_error = 0;
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__9__stall_cycles = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__18__cp = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__18__edge_x = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__18__ybase = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__18__expected_reads = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__18__expected_error = 0;
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__18__stall_cycles = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__18__accepted_before = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__24__cp = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__24__edge_x = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__24__ybase = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__24__expected_reads = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__24__expected_error = 0;
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__24__stall_cycles = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__33__cp = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__33__edge_x = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__33__ybase = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__33__expected_reads = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__33__expected_error = 0;
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__33__stall_cycles = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__33__accepted_before = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__39__cp = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__39__edge_x = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__39__ybase = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__39__expected_reads = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__39__expected_error = 0;
    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__39__stall_cycles = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
