// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_INVERSE_TRANSFORM_TOP_TB.h for the primary calling header

#include "VTQ_INVERSE_TRANSFORM_TOP_TB__pch.h"
#include "VTQ_INVERSE_TRANSFORM_TOP_TB__Syms.h"
#include "VTQ_INVERSE_TRANSFORM_TOP_TB___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___dump_triggers__stl(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_triggers__stl(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product.neq(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product__0));
    vlSelf->__VstlTriggered.set(2U, ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready__0)));
    vlSelf->__VstlTriggered.set(3U, ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready__0)));
    vlSelf->__VstlTriggered.set(4U, ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready__0)));
    vlSelf->__VstlTriggered.set(5U, vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product.neq(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product__0));
    vlSelf->__VstlTriggered.set(6U, ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready__0)));
    vlSelf->__VstlTriggered.set(7U, ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready__0)));
    vlSelf->__VstlTriggered.set(8U, ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready__0)));
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product__0.assign(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product);
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready__0 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready__0 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready__0 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product__0.assign(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product);
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready__0 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready__0 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready__0 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
        vlSelf->__VstlTriggered.set(2U, 1U);
        vlSelf->__VstlTriggered.set(3U, 1U);
        vlSelf->__VstlTriggered.set(4U, 1U);
        vlSelf->__VstlTriggered.set(5U, 1U);
        vlSelf->__VstlTriggered.set(6U, 1U);
        vlSelf->__VstlTriggered.set(7U, 1U);
        vlSelf->__VstlTriggered.set(8U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTQ_INVERSE_TRANSFORM_TOP_TB___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___stl_sequent__TOP__1(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___stl_sequent__TOP__1\n"); );
    // Body
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_rounded_data[0U] 
        = (0x1fffffffU & VL_SHIFTRS_III(29,29,32, (0x1fffffffU 
                                                   & ((IData)(0x40U) 
                                                      + 
                                                      VL_EXTENDS_II(29,28, 
                                                                    (0xfffffffU 
                                                                     & vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.O_DATA[0U])))), 7U));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_rounded_data[1U] 
        = (0x1fffffffU & VL_SHIFTRS_III(29,29,32, (0x1fffffffU 
                                                   & ((IData)(0x40U) 
                                                      + 
                                                      VL_EXTENDS_II(29,28, 
                                                                    (0xfffffffU 
                                                                     & ((vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.O_DATA[1U] 
                                                                         << 4U) 
                                                                        | (vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.O_DATA[0U] 
                                                                           >> 0x1cU)))))), 7U));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_rounded_data[2U] 
        = (0x1fffffffU & VL_SHIFTRS_III(29,29,32, (0x1fffffffU 
                                                   & ((IData)(0x40U) 
                                                      + 
                                                      VL_EXTENDS_II(29,28, 
                                                                    (0xfffffffU 
                                                                     & ((vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.O_DATA[2U] 
                                                                         << 8U) 
                                                                        | (vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.O_DATA[1U] 
                                                                           >> 0x18U)))))), 7U));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_rounded_data[3U] 
        = (0x1fffffffU & VL_SHIFTRS_III(29,29,32, (0x1fffffffU 
                                                   & ((IData)(0x40U) 
                                                      + 
                                                      VL_EXTENDS_II(29,28, 
                                                                    (0xfffffffU 
                                                                     & ((vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.O_DATA[3U] 
                                                                         << 0xcU) 
                                                                        | (vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.O_DATA[2U] 
                                                                           >> 0x14U)))))), 7U));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_extended_input[0U] 
        = (0x1fffffffU & VL_EXTENDS_II(29,28, (0xfffffffU 
                                               & vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.O_DATA[0U])));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_extended_input[1U] 
        = (0x1fffffffU & VL_EXTENDS_II(29,28, (0xfffffffU 
                                               & ((vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.O_DATA[1U] 
                                                   << 4U) 
                                                  | (vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.O_DATA[0U] 
                                                     >> 0x1cU)))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_extended_input[2U] 
        = (0x1fffffffU & VL_EXTENDS_II(29,28, (0xfffffffU 
                                               & ((vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.O_DATA[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.O_DATA[1U] 
                                                     >> 0x18U)))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_extended_input[3U] 
        = (0x1fffffffU & VL_EXTENDS_II(29,28, (0xfffffffU 
                                               & ((vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.O_DATA[3U] 
                                                   << 0xcU) 
                                                  | (vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.O_DATA[2U] 
                                                     >> 0x14U)))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_scale_in_valid 
        = ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.O_DATA_VALID) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hbca79e53__0));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_raw_fire 
        = ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.O_DATA_VALID) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_raw_ready));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_INPUT_READY 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_allow_col) 
           & (IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.I_DATA_READY));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_rounded_data[0U] 
        = (0x1fffffffU & VL_SHIFTRS_III(29,29,32, (0x1fffffffU 
                                                   & ((IData)(0x200U) 
                                                      + 
                                                      VL_EXTENDS_II(29,28, 
                                                                    (0xfffffffU 
                                                                     & vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.O_DATA[0U])))), 0xaU));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_rounded_data[1U] 
        = (0x1fffffffU & VL_SHIFTRS_III(29,29,32, (0x1fffffffU 
                                                   & ((IData)(0x200U) 
                                                      + 
                                                      VL_EXTENDS_II(29,28, 
                                                                    (0xfffffffU 
                                                                     & ((vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.O_DATA[1U] 
                                                                         << 4U) 
                                                                        | (vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.O_DATA[0U] 
                                                                           >> 0x1cU)))))), 0xaU));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_rounded_data[2U] 
        = (0x1fffffffU & VL_SHIFTRS_III(29,29,32, (0x1fffffffU 
                                                   & ((IData)(0x200U) 
                                                      + 
                                                      VL_EXTENDS_II(29,28, 
                                                                    (0xfffffffU 
                                                                     & ((vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.O_DATA[2U] 
                                                                         << 8U) 
                                                                        | (vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.O_DATA[1U] 
                                                                           >> 0x18U)))))), 0xaU));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_rounded_data[3U] 
        = (0x1fffffffU & VL_SHIFTRS_III(29,29,32, (0x1fffffffU 
                                                   & ((IData)(0x200U) 
                                                      + 
                                                      VL_EXTENDS_II(29,28, 
                                                                    (0xfffffffU 
                                                                     & ((vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.O_DATA[3U] 
                                                                         << 0xcU) 
                                                                        | (vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.O_DATA[2U] 
                                                                           >> 0x14U)))))), 0xaU));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_extended_input[0U] 
        = (0x1fffffffU & VL_EXTENDS_II(29,28, (0xfffffffU 
                                               & vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.O_DATA[0U])));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_extended_input[1U] 
        = (0x1fffffffU & VL_EXTENDS_II(29,28, (0xfffffffU 
                                               & ((vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.O_DATA[1U] 
                                                   << 4U) 
                                                  | (vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.O_DATA[0U] 
                                                     >> 0x1cU)))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_extended_input[2U] 
        = (0x1fffffffU & VL_EXTENDS_II(29,28, (0xfffffffU 
                                               & ((vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.O_DATA[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.O_DATA[1U] 
                                                     >> 0x18U)))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_extended_input[3U] 
        = (0x1fffffffU & VL_EXTENDS_II(29,28, (0xfffffffU 
                                               & ((vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.O_DATA[3U] 
                                                   << 0xcU) 
                                                  | (vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.O_DATA[2U] 
                                                     >> 0x14U)))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scale_in_valid 
        = ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.O_DATA_VALID) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hdd45bd79__0));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_raw_fire 
        = ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.O_DATA_VALID) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_raw_ready));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_fifo_pop 
        = ((0U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_count)) 
           & ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.I_DATA_READY) 
              & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_allow_row)));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_in_fire 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA_VALID) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_INPUT_READY));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_first 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_fifo_pop) 
           & (0U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_state)));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_final_input 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_fifo_pop) 
           & ((0U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_state))
               ? (1U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_first_total_beats))
               : ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_input_count) 
                  == (0x1ffU & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_total_beats) 
                                - (IData)(1U))))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_read_issue 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_active) 
           & (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_issue_count) 
               < (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_total_beats)) 
              & (2U > (7U & (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_count) 
                              + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_valid)) 
                             - (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_fifo_pop))))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_first 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_in_fire) 
           & (0U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_state)));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_final_input 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_in_fire) 
           & ((0U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_state))
               ? (1U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_first_total_beats))
               : ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_input_count) 
                  == (0x1ffU & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_total_beats) 
                                - (IData)(1U))))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_en[0U] = 0U;
    if (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_read_issue) 
         & (~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id)))) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_en[0U] = 0xfU;
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_en[1U] = 0U;
    if (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_read_issue) 
         & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id))) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_en[1U] = 0xfU;
    }
}

VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___stl_sequent__TOP__0(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf);
VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___stl_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__0(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___stl_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__1(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___stl_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__0(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___stl_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__1(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__2(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__3(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__4(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__5(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___stl_comb__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__4(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);

VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_stl(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___stl_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__0((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___stl_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__1((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___stl_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__0((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___stl_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__1((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
        VTQ_INVERSE_TRANSFORM_TOP_TB___024root___stl_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__2((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
    }
    if ((0x11ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__3((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
    }
    if ((5ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__4((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
    }
    if ((9ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__5((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
    }
    if ((0x21ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__2((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
    }
    if ((0x101ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__3((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
    }
    if ((0x41ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__4((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
    }
    if ((0x81ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__5((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
    }
    if ((0x1dULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___stl_comb__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__4((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
    }
    if ((0x1c1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___stl_comb__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__4((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
    }
}
