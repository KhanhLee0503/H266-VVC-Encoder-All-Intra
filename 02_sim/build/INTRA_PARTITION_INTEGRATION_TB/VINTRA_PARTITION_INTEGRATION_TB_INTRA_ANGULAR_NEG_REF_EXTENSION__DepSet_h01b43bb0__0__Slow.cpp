// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VINTRA_PARTITION_INTEGRATION_TB.h for the primary calling header

#include "VINTRA_PARTITION_INTEGRATION_TB__pch.h"
#include "VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION.h"

VL_ATTR_COLD void VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION___stl_sequent__TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension__0(VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION___stl_sequent__TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension__0\n"); );
    // Body
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
        = (0x1fffffU & ((IData)(0x100U) + vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position 
        = (0xfffU & (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product 
                     >> 9U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = 0U;
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = 0U;
    if (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active) 
         & (0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)))) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position 
            = (0x3fU & (((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position) 
                         > (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1))
                         ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1)
                         : (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position)));
        if ((0U != (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position))) {
            vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index 
                = (0x1fU & ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position) 
                            - (IData)(1U)));
        }
    }
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active) {
        vlSelf->__PVT__w_unit_active[0U] = 1U;
        vlSelf->__PVT__w_unit_active[1U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[2U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[3U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[4U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[5U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[6U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[7U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[8U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[9U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0xaU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0xbU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0xcU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0xdU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0xeU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0xfU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x10U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x11U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x12U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x13U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x14U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x15U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x16U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x17U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x18U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x19U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x1aU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x1bU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x1cU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x1dU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x1eU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x1fU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_neg_ref[0U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3;
    } else {
        vlSelf->__PVT__w_unit_active[0U] = 0U;
        vlSelf->__PVT__w_unit_active[1U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[2U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[3U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[4U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[5U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[6U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[7U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[8U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[9U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0xaU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0xbU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0xcU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0xdU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0xeU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0xfU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x10U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x11U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x12U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x13U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x14U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x15U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x16U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x17U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x18U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x19U] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x1aU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x1bU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x1cU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x1dU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x1eU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_active[0x1fU] = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active;
        vlSelf->__PVT__w_unit_neg_ref[0U] = 0U;
    }
    vlSelf->__PVT__w_unit_neg_ref[1U] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                          ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                          : 0U);
    vlSelf->__PVT__w_unit_neg_ref[2U] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                          ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                          : 0U);
    vlSelf->__PVT__w_unit_neg_ref[3U] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                          ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                          : 0U);
    vlSelf->__PVT__w_unit_neg_ref[4U] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                          ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                          : 0U);
    vlSelf->__PVT__w_unit_neg_ref[5U] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                          ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                          : 0U);
    vlSelf->__PVT__w_unit_neg_ref[6U] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                          ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                          : 0U);
    vlSelf->__PVT__w_unit_neg_ref[7U] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                          ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                          : 0U);
    vlSelf->__PVT__w_unit_neg_ref[8U] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                          ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                          : 0U);
    vlSelf->__PVT__w_unit_neg_ref[9U] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                          ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                          : 0U);
    vlSelf->__PVT__w_unit_neg_ref[0xaU] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                            ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                            : 0U);
    vlSelf->__PVT__w_unit_neg_ref[0xbU] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                            ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                            : 0U);
    vlSelf->__PVT__w_unit_neg_ref[0xcU] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                            ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                            : 0U);
    vlSelf->__PVT__w_unit_neg_ref[0xdU] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                            ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                            : 0U);
    vlSelf->__PVT__w_unit_neg_ref[0xeU] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                            ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                            : 0U);
    vlSelf->__PVT__w_unit_neg_ref[0xfU] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                            ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                            : 0U);
    vlSelf->__PVT__w_unit_neg_ref[0x10U] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                             ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                             : 0U);
    vlSelf->__PVT__w_unit_neg_ref[0x11U] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                             ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                             : 0U);
    vlSelf->__PVT__w_unit_neg_ref[0x12U] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                             ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                             : 0U);
    vlSelf->__PVT__w_unit_neg_ref[0x13U] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                             ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                             : 0U);
    vlSelf->__PVT__w_unit_neg_ref[0x14U] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                             ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                             : 0U);
    vlSelf->__PVT__w_unit_neg_ref[0x15U] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                             ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                             : 0U);
    vlSelf->__PVT__w_unit_neg_ref[0x16U] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                             ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                             : 0U);
    vlSelf->__PVT__w_unit_neg_ref[0x17U] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                             ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                             : 0U);
    vlSelf->__PVT__w_unit_neg_ref[0x18U] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                             ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                             : 0U);
    vlSelf->__PVT__w_unit_neg_ref[0x19U] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                             ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                             : 0U);
    vlSelf->__PVT__w_unit_neg_ref[0x1aU] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                             ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                             : 0U);
    vlSelf->__PVT__w_unit_neg_ref[0x1bU] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                             ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                             : 0U);
    vlSelf->__PVT__w_unit_neg_ref[0x1cU] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                             ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                             : 0U);
    vlSelf->__PVT__w_unit_neg_ref[0x1dU] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                             ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                             : 0U);
    vlSelf->__PVT__w_unit_neg_ref[0x1eU] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                             ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                             : 0U);
    vlSelf->__PVT__w_unit_neg_ref[0x1fU] = ((IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active)
                                             ? (IData)(vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3)
                                             : 0U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[0U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[1U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[2U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[0U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[3U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[1U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[0U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[4U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[5U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[1U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[6U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[2U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[1U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[7U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[8U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[2U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[9U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[3U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[2U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xaU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xbU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[3U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xcU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[4U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[3U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xdU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xeU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[4U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0xfU] 
        = (vlSelf->__PVT__r_side_ref[4U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x10U] 
        = (0x3ffU & vlSelf->__PVT__r_side_ref[5U]);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x11U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0xaU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x12U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[5U] 
                     >> 0x14U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x13U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[6U] 
                      << 2U) | (vlSelf->__PVT__r_side_ref[5U] 
                                >> 0x1eU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x14U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 8U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x15U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[6U] 
                     >> 0x12U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x16U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[7U] 
                      << 4U) | (vlSelf->__PVT__r_side_ref[6U] 
                                >> 0x1cU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x17U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 6U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x18U] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[7U] 
                     >> 0x10U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x19U] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[8U] 
                      << 6U) | (vlSelf->__PVT__r_side_ref[7U] 
                                >> 0x1aU)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1aU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 4U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1bU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[8U] 
                     >> 0xeU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1cU] 
        = (0x3ffU & ((vlSelf->__PVT__r_side_ref[9U] 
                      << 8U) | (vlSelf->__PVT__r_side_ref[8U] 
                                >> 0x18U)));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1dU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 2U));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1eU] 
        = (0x3ffU & (vlSelf->__PVT__r_side_ref[9U] 
                     >> 0xcU));
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[0x1fU] 
        = (vlSelf->__PVT__r_side_ref[9U] >> 0x16U);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = 0U;
    if (vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample 
            = vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref
            [vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2];
    }
}

VL_ATTR_COLD void VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION___ctor_var_reset(VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION___ctor_var_reset\n"); );
    // Body
    vlSelf->I_CLK = VL_RAND_RESET_I(1);
    vlSelf->I_RESETN = VL_RAND_RESET_I(1);
    vlSelf->I_VALID = VL_RAND_RESET_I(1);
    vlSelf->I_INV_ANGLE_ABS = VL_RAND_RESET_I(15);
    vlSelf->I_EXT_SIZE = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(640, vlSelf->I_SIDE_REF);
    vlSelf->O_VALID = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(320, vlSelf->O_NEG_REF);
    vlSelf->O_ACTIVE_MASK = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(640, vlSelf->__PVT__r_side_ref);
    vlSelf->__PVT__r_valid_stage1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_valid_stage2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_valid_stage3 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__w_unit_neg_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__w_unit_active[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__0__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__1__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__2__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__3__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__4__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__5__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__6__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__7__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__8__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__9__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__10__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__11__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__12__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__13__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__14__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__15__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__16__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__17__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__18__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__19__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__20__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__21__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__22__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__23__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__24__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__25__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__26__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__27__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__28__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__29__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__30__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_product_stage1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_ext_size_stage1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_rounded_product = VL_RAND_RESET_I(21);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_raw_position = VL_RAND_RESET_I(12);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_clamped_position = VL_RAND_RESET_I(6);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage2 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_side_ref[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__w_selected_side_sample = VL_RAND_RESET_I(10);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_stage3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_side_index_stage3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GEN_NEG_REF_UNIT__BRA__31__KET____DOT__u_intra_angular_neg_ref_ext_unit__DOT__r_neg_ref_sample_stage3 = VL_RAND_RESET_I(10);
}
