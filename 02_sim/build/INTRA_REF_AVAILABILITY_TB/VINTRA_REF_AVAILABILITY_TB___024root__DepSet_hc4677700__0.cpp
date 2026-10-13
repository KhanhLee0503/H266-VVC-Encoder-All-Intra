// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VINTRA_REF_AVAILABILITY_TB.h for the primary calling header

#include "VINTRA_REF_AVAILABILITY_TB__pch.h"
#include "VINTRA_REF_AVAILABILITY_TB___024root.h"

VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root___eval_initial__TOP(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf);
VlCoroutine VINTRA_REF_AVAILABILITY_TB___024root___eval_initial__TOP__Vtiming__0(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf);
VlCoroutine VINTRA_REF_AVAILABILITY_TB___024root___eval_initial__TOP__Vtiming__1(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf);

void VINTRA_REF_AVAILABILITY_TB___024root___eval_initial(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___eval_initial\n"); );
    // Body
    VINTRA_REF_AVAILABILITY_TB___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VINTRA_REF_AVAILABILITY_TB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VINTRA_REF_AVAILABILITY_TB___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__INTRA_REF_AVAILABILITY_TB__DOT__clk__0 
        = vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__clk;
}

VL_INLINE_OPT VlCoroutine VINTRA_REF_AVAILABILITY_TB___024root___eval_initial__TOP__Vtiming__1(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 
                                           78);
        vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__clk 
            = (1U & (~ (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__clk)));
    }
}

extern const VlUnpacked<CData/*0:0*/, 4> VINTRA_REF_AVAILABILITY_TB__ConstPool__TABLE_h0f0fe16a_0;
extern const VlUnpacked<CData/*7:0*/, 4> VINTRA_REF_AVAILABILITY_TB__ConstPool__TABLE_hfc790d96_0;

VL_INLINE_OPT void VINTRA_REF_AVAILABILITY_TB___024root___act_comb__TOP__0(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*4:0*/ INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT____VdfgExtracted_he87785fc__0;
    INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT____VdfgExtracted_he87785fc__0 = 0;
    CData/*4:0*/ INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT____VdfgExtracted_h0326fd4f__0;
    INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT____VdfgExtracted_h0326fd4f__0 = 0;
    CData/*0:0*/ INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT____VdfgTmp_h45be7e52__0;
    INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT____VdfgTmp_h45be7e52__0 = 0;
    CData/*0:0*/ INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT____VdfgTmp_h522a9608__0;
    INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT____VdfgTmp_h522a9608__0 = 0;
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if ((0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X))) {
        vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x 
            = (0x3fffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN) 
                          + ((0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X))
                              ? (0xffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X) 
                                          - (IData)(1U)))
                              : 0U)));
        INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT____VdfgExtracted_h0326fd4f__0 
            = (0x1fU & (((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X) 
                         - (IData)(1U)) >> 2U));
    } else {
        vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_x 
            = (0x3fffU & ((0U == (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN))
                           ? 0U : ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN) 
                                   - (IData)(1U))));
        INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT____VdfgExtracted_h0326fd4f__0 = 0U;
    }
    if ((0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y))) {
        INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT____VdfgExtracted_he87785fc__0 
            = (0x1fU & (((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y) 
                         - (IData)(1U)) >> 2U));
        vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_ref_y 
            = (0xffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y) 
                        - (IData)(1U)));
        vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y 
            = (0x3fffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN) 
                          + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_ref_y)));
    } else {
        INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT____VdfgExtracted_he87785fc__0 = 0U;
        vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_ref_y = 0U;
        vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_y 
            = (0x3fffU & ((0U == (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN))
                           ? 0U : ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN) 
                                   - (IData)(1U))));
    }
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_ref_x 
        = (0xffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X) 
                    + VL_SHIFTL_III(8,8,32, (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_SEG_INDEX), 2U)));
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_ref_y 
        = (0xffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y) 
                    + VL_SHIFTL_III(8,8,32, (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_SEG_INDEX), 2U)));
    INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT____VdfgTmp_h522a9608__0 
        = ((0x3fffU & ((0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X))
                        ? ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN) 
                           + ((0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X))
                               ? (0xffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X) 
                                           - (IData)(1U)))
                               : 0U)) : ((0U == (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN))
                                          ? 0U : ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN) 
                                                  - (IData)(1U))))) 
           < (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_WIDTH));
    __Vtableidx1 = vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_COMPONENT_ID;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_component_valid 
        = VINTRA_REF_AVAILABILITY_TB__ConstPool__TABLE_h0f0fe16a_0
        [__Vtableidx1];
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_ctu_size 
        = VINTRA_REF_AVAILABILITY_TB__ConstPool__TABLE_hfc790d96_0
        [__Vtableidx1];
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_global_x 
        = (0x3fffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN) 
                      + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_ref_x)));
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_global_y 
        = (0x3fffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN) 
                      + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_ref_y)));
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_picture_valid 
        = ((IData)(INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT____VdfgTmp_h522a9608__0) 
           & ((0x3fffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN) 
                          + (0xffU & ((IData)(3U) + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_ref_y))))) 
              < (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_HEIGHT)));
    INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT____VdfgTmp_h45be7e52__0 
        = ((0x3fffU & ((0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y))
                        ? ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN) 
                           + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_ref_y))
                        : ((0U == (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN))
                            ? 0U : ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN) 
                                    - (IData)(1U))))) 
           < (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_HEIGHT));
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_tu_origin_valid 
        = (((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X) 
            < (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_ctu_size)) 
           & (((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y) 
               < (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_ctu_size)) 
              & (((0x3fffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN) 
                              + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X))) 
                  < (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_WIDTH)) 
                 & ((0x3fffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN) 
                                + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y))) 
                    < (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_HEIGHT)))));
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_tl_picture_valid 
        = ((IData)(INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT____VdfgTmp_h522a9608__0) 
           & (IData)(INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT____VdfgTmp_h45be7e52__0));
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_picture_valid 
        = (((0x3fffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN) 
                        + (0xffU & ((IData)(3U) + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_ref_x))))) 
            < (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_WIDTH)) 
           & (IData)(INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT____VdfgTmp_h45be7e52__0));
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_QUERY_VALID = 0U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_Y_UNIT = 0U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_X_UNIT = 0U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION = 4U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_CODING_VALID = 0U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_RECON_READY = 0U;
    if (((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_CHECK_VALID) 
           & (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_component_valid)) 
          & (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_tu_origin_valid)) 
         & (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_picture_valid))) {
        if (((0xffU & ((IData)(3U) + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_ref_y))) 
             < (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_ctu_size))) {
            if ((0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X))) {
                vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_QUERY_VALID = 1U;
                vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_Y_UNIT 
                    = (0x1fU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_ref_y) 
                                >> 2U));
                vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_X_UNIT 
                    = INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT____VdfgExtracted_h0326fd4f__0;
                vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION = 0U;
                vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_CODING_VALID = 1U;
                vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_RECON_READY 
                    = vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_MAP_AVAILABLE;
            } else if ((0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN))) {
                vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION = 2U;
                vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_CODING_VALID = 1U;
                vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_RECON_READY 
                    = vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_BOUNDARY_VALID;
            }
        }
    }
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_AVAILABLE 
        = ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_CODING_VALID) 
           & (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_RECON_READY));
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_QUERY_VALID = 0U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_Y_UNIT = 0U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_X_UNIT = 0U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION = 4U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_CODING_VALID = 0U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_RECON_READY = 0U;
    if (((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TL_CHECK_VALID) 
           & (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_component_valid)) 
          & (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_tu_origin_valid)) 
         & (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_tl_picture_valid))) {
        if (((0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X)) 
             & (0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y)))) {
            vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_QUERY_VALID = 1U;
            vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_Y_UNIT 
                = INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT____VdfgExtracted_he87785fc__0;
            vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_X_UNIT 
                = INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT____VdfgExtracted_h0326fd4f__0;
            vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION = 0U;
            vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_CODING_VALID = 1U;
            vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_RECON_READY 
                = vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TL_MAP_AVAILABLE;
        } else if (((0U == (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X)) 
                    & (0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y)))) {
            if ((0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN))) {
                vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION = 2U;
                vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_CODING_VALID = 1U;
                vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_RECON_READY 
                    = vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_BOUNDARY_VALID;
            }
        } else if (((0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X)) 
                    & (0U == (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y)))) {
            if ((0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN))) {
                vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION = 1U;
                vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_CODING_VALID = 1U;
                vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_RECON_READY 
                    = vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_ABOVE_ROW_VALID;
            }
        } else if (((0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN)) 
                    & (0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN)))) {
            vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION = 3U;
            vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_CODING_VALID = 1U;
            vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_RECON_READY 
                = vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_ABOVE_LEFT_VALID;
        }
    }
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_AVAILABLE 
        = ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_CODING_VALID) 
           & (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_RECON_READY));
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_QUERY_VALID = 0U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_X_UNIT = 0U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_Y_UNIT = 0U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION = 4U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_CODING_VALID = 0U;
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_RECON_READY = 0U;
    if (((((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_CHECK_VALID) 
           & (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_component_valid)) 
          & (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_tu_origin_valid)) 
         & (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_picture_valid))) {
        if ((0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y))) {
            if (((0xffU & ((IData)(3U) + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_ref_x))) 
                 < (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_ctu_size))) {
                vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_QUERY_VALID = 1U;
                vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_X_UNIT 
                    = (0x1fU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_ref_x) 
                                >> 2U));
                vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_Y_UNIT 
                    = INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT____VdfgExtracted_he87785fc__0;
                vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION = 0U;
                vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_CODING_VALID = 1U;
                vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_RECON_READY 
                    = vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_MAP_AVAILABLE;
            }
        } else if ((0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN))) {
            vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION = 1U;
            vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_CODING_VALID = 1U;
            vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_RECON_READY 
                = vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_ABOVE_ROW_VALID;
        }
    }
    vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_AVAILABLE 
        = ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_CODING_VALID) 
           & (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_RECON_READY));
}

void VINTRA_REF_AVAILABILITY_TB___024root___eval_act(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___eval_act\n"); );
    // Body
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        VINTRA_REF_AVAILABILITY_TB___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void VINTRA_REF_AVAILABILITY_TB___024root___eval_nba(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___eval_nba\n"); );
    // Body
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VINTRA_REF_AVAILABILITY_TB___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void VINTRA_REF_AVAILABILITY_TB___024root___timing_resume(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h504ec06b__0.resume("@(posedge INTRA_REF_AVAILABILITY_TB.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VINTRA_REF_AVAILABILITY_TB___024root___timing_commit(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h504ec06b__0.commit("@(posedge INTRA_REF_AVAILABILITY_TB.clk)");
    }
}

void VINTRA_REF_AVAILABILITY_TB___024root___eval_triggers__act(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf);

bool VINTRA_REF_AVAILABILITY_TB___024root___eval_phase__act(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VINTRA_REF_AVAILABILITY_TB___024root___eval_triggers__act(vlSelf);
    VINTRA_REF_AVAILABILITY_TB___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VINTRA_REF_AVAILABILITY_TB___024root___timing_resume(vlSelf);
        VINTRA_REF_AVAILABILITY_TB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VINTRA_REF_AVAILABILITY_TB___024root___eval_phase__nba(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VINTRA_REF_AVAILABILITY_TB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root___dump_triggers__nba(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root___dump_triggers__act(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VINTRA_REF_AVAILABILITY_TB___024root___eval(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VINTRA_REF_AVAILABILITY_TB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 11, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VINTRA_REF_AVAILABILITY_TB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../01_tb/INTRA_PREDICTION_ENGINE/INTRA_REF_AVAILABILITY_TB.sv", 11, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VINTRA_REF_AVAILABILITY_TB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VINTRA_REF_AVAILABILITY_TB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VINTRA_REF_AVAILABILITY_TB___024root___eval_debug_assertions(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
