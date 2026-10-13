// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_INVERSE_TRANSFORM_TOP_TB.h for the primary calling header

#include "VTQ_INVERSE_TRANSFORM_TOP_TB__pch.h"
#include "VTQ_INVERSE_TRANSFORM_TOP_TB__Syms.h"
#include "VTQ_INVERSE_TRANSFORM_TOP_TB___024root.h"

VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_initial__TOP(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf);
VlCoroutine VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_initial__TOP__Vtiming__0(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf);
VlCoroutine VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_initial__TOP__Vtiming__1(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf);
VlCoroutine VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_initial__TOP__Vtiming__2(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf);
VlCoroutine VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_initial__TOP__Vtiming__3(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf);

void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_initial(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_initial\n"); );
    // Body
    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product__0 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready__0 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready__0 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready__0 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product__0 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready__0 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready__0 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready__0 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product__1 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready__1 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready__1 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready__1 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product__1 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready__1 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready__1 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready__1 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_CLK__0 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_CLK;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN__0 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN;
    vlSelf->__Vtrigprevexpr_h9b5f9cd8__0 = (0x10U == vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc);
}

extern const VlWide<8>/*255:0*/ VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_h2dd725dc_0;

VL_INLINE_OPT VlCoroutine VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_initial__TOP__Vtiming__0(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(8, VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__CONST_h2dd725dc_0));
    vlSymsp->_traceDumpOpen();
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x745f3264U;
    __Vtemp_1[2U] = 0x696e7075U;
    __Vtemp_1[3U] = 0x74622fU;
    VL_READMEM_N(true, 16, 16384, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_input_mem)
                 , 0, ~0ULL);
    __Vtemp_2[0U] = 0x2e6d656dU;
    __Vtemp_2[1U] = 0x6e5f3264U;
    __Vtemp_2[2U] = 0x6f6c6465U;
    __Vtemp_2[3U] = 0x74622f67U;
    VL_READMEM_N(true, 16, 16384, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_2)
                 ,  &(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_golden_mem)
                 , 0, ~0ULL);
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w[0U] = 4U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h[0U] = 4U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hmode[0U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_vmode[0U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_component[0U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w[1U] = 8U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h[1U] = 8U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hmode[1U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_vmode[1U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_component[1U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w[2U] = 4U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h[2U] = 8U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hmode[2U] = 1U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_vmode[2U] = 2U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_component[2U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w[3U] = 8U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h[3U] = 4U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hmode[3U] = 2U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_vmode[3U] = 1U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_component[3U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w[4U] = 0x10U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h[4U] = 8U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hmode[4U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_vmode[4U] = 1U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_component[4U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w[5U] = 8U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h[5U] = 0x10U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hmode[5U] = 2U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_vmode[5U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_component[5U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w[6U] = 0x10U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h[6U] = 0x10U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hmode[6U] = 1U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_vmode[6U] = 2U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_component[6U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w[7U] = 4U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h[7U] = 0x20U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hmode[7U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_vmode[7U] = 1U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_component[7U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w[8U] = 0x20U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h[8U] = 4U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hmode[8U] = 1U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_vmode[8U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_component[8U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w[9U] = 0x20U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h[9U] = 8U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hmode[9U] = 2U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_vmode[9U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_component[9U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w[0xaU] = 8U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h[0xaU] = 0x20U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hmode[0xaU] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_vmode[0xaU] = 2U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_component[0xaU] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w[0xbU] = 0x20U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h[0xbU] = 0x20U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hmode[0xbU] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_vmode[0xbU] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_component[0xbU] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w[0xcU] = 0x20U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h[0xcU] = 0x20U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hmode[0xcU] = 1U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_vmode[0xcU] = 1U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_component[0xcU] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w[0xdU] = 0x20U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h[0xdU] = 0x20U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hmode[0xdU] = 2U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_vmode[0xdU] = 2U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_component[0xdU] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w[0xeU] = 4U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h[0xeU] = 4U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hmode[0xeU] = 2U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_vmode[0xeU] = 2U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_component[0xeU] = 1U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w[0xfU] = 4U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h[0xfU] = 4U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hmode[0xfU] = 1U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_vmode[0xfU] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_component[0xfU] = 2U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA_VALID = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA = 0ULL;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_START = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_LAST = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_ID = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_WIDTH = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_HEIGHT = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TRANSFORM_HOR = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TRANSFORM_VER = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_COMPONENT = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_OUTPUT_READY = 0U;
    co_await vlSelf->__VtrigSched_h0b9c4a28__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_INVERSE_TRANSFORM_TOP_TB.I_CLK)", 
                                                       "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 
                                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h0b9c4a28__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_INVERSE_TRANSFORM_TOP_TB.I_CLK)", 
                                                       "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 
                                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h0b9c4a28__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_INVERSE_TRANSFORM_TOP_TB.I_CLK)", 
                                                       "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 
                                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h0b9c4a28__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_INVERSE_TRANSFORM_TOP_TB.I_CLK)", 
                                                       "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 
                                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h0b9c4a28__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_INVERSE_TRANSFORM_TOP_TB.I_CLK)", 
                                                       "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 
                                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h0b9c4a28__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_INVERSE_TRANSFORM_TOP_TB.I_CLK)", 
                                                       "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 
                                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_initial__TOP__Vtiming__1(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while ((1U & (~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN)))) {
        co_await vlSelf->__VtrigSched_hc3711975__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] TQ_INVERSE_TRANSFORM_TOP_TB.I_RESETN)", 
                                                           "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 
                                                           253);
    }
    while ((0x10U != vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)) {
        co_await vlSelf->__VtrigSched_h0b68d2ea__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (32'sh10 == TQ_INVERSE_TRANSFORM_TOP_TB.r_rx_tc))", 
                                                           "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 
                                                           254);
    }
    co_await vlSelf->__VtrigSched_h0b9c4a28__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_INVERSE_TRANSFORM_TOP_TB.I_CLK)", 
                                                       "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 
                                                       255);
    co_await vlSelf->__VtrigSched_h0b9c4a28__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_INVERSE_TRANSFORM_TOP_TB.I_CLK)", 
                                                       "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 
                                                       255);
    co_await vlSelf->__VtrigSched_h0b9c4a28__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_INVERSE_TRANSFORM_TOP_TB.I_CLK)", 
                                                       "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 
                                                       255);
    co_await vlSelf->__VtrigSched_h0b9c4a28__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_INVERSE_TRANSFORM_TOP_TB.I_CLK)", 
                                                       "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 
                                                       255);
    if (VL_UNLIKELY(((0U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_outstanding_tus)) 
                     | ((0U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_state)) 
                        | (0U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_state)))))) {
        VL_WRITEF("[%0t] %%Fatal: TQ_INVERSE_TRANSFORM_TOP_TB.sv:257: Assertion failed in %NTQ_INVERSE_TRANSFORM_TOP_TB: [FAIL] Busy remains high after final TU\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 257, "");
    }
    if (VL_UNLIKELY(((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_input_fire_count 
                      != vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_output_fire_count) 
                     | (0U == vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_output_stall_count)))) {
        VL_WRITEF("[%0t] %%Fatal: TQ_INVERSE_TRANSFORM_TOP_TB.sv:259: Assertion failed in %NTQ_INVERSE_TRANSFORM_TOP_TB: [FAIL] Traffic count/stall mismatch in=%0d out=%0d stalls=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_input_fire_count,
                  32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_output_fire_count,
                  32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_output_stall_count);
        VL_STOP_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 259, "");
    }
    VL_WRITEF("===============================================================\n[PASS] REAL 2D TOP: 16 TUs, %0d beats, output_stalls=%0d last_stalls=%0d overlap=%0d\n",
              32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_output_fire_count,
              32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_output_stall_count,
              32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_last_stall_count,
              32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_overlap_cycles);
    VL_FINISH_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 264, "");
}

VL_INLINE_OPT VlCoroutine VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_initial__TOP__Vtiming__2(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Init
    IData/*31:0*/ TQ_INVERSE_TRANSFORM_TOP_TB__DOT____Vrepeat2;
    TQ_INVERSE_TRANSFORM_TOP_TB__DOT____Vrepeat2 = 0;
    // Body
    TQ_INVERSE_TRANSFORM_TOP_TB__DOT____Vrepeat2 = 0x927c0U;
    while (VL_LTS_III(32, 0U, TQ_INVERSE_TRANSFORM_TOP_TB__DOT____Vrepeat2)) {
        co_await vlSelf->__VtrigSched_h0b9c4a28__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_INVERSE_TRANSFORM_TOP_TB.I_CLK)", 
                                                           "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 
                                                           268);
        TQ_INVERSE_TRANSFORM_TOP_TB__DOT____Vrepeat2 
            = (TQ_INVERSE_TRANSFORM_TOP_TB__DOT____Vrepeat2 
               - (IData)(1U));
    }
    VL_WRITEF("[%0t] %%Fatal: TQ_INVERSE_TRANSFORM_TOP_TB.sv:269: Assertion failed in %NTQ_INVERSE_TRANSFORM_TOP_TB: [FAIL] Watchdog timeout completed=%0d/16 input_tu=%0d protocol_error=%b\n",
              64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
              32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc,
              32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc,
              1,(IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR));
    VL_STOP_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 269, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___dump_triggers__act(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_triggers__act(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_triggers__act\n"); );
    // Body
    CData/*0:0*/ __Vtrigcurrexpr_h9b5f9cd8__0;
    __Vtrigcurrexpr_h9b5f9cd8__0 = 0;
    __Vtrigcurrexpr_h9b5f9cd8__0 = (0x10U == vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc);
    vlSelf->__VactTriggered.set(0U, vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product.neq(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product__1));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready__1)));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready__1)));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready__1)));
    vlSelf->__VactTriggered.set(4U, vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product.neq(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product__1));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready__1)));
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready__1)));
    vlSelf->__VactTriggered.set(7U, ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready__1)));
    vlSelf->__VactTriggered.set(8U, ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_CLK) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_CLK__0))));
    vlSelf->__VactTriggered.set(9U, (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_CLK) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_CLK__0))) 
                                     | ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN__0))));
    vlSelf->__VactTriggered.set(0xaU, ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN__0)));
    vlSelf->__VactTriggered.set(0xbU, ((IData)(__Vtrigcurrexpr_h9b5f9cd8__0) 
                                       != (IData)(vlSelf->__Vtrigprevexpr_h9b5f9cd8__0)));
    vlSelf->__VactTriggered.set(0xcU, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product__1.assign(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product);
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready__1 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready__1 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready__1 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product__1.assign(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product);
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready__1 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready__1 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d____PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready__1 
        = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_CLK__0 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_CLK;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN__0 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN;
    vlSelf->__Vtrigprevexpr_h9b5f9cd8__0 = __Vtrigcurrexpr_h9b5f9cd8__0;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
        vlSelf->__VactTriggered.set(5U, 1U);
        vlSelf->__VactTriggered.set(6U, 1U);
        vlSelf->__VactTriggered.set(7U, 1U);
        vlSelf->__VactTriggered.set(0xaU, 1U);
        vlSelf->__VactTriggered.set(0xbU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTQ_INVERSE_TRANSFORM_TOP_TB___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___act_sequent__TOP__0(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_result_fire 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_DATA_VALID) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_OUTPUT_READY));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_first_total_beats 
        = (0x1ffU & ((IData)(4U) << (7U & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_WIDTH) 
                                           + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_HEIGHT)))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_stage2_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_valid)) 
                 | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_OUTPUT_READY) 
                    & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hdd45bd79__0))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_allow_col 
        = ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR)) 
           & ((1U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_state)) 
              | ((0U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_state)) 
                 & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_ready) 
                    & ((3U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TRANSFORM_HOR)) 
                       & ((3U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TRANSFORM_VER)) 
                          & (3U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_COMPONENT))))))));
    if ((0U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_state))) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_size 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_HEIGHT;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_type 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TRANSFORM_VER;
    } else {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_size 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_height;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_type 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_ver;
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_final_result 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_result_fire) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_TU_LAST));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_stage1_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_valid)) 
                 | (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_stage2_ready)));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_in_valid 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA_VALID) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_allow_col));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_raw_ready 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_stage1_ready) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hdd45bd79__0));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_raw_fire 
        = ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.O_DATA_VALID) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_raw_ready));
}

VL_INLINE_OPT void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___act_sequent__TOP__1(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_INPUT_READY 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_allow_col) 
           & (IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.I_DATA_READY));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_in_fire 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA_VALID) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_INPUT_READY));
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
}

void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__0(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__1(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__0(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__2(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__3(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__4(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__5(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_comb__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__0(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_comb__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__1(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);

void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_act(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_act\n"); );
    // Body
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__0((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
        vlSelf->__Vm_traceActivity[3U] = 1U;
        VTQ_INVERSE_TRANSFORM_TOP_TB___024root___act_sequent__TOP__0(vlSelf);
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__1((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__0((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
        VTQ_INVERSE_TRANSFORM_TOP_TB___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__2((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__3((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__4((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__5((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__2((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__3((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__4((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__5((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
    }
    if ((0xeULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_comb__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__0((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
    }
    if ((0xe0ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_comb__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__0((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
    }
    if ((0x10eULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_comb__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__1((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
    }
    if ((0x1e0ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_comb__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__1((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
    }
}

VL_INLINE_OPT void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___nba_sequent__TOP__0(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_cycle;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_cycle = 0;
    IData/*31:0*/ __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat = 0;
    IData/*28:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v0;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v0;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v0 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v0;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v0;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v0 = 0;
    IData/*28:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v1;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v1;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v1 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v1;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v1;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v1 = 0;
    IData/*28:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v2;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v2;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v2 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v2;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v2;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v2 = 0;
    IData/*28:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v3;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v3;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v3 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v3;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v3;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v3 = 0;
    CData/*7:0*/ __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0 = 0;
    IData/*28:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v0;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v0;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v0 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v0;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v0;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v0 = 0;
    IData/*28:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v1;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v1;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v1 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v1;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v1;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v1 = 0;
    IData/*28:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v2;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v2;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v2 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v2;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v2;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v2 = 0;
    IData/*28:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v3;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v3;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v3 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v3;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v3;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v3 = 0;
    // Body
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0 = 0U;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_cycle 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_cycle;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v0 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v1 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v2 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v3 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v0 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v1 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v2 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v3 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v0 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v1 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v2 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v3 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v0 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v1 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v2 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v3 = 0U;
    vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_tc;
    vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_beat 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_beat;
    vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_active 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_tx_active;
    vlSelf->__Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA_VALID 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA_VALID;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat;
    if ((8U & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
         [1U])) {
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data
            [1U][3U];
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0 = 1U;
        __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr
            [1U][3U];
    }
    if ((4U & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
         [1U])) {
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data
            [1U][2U];
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0 = 1U;
        __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr
            [1U][2U];
    }
    if ((2U & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
         [1U])) {
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data
            [1U][1U];
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0 = 1U;
        __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr
            [1U][1U];
    }
    if ((1U & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
         [1U])) {
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data
            [1U][0U];
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0 = 1U;
        __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr
            [1U][0U];
    }
    if ((8U & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
         [0U])) {
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data
            [0U][3U];
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0 = 1U;
        __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr
            [0U][3U];
    }
    if ((4U & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
         [0U])) {
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data
            [0U][2U];
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0 = 1U;
        __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr
            [0U][2U];
    }
    if ((2U & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
         [0U])) {
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data
            [0U][1U];
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0 = 1U;
        __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr
            [0U][1U];
    }
    if ((1U & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
         [0U])) {
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data
            [0U][0U];
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0 = 1U;
        __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr
            [0U][0U];
    }
    if ((((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) 
          & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_stage1_ready)) 
         & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scale_in_valid))) {
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v0 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_rounded_data
            [0U];
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v0 = 1U;
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v1 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_rounded_data
            [1U];
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v1 = 1U;
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v2 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_rounded_data
            [2U];
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v2 = 1U;
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v3 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_rounded_data
            [3U];
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v3 = 1U;
    }
    if ((((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) 
          & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_stage1_ready)) 
         & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_scale_in_valid))) {
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v0 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_rounded_data
            [0U];
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v0 = 1U;
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v1 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_rounded_data
            [1U];
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v1 = 1U;
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v2 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_rounded_data
            [2U];
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v2 = 1U;
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v3 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_rounded_data
            [3U];
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v3 = 1U;
    }
    if ((((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) 
          & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_stage2_ready)) 
         & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_valid))) {
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v0 
            = (VL_LTS_III(29, 0x7fffU, vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                          [0U]) ? 0x7fffU : (VL_GTS_III(29, 0x1fff8000U, 
                                                        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                                                        [0U])
                                              ? 0x8000U
                                              : (0xffffU 
                                                 & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                                                 [0U])));
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v0 = 1U;
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v1 
            = (VL_LTS_III(29, 0x7fffU, vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                          [1U]) ? 0x7fffU : (VL_GTS_III(29, 0x1fff8000U, 
                                                        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                                                        [1U])
                                              ? 0x8000U
                                              : (0xffffU 
                                                 & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                                                 [1U])));
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v1 = 1U;
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v2 
            = (VL_LTS_III(29, 0x7fffU, vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                          [2U]) ? 0x7fffU : (VL_GTS_III(29, 0x1fff8000U, 
                                                        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                                                        [2U])
                                              ? 0x8000U
                                              : (0xffffU 
                                                 & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                                                 [2U])));
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v2 = 1U;
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v3 
            = (VL_LTS_III(29, 0x7fffU, vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                          [3U]) ? 0x7fffU : (VL_GTS_III(29, 0x1fff8000U, 
                                                        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                                                        [3U])
                                              ? 0x8000U
                                              : (0xffffU 
                                                 & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                                                 [3U])));
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v3 = 1U;
    }
    if ((((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) 
          & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_stage2_ready)) 
         & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_valid))) {
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v0 
            = (VL_LTS_III(29, 0x7fffU, vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                          [0U]) ? 0x7fffU : (VL_GTS_III(29, 0x1fff8000U, 
                                                        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                                                        [0U])
                                              ? 0x8000U
                                              : (0xffffU 
                                                 & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                                                 [0U])));
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v0 = 1U;
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v1 
            = (VL_LTS_III(29, 0x7fffU, vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                          [1U]) ? 0x7fffU : (VL_GTS_III(29, 0x1fff8000U, 
                                                        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                                                        [1U])
                                              ? 0x8000U
                                              : (0xffffU 
                                                 & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                                                 [1U])));
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v1 = 1U;
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v2 
            = (VL_LTS_III(29, 0x7fffU, vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                          [2U]) ? 0x7fffU : (VL_GTS_III(29, 0x1fff8000U, 
                                                        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                                                        [2U])
                                              ? 0x8000U
                                              : (0xffffU 
                                                 & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                                                 [2U])));
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v2 = 1U;
        __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v3 
            = (VL_LTS_III(29, 0x7fffU, vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                          [3U]) ? 0x7fffU : (VL_GTS_III(29, 0x1fff8000U, 
                                                        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                                                        [3U])
                                              ? 0x8000U
                                              : (0xffffU 
                                                 & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data
                                                 [3U])));
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v3 = 1U;
    }
    if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) {
        if (VL_UNLIKELY(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR)) {
            VL_WRITEF("[%0t] %%Fatal: TQ_INVERSE_TRANSFORM_TOP_TB.sv:193: Assertion failed in %NTQ_INVERSE_TRANSFORM_TOP_TB: [FAIL] Sticky 2D protocol error at cycle=%0d tu=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_cycle,
                      32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc);
            VL_STOP_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 193, "");
        }
        if (((((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA_VALID) 
               & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_INPUT_READY)) 
              & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_DATA_VALID)) 
             & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_OUTPUT_READY))) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_overlap_cycles 
                = ((IData)(1U) + vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_overlap_cycles);
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hold_valid) {
            if (VL_UNLIKELY((1U & ((((((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_DATA_VALID)) 
                                       | (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scaled_data 
                                          != vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_held_data)) 
                                      | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_TU_START) 
                                         != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_held_tu_start))) 
                                     | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_TU_LAST) 
                                        != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_held_tu_last))) 
                                    | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_VECTOR_LAST) 
                                       != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_held_vector_last))) 
                                   | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_tu_id) 
                                      != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_held_tu_id)))))) {
                VL_WRITEF("[%0t] %%Fatal: TQ_INVERSE_TRANSFORM_TOP_TB.sv:198: Assertion failed in %NTQ_INVERSE_TRANSFORM_TOP_TB: [FAIL] Output changed under stall tu=%0d beat=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc,
                          32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat);
                VL_STOP_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 198, "");
            }
        }
        if (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_DATA_VALID) 
             & (~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_OUTPUT_READY)))) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hold_valid = 1U;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_output_stall_count 
                = ((IData)(1U) + vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_output_stall_count);
            if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_TU_LAST) {
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_last_stall_count 
                    = ((IData)(1U) + vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_last_stall_count);
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_held_data 
                    = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scaled_data;
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_held_tu_start 
                    = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_TU_START;
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_held_tu_last = 1U;
            } else {
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_held_data 
                    = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scaled_data;
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_held_tu_start 
                    = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_TU_START;
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_held_tu_last = 0U;
            }
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_held_vector_last 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_VECTOR_LAST;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_held_tu_id 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_tu_id;
        } else {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hold_valid = 0U;
        }
        if (VL_UNLIKELY(((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_DATA_VALID) 
                         & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_OUTPUT_READY)))) {
            if (VL_UNLIKELY(VL_LTES_III(32, 0x10U, vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc))) {
                VL_WRITEF("[%0t] %%Fatal: TQ_INVERSE_TRANSFORM_TOP_TB.sv:213: Assertion failed in %NTQ_INVERSE_TRANSFORM_TOP_TB: [FAIL] Unexpected extra output\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 213, "");
            }
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__unnamedblk3__DOT__lane = 4U;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_output_fire_count 
                = ((IData)(1U) + vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_output_fire_count);
            if (VL_UNLIKELY((((((((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_tu_id) 
                                  != (0xffffU & ((IData)(0x64U) 
                                                 + vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc))) 
                                 | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_width) 
                                    != (3U & (VL_CLOG2_I(
                                                         vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w
                                                         [
                                                         (0xfU 
                                                          & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)]) 
                                              - (IData)(2U))))) 
                                | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_height) 
                                   != (3U & (VL_CLOG2_I(
                                                        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h
                                                        [
                                                        (0xfU 
                                                         & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)]) 
                                             - (IData)(2U))))) 
                               | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_hor) 
                                  != vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hmode
                                  [(0xfU & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)])) 
                              | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_ver) 
                                 != vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_vmode
                                 [(0xfU & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)])) 
                             | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_component) 
                                != vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_component
                                [(0xfU & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)])))) {
                VL_WRITEF("[%0t] %%Fatal: TQ_INVERSE_TRANSFORM_TOP_TB.sv:220: Assertion failed in %NTQ_INVERSE_TRANSFORM_TOP_TB: [FAIL] Metadata mismatch TU=%0d beat=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc,
                          32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat);
                VL_STOP_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 220, "");
            }
            if (VL_UNLIKELY(((((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_TU_START) 
                               != (0U == vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat)) 
                              | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_TU_LAST) 
                                 != (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat 
                                     == (VL_DIVS_III(32, 
                                                     VL_MULS_III(32, 
                                                                 vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w
                                                                 [
                                                                 (0xfU 
                                                                  & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)], 
                                                                 vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h
                                                                 [
                                                                 (0xfU 
                                                                  & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)]), (IData)(4U)) 
                                         - (IData)(1U))))) 
                             | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_VECTOR_LAST) 
                                != (VL_MODDIVS_III(32, vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat, 
                                                   VL_DIVS_III(32, 
                                                               vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w
                                                               [
                                                               (0xfU 
                                                                & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)], (IData)(4U))) 
                                    == (VL_DIVS_III(32, 
                                                    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w
                                                    [
                                                    (0xfU 
                                                     & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)], (IData)(4U)) 
                                        - (IData)(1U))))))) {
                VL_WRITEF("[%0t] %%Fatal: TQ_INVERSE_TRANSFORM_TOP_TB.sv:224: Assertion failed in %NTQ_INVERSE_TRANSFORM_TOP_TB: [FAIL] TU/VECTOR LAST mismatch TU=%0d beat=%0d got=%b/%b/%b\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc,
                          32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat,
                          1,(IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_TU_START),
                          1,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_VECTOR_LAST,
                          1,(IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_TU_LAST));
                VL_STOP_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 224, "");
            }
            if (VL_UNLIKELY(((0xffffU & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scaled_data)) 
                             != vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_golden_mem
                             [(0x3fffU & (VL_MULS_III(32, (IData)(0x400U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc) 
                                          + VL_MULS_III(32, (IData)(4U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat)))]))) {
                VL_WRITEF("[%0t] %%Fatal: TQ_INVERSE_TRANSFORM_TOP_TB.sv:229: Assertion failed in %NTQ_INVERSE_TRANSFORM_TOP_TB.unnamedblk3: [FAIL] TU=%0d y=%0d x=%0d actual=%0d golden=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc,
                          32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(4U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat), 
                                         vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w
                                         [(0xfU & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)]),
                          32,VL_MODDIVS_III(32, VL_MULS_III(32, (IData)(4U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat), 
                                            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w
                                            [(0xfU 
                                              & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)]),
                          16,(0xffffU & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scaled_data)),
                          16,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_golden_mem
                          [(0x3fffU & (VL_MULS_III(32, (IData)(0x400U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc) 
                                       + VL_MULS_III(32, (IData)(4U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat)))]);
                VL_STOP_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 229, "");
            }
            if (VL_UNLIKELY(((0xffffU & (IData)((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scaled_data 
                                                 >> 0x10U))) 
                             != vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_golden_mem
                             [(0x3fffU & ((IData)(1U) 
                                          + (VL_MULS_III(32, (IData)(0x400U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc) 
                                             + VL_MULS_III(32, (IData)(4U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat))))]))) {
                VL_WRITEF("[%0t] %%Fatal: TQ_INVERSE_TRANSFORM_TOP_TB.sv:229: Assertion failed in %NTQ_INVERSE_TRANSFORM_TOP_TB.unnamedblk3: [FAIL] TU=%0d y=%0d x=%0d actual=%0d golden=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc,
                          32,VL_DIVS_III(32, ((IData)(1U) 
                                              + VL_MULS_III(32, (IData)(4U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat)), 
                                         vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w
                                         [(0xfU & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)]),
                          32,VL_MODDIVS_III(32, ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat)), 
                                            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w
                                            [(0xfU 
                                              & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)]),
                          16,(0xffffU & (IData)((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scaled_data 
                                                 >> 0x10U))),
                          16,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_golden_mem
                          [(0x3fffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(0x400U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc) 
                                          + VL_MULS_III(32, (IData)(4U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat))))]);
                VL_STOP_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 229, "");
            }
            if (VL_UNLIKELY(((0xffffU & (IData)((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scaled_data 
                                                 >> 0x20U))) 
                             != vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_golden_mem
                             [(0x3fffU & ((IData)(2U) 
                                          + (VL_MULS_III(32, (IData)(0x400U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc) 
                                             + VL_MULS_III(32, (IData)(4U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat))))]))) {
                VL_WRITEF("[%0t] %%Fatal: TQ_INVERSE_TRANSFORM_TOP_TB.sv:229: Assertion failed in %NTQ_INVERSE_TRANSFORM_TOP_TB.unnamedblk3: [FAIL] TU=%0d y=%0d x=%0d actual=%0d golden=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc,
                          32,VL_DIVS_III(32, ((IData)(2U) 
                                              + VL_MULS_III(32, (IData)(4U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat)), 
                                         vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w
                                         [(0xfU & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)]),
                          32,VL_MODDIVS_III(32, ((IData)(2U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat)), 
                                            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w
                                            [(0xfU 
                                              & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)]),
                          16,(0xffffU & (IData)((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scaled_data 
                                                 >> 0x20U))),
                          16,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_golden_mem
                          [(0x3fffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(0x400U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc) 
                                          + VL_MULS_III(32, (IData)(4U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat))))]);
                VL_STOP_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 229, "");
            }
            if (VL_UNLIKELY(((0xffffU & (IData)((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scaled_data 
                                                 >> 0x30U))) 
                             != vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_golden_mem
                             [(0x3fffU & ((IData)(3U) 
                                          + (VL_MULS_III(32, (IData)(0x400U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc) 
                                             + VL_MULS_III(32, (IData)(4U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat))))]))) {
                VL_WRITEF("[%0t] %%Fatal: TQ_INVERSE_TRANSFORM_TOP_TB.sv:229: Assertion failed in %NTQ_INVERSE_TRANSFORM_TOP_TB.unnamedblk3: [FAIL] TU=%0d y=%0d x=%0d actual=%0d golden=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc,
                          32,VL_DIVS_III(32, ((IData)(3U) 
                                              + VL_MULS_III(32, (IData)(4U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat)), 
                                         vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w
                                         [(0xfU & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)]),
                          32,VL_MODDIVS_III(32, ((IData)(3U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat)), 
                                            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w
                                            [(0xfU 
                                              & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)]),
                          16,(0xffffU & (IData)((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scaled_data 
                                                 >> 0x30U))),
                          16,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_golden_mem
                          [(0x3fffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(0x400U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc) 
                                          + VL_MULS_III(32, (IData)(4U), vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat))))]);
                VL_STOP_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_TRANSFORM_TOP_TB.sv", 229, "");
            }
            VL_WRITEF(" [RAW RESIDUAL] TU=%0d beat=%0d X=%0d,%0d,%0d,%0d\n",
                      32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc,
                      32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat,
                      16,(0xffffU & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scaled_data)),
                      16,(0xffffU & (IData)((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scaled_data 
                                             >> 0x10U))),
                      16,(0xffffU & (IData)((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scaled_data 
                                             >> 0x20U))),
                      16,(0xffffU & (IData)((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scaled_data 
                                             >> 0x30U))));
            if (VL_UNLIKELY((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat 
                             == (VL_DIVS_III(32, VL_MULS_III(32, 
                                                             vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w
                                                             [
                                                             (0xfU 
                                                              & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)], 
                                                             vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h
                                                             [
                                                             (0xfU 
                                                              & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)]), (IData)(4U)) 
                                 - (IData)(1U))))) {
                VL_WRITEF("[PASS] TU=%0d W=%0d H=%0d MODE(H,V)=(%0#,%0#)\n",
                          32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc,
                          32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_w
                          [(0xfU & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)],
                          32,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_h
                          [(0xfU & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)],
                          2,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hmode
                          [(0xfU & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)],
                          2,vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_vmode
                          [(0xfU & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc)]);
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc 
                    = ((IData)(1U) + vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc);
                __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat = 0U;
            } else {
                __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat 
                    = ((IData)(1U) + vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat);
            }
        }
    } else {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_output_fire_count = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_output_stall_count = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_last_stall_count = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_overlap_cycles = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_tc = 0U;
        __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_hold_valid = 0U;
    }
    if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) {
        if (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_stage2_ready) 
             & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_valid))) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_tu_start 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_start;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_tu_last 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_last;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_vector_last 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_vector_last;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_tu_id 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_id;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_component 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_component;
        }
        if (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_stage2_ready) 
             & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_valid))) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_tu_start 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_start;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_tu_last 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_last;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_vector_last 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_vector_last;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_tu_id 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_id;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_component 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_component;
        }
        __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_cycle 
            = ((IData)(1U) + vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_cycle);
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_OUTPUT_READY 
            = (VL_GTS_III(32, 0xbU, VL_MODDIVS_III(32, vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_cycle, (IData)(0x11U))) 
               & VL_LTES_III(32, 7U, VL_MODDIVS_III(32, vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_cycle, (IData)(0x71U))));
        if (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_stage1_ready) 
             & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scale_in_valid))) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_start = 0U;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_last = 0U;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_vector_last 
                = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.O_DATA_LAST;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_id 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_tu_id;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_component 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_component;
        }
        if (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_stage1_ready) 
             & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_scale_in_valid))) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_start = 0U;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_last = 0U;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_vector_last 
                = vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.O_DATA_LAST;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_tu_id 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_tu_id;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_component 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_component;
        }
    } else {
        __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_cycle = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_OUTPUT_READY = 0U;
    }
    if ((1U & (~ (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
                  [1U] >> 3U)))) {
        if ((8U & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_en
             [1U])) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__O_RD_DATA 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory
                [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_read_bank_addr];
        }
    }
    if ((1U & (~ (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
                  [1U] >> 2U)))) {
        if ((4U & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_en
             [1U])) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__O_RD_DATA 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory
                [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_read_bank_addr];
        }
    }
    if ((1U & (~ (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
                  [1U] >> 1U)))) {
        if ((2U & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_en
             [1U])) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__O_RD_DATA 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory
                [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_read_bank_addr];
        }
    }
    if ((1U & (~ vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
               [1U]))) {
        if ((1U & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_en
             [1U])) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__O_RD_DATA 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory
                [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_read_bank_addr];
        }
    }
    if ((1U & (~ (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
                  [0U] >> 3U)))) {
        if ((8U & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_en
             [0U])) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__O_RD_DATA 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory
                [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_read_bank_addr];
        }
    }
    if ((1U & (~ (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
                  [0U] >> 2U)))) {
        if ((4U & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_en
             [0U])) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__O_RD_DATA 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory
                [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_read_bank_addr];
        }
    }
    if ((1U & (~ (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
                  [0U] >> 1U)))) {
        if ((2U & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_en
             [0U])) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__O_RD_DATA 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory
                [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_read_bank_addr];
        }
    }
    if ((1U & (~ vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
               [0U]))) {
        if ((1U & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_en
             [0U])) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__O_RD_DATA 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory
                [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_read_bank_addr];
        }
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data[0U] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v0;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v1) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data[1U] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v1;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v2) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data[2U] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v2;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v3) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data[3U] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v3;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data[0U] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v0;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v1) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data[1U] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v1;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v2) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data[2U] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v2;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v3) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data[3U] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v3;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data[0U] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v0;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v1) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data[1U] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v1;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v2) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data[2U] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v2;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v3) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data[3U] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_data__v3;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data[0U] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v0;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v1) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data[1U] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v1;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v2) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data[2U] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v2;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v3) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data[3U] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data__v3;
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat 
        = __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_rx_beat;
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory[__Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory[__Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory[__Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory[__Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory[__Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__DOT__r_memory__v0;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory[__Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__DOT__r_memory__v0;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory[__Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__DOT__r_memory__v0;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory[__Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__DOT__r_memory__v0;
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scaled_data 
        = (((QData)((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data
                            [3U])) << 0x30U) | (((QData)((IData)(
                                                                 ((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data
                                                                   [2U] 
                                                                   << 0x10U) 
                                                                  | vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data
                                                                  [1U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_data
                                                                  [0U]))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_scaled_data 
        = (((QData)((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data
                            [3U])) << 0x30U) | (((QData)((IData)(
                                                                 ((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data
                                                                   [2U] 
                                                                   << 0x10U) 
                                                                  | vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data
                                                                  [1U]))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_data
                                                                  [0U]))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data[1U][3U] 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data[1U][2U] 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data[1U][1U] 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data[1U][0U] 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data[0U][3U] 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data[0U][2U] 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data[0U][1U] 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data[0U][0U] 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__O_RD_DATA;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_cycle 
        = __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__r_cycle;
}

VL_INLINE_OPT void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___nba_sequent__TOP__2(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___nba_sequent__TOP__2\n"); );
    // Init
    SData/*8:0*/ __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_input_count;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_input_count = 0;
    SData/*8:0*/ __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_raw_count;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_raw_count = 0;
    SData/*8:0*/ __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_write_count;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_write_count = 0;
    SData/*8:0*/ __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_input_count;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_input_count = 0;
    SData/*8:0*/ __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_raw_count;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_raw_count = 0;
    SData/*8:0*/ __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_result_count;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_result_count = 0;
    CData/*0:0*/ __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v0;
    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v0;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_tu_id__v0;
    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_tu_id__v0 = 0;
    SData/*15:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_tu_id__v0;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_tu_id__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_width__v0;
    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_width__v0 = 0;
    CData/*1:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_width__v0;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_width__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_height__v0;
    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_height__v0 = 0;
    CData/*1:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_height__v0;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_height__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_hor__v0;
    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_hor__v0 = 0;
    CData/*1:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_hor__v0;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_hor__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_ver__v0;
    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_ver__v0 = 0;
    CData/*1:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_ver__v0;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_ver__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_component__v0;
    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_component__v0 = 0;
    CData/*1:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_component__v0;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_component__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v1;
    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v1;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v1 = 0;
    CData/*0:0*/ __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_active;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_active = 0;
    CData/*0:0*/ __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v2;
    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v2;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v2 = 0;
    CData/*4:0*/ __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_row;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_row = 0;
    CData/*2:0*/ __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_col_group;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_col_group = 0;
    SData/*8:0*/ __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_issue_count;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_issue_count = 0;
    SData/*8:0*/ __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_accept_count;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_accept_count = 0;
    SData/*8:0*/ __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_total_beats;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_total_beats = 0;
    CData/*0:0*/ __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v3;
    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v3;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v4;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v4 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v5;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v5 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v6;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v6 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_tu_id__v1;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_tu_id__v1 = 0;
    CData/*0:0*/ __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_head;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_head = 0;
    CData/*0:0*/ __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_queue__v0;
    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_queue__v0 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_queue__v0;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_queue__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_queue__v0;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_queue__v0 = 0;
    CData/*1:0*/ __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_count;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_count = 0;
    CData/*0:0*/ __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_data__v0;
    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_data__v0 = 0;
    QData/*63:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_data__v0;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_data__v0;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_data__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_vector_last__v0;
    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_vector_last__v0 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_vector_last__v0;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_vector_last__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_start__v0;
    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_start__v0 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_start__v0;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_start__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_last__v0;
    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_last__v0 = 0;
    CData/*0:0*/ __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_last__v0;
    __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_last__v0 = 0;
    // Body
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_head 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_head;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_queue__v0 = 0U;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_count 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_count;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_data__v0 = 0U;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_accept_count 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_accept_count;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_col_group 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_col_group;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_row 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_row;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_total_beats 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_total_beats;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_issue_count 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_issue_count;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_active 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_active;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v1 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v2 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v3 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v4 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v5 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v6 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_tu_id__v1 = 0U;
    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v0 = 0U;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_raw_count 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_raw_count;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_raw_count 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_raw_count;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_input_count 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_input_count;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_input_count 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_input_count;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_write_count 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_write_count;
    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_result_count 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_result_count;
    if ((1U & (~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN)))) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__unnamedblk6__DOT__b = 2U;
    }
    if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_outstanding_tus 
            = (7U & ((2U == (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_first) 
                              << 1U) | (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_final_result)))
                      ? ((IData)(1U) + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_outstanding_tus))
                      : ((1U == (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_first) 
                                  << 1U) | (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_final_result)))
                          ? ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_outstanding_tus) 
                             - (IData)(1U)) : (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_outstanding_tus))));
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_fifo_pop) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_head 
                = (1U & (~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_head)));
        }
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_count 
            = (3U & ((2U == (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_final) 
                              << 1U) | (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_ready_pop)))
                      ? ((IData)(1U) + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_count))
                      : ((1U == (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_final) 
                                  << 1U) | (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_ready_pop)))
                          ? ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_count) 
                             - (IData)(1U)) : (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_count))));
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_final) {
            __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_queue__v0 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id;
            __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_queue__v0 = 1U;
            __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_queue__v0 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_tail;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_tail 
                = (1U & (~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_tail)));
        }
        __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_count 
            = (3U & ((2U == (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_valid) 
                              << 1U) | (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_fifo_pop)))
                      ? ((IData)(1U) + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_count))
                      : ((1U == (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_valid) 
                                  << 1U) | (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_fifo_pop)))
                          ? ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_count) 
                             - (IData)(1U)) : (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_count))));
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_valid) {
            __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_data__v0 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_pipe_data;
            __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_data__v0 = 1U;
            __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_data__v0 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tail;
            __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_vector_last__v0 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_vector_last;
            __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_vector_last__v0 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tail;
            __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_start__v0 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_tu_start;
            __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_start__v0 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tail;
            __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_last__v0 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_tu_last;
            __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_last__v0 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tail;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tail 
                = (1U & (~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tail)));
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_read_issue) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_row_low 
                = (3U & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_row));
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_buffer_id 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_tu_start 
                = (0U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_issue_count));
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_tu_last 
                = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_issue_count) 
                   == (0x1ffU & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_total_beats) 
                                 - (IData)(1U))));
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_vector_last 
                = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_col_group) 
                   == (0xfU & (((IData)(1U) << vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_width
                                [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id]) 
                               - (IData)(1U))));
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_ready_pop) {
            __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_head 
                = (1U & (~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_head)));
            __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_active = 1U;
            __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v2 = 1U;
            __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v2 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_queue
                [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_head];
            __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_row = 0U;
            __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_col_group = 0U;
            __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_issue_count = 0U;
            __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_accept_count = 0U;
            __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_total_beats 
                = (0x1ffU & ((IData)(4U) << (7U & (
                                                   vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_width
                                                   [
                                                   vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_queue
                                                   [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_head]] 
                                                   + 
                                                   vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_height
                                                   [
                                                   vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_queue
                                                   [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_head]]))));
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_queue
                [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_head];
        } else if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_active) {
            if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_read_issue) {
                __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_issue_count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_issue_count)));
                if (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_col_group) 
                     == (0xfU & (((IData)(1U) << vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_width
                                  [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id]) 
                                 - (IData)(1U))))) {
                    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_row 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_row)));
                    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_col_group = 0U;
                } else {
                    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_col_group 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_col_group)));
                }
            }
            if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_fifo_pop) {
                __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_accept_count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_accept_count)));
                if (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_accept_count) 
                     == (0x1ffU & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_total_beats) 
                                   - (IData)(1U))))) {
                    __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_active = 0U;
                    __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v3 = 1U;
                    __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v3 
                        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id;
                }
            }
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_stage2_ready) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_valid 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_valid;
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_stage2_ready) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_valid 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_valid;
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_error) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR = 1U;
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_fire) {
            if (((((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_active)) 
                   & (0U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_write_count))) 
                  | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_active) 
                     & (0U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_write_count)))) 
                 | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_last) 
                    != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_final)))) {
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_error = 1U;
            }
            if ((1U & (~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_active)))) {
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_buffer_id 
                    = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id;
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_active = 1U;
                __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v0 = 1U;
                __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v0 
                    = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id;
                __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_tu_id__v0 
                    = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_tu_id;
                __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_tu_id__v0 
                    = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id;
                __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_width__v0 
                    = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_width;
                __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_width__v0 
                    = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id;
                __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_height__v0 
                    = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_height;
                __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_height__v0 
                    = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id;
                __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_hor__v0 
                    = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_hor;
                __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_hor__v0 
                    = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id;
                __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_ver__v0 
                    = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_ver;
                __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_ver__v0 
                    = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id;
                __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_component__v0 
                    = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_component;
                __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_component__v0 
                    = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id;
            }
            if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_final) {
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_row_group = 0U;
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_col = 0U;
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_active = 0U;
                __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v1 = 1U;
                __Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v1 
                    = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id;
            } else if (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_row_group) 
                        == (0xfU & (((IData)(1U) << (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_height)) 
                                    - (IData)(1U))))) {
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_row_group = 0U;
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_col 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col)));
            } else {
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_row_group 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_row_group)));
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_col 
                    = (0x1fU & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col));
            }
        }
        if ((((0U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_state)) 
              & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA_VALID)) 
             & (((3U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TRANSFORM_HOR)) 
                 | (3U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TRANSFORM_VER))) 
                | (3U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_COMPONENT))))) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR = 1U;
        }
        if ((((0U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_state)) 
              & (0U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_count))) 
             & (~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_valid_type)))) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR = 1U;
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_first) {
            __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_input_count = 1U;
            __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_raw_count = 0U;
            __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_write_count = 0U;
            if ((1U & ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_START)) 
                       | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_LAST) 
                          != (1U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_first_total_beats)))))) {
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR = 1U;
            }
        } else if (((1U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_state)) 
                    & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_in_fire))) {
            __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_input_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_input_count)));
            if (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_START) 
                 | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_LAST) 
                    != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_final_input)))) {
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR = 1U;
            }
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_raw_fire) {
            __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_raw_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_raw_count)));
            if ((((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_raw_count) 
                  >= (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_total_beats)) 
                 | ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.O_DATA_LAST) 
                    != (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_raw_count) 
                         & (((IData)(1U) << (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_height)) 
                            - (IData)(1U))) == (0x1ffU 
                                                & (((IData)(1U) 
                                                    << (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_height)) 
                                                   - (IData)(1U))))))) {
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR = 1U;
            }
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_mem_write_fire) {
            __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_write_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_write_count)));
            if (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_write_count) 
                 >= (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_total_beats))) {
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR = 1U;
            }
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_final_write) {
            if ((((0x1ffU & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_raw_count) 
                             + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_raw_fire))) 
                  != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_total_beats)) 
                 | ((0x1ffU & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_input_count) 
                               + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_in_fire))) 
                    != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_total_beats)))) {
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR = 1U;
            }
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_first) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_total_beats 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_first_total_beats;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_state = 1U;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_tu_id 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_ID;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_hor 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TRANSFORM_HOR;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_component 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_COMPONENT;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_width 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_WIDTH;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_height 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_HEIGHT;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_ver 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TRANSFORM_VER;
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_first) {
            __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_input_count = 1U;
            __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_raw_count = 0U;
            __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_result_count = 0U;
            if ((1U & (((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_start)) 
                        | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_last) 
                           != (1U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_first_total_beats)))) 
                       | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_vector_last) 
                          != (0U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_width)))))) {
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR = 1U;
            }
        } else if (((1U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_state)) 
                    & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_fifo_pop))) {
            __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_input_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_input_count)));
            if ((((((((((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_start) 
                        | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_last) 
                           != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_final_input))) 
                       | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_vector_last) 
                          != (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_input_count) 
                               & (((IData)(1U) << (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_width)) 
                                  - (IData)(1U))) == 
                              (0x1ffU & (((IData)(1U) 
                                          << (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_width)) 
                                         - (IData)(1U)))))) 
                      | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_id) 
                         != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_tu_id))) 
                     | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_width) 
                        != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_width))) 
                    | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_height) 
                       != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_height))) 
                   | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_hor) 
                      != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_hor))) 
                  | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_ver) 
                     != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_ver))) 
                 | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_component) 
                    != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_component)))) {
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR = 1U;
            }
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_raw_fire) {
            __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_raw_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_raw_count)));
            if ((((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_raw_count) 
                  >= (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_total_beats)) 
                 | ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.O_DATA_LAST) 
                    != (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_raw_count) 
                         & (((IData)(1U) << (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_width)) 
                            - (IData)(1U))) == (0x1ffU 
                                                & (((IData)(1U) 
                                                    << (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_width)) 
                                                   - (IData)(1U))))))) {
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR = 1U;
            }
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_result_fire) {
            __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_result_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_result_count)));
            if (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_result_count) 
                 >= (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_total_beats))) {
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR = 1U;
            }
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_final_result) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__unnamedblk7__DOT__b = 2U;
            if ((((0x1ffU & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_raw_count) 
                             + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_raw_fire))) 
                  != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_total_beats)) 
                 | ((0x1ffU & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_input_count) 
                               + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_fifo_pop))) 
                    != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_total_beats)))) {
                vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR = 1U;
            }
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_stage1_ready) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_valid 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scale_in_valid;
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_stage1_ready) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_valid 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_scale_in_valid;
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_first) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_ver 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_ver;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_height 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_height;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_total_beats 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_first_total_beats;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_width 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_width;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_hor 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_hor;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_state = 1U;
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_final_input) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_state = 2U;
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_final_result) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_state = 0U;
            if (((4U == vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state
                  [0U]) & (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_tu_id
                           [0U] == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_tu_id)))) {
                __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v4 = 1U;
            }
            if (((4U == vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state
                  [1U]) & (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_tu_id
                           [1U] == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_tu_id)))) {
                __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v5 = 1U;
            }
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_first) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_component 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_component;
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_tu_id 
                = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_id;
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_final_input) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_state = 2U;
        }
        if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_final_write) {
            vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_state = 0U;
        }
    } else {
        __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_head = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_outstanding_tus = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_head = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_count = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_tail = 0U;
        __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_count = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tail = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_row_low = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_valid = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_valid = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_row_group = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_col = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_buffer_id = 0U;
        __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_write_count = 0U;
        __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_result_count = 0U;
        __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_input_count = 0U;
        __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_raw_count = 0U;
        __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_input_count = 0U;
        __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_raw_count = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_tu_start = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_tu_last = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_vector_last = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_valid = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_valid = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_ver = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_height = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_total_beats = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_total_beats = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_width = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_hor = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_state = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_state = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_active = 0U;
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v6 = 1U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_error = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_buffer_id = 0U;
        __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_active = 0U;
        __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_row = 0U;
        __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_col_group = 0U;
        __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_issue_count = 0U;
        __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_accept_count = 0U;
        __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_total_beats = 0U;
        __Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_tu_id__v1 = 1U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_component = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_tu_id = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_tu_id = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_hor = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_component = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_width = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_height = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_ver = 0U;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_data__v0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_last[__Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_last__v0] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_last__v0;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_start[__Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_start__v0] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_start__v0;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_vector_last[__Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_vector_last__v0] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_vector_last__v0;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_data[__Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_data__v0] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_data__v0;
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_raw_count 
        = __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_raw_count;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_raw_count 
        = __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_raw_count;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_input_count 
        = __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_input_count;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_input_count 
        = __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_input_count;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_result_count 
        = __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_result_count;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_count 
        = __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_count;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_valid 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_RESETN) 
           && (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_read_issue));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_vector_last = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_start = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_last = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data = 0ULL;
    if ((0U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_count))) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_vector_last 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_vector_last
            [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_head];
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_start 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_start
            [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_head];
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_last 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_tu_last
            [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_head];
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_data 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_data
            [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_head];
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_accept_count 
        = __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_accept_count;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_col_group 
        = __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_col_group;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_row 
        = __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_row;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_write_count 
        = __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_write_count;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_total_beats 
        = __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_total_beats;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_issue_count 
        = __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_issue_count;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_active 
        = __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_active;
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_ver[__Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_ver__v0] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_ver__v0;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_tu_id[__Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_tu_id__v0] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_tu_id__v0;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_component[__Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_component__v0] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_component__v0;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_height[__Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_height__v0] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_height__v0;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state[__Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v0] = 1U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_hor[__Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_hor__v0] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_hor__v0;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_width[__Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_width__v0] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_width__v0;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v1) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state[__Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v1] = 2U;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v2) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state[__Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v2] = 3U;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v3) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state[__Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v3] = 4U;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v4) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state[0U] = 0U;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v5) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state[1U] = 0U;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state__v6) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state[0U] = 0U;
    }
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_tu_id__v1) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_ver[0U] = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_ver[1U] = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_tu_id[0U] = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_tu_id[1U] = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_component[0U] = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_component[1U] = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_height[0U] = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_height[1U] = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state[1U] = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_hor[0U] = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_hor[1U] = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_width[0U] = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_width[1U] = 0U;
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hdd45bd79__0 
        = ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR)) 
           & (0U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_state)));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hbca79e53__0 
        = ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR)) 
           & (0U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_state)));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_last 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_write_count) 
           == (0x1ffU & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_total_beats) 
                         - (IData)(1U))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_free_buffer_id = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_free_exists = 0U;
    if ((0U == vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state
         [0U])) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_free_buffer_id = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_free_exists = 1U;
    } else if ((0U == vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_state
                [1U])) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_free_buffer_id = 1U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_free_exists = 1U;
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_DATA_VALID 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_valid) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hdd45bd79__0));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_valid 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_valid) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hbca79e53__0));
    if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_active) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_buffer_id;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_width 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_width
            [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_buffer_id];
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_height 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_height
            [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_buffer_id];
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_col;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_row_group 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_row_group;
    } else {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_free_buffer_id;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_width 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_width;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_height 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_height;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col = 0U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_row_group = 0U;
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_head 
        = __Vdly__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_head;
    if (__Vdlyvset__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_queue__v0) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_queue[__Vdlyvdim0__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_queue__v0] 
            = __Vdlyvval__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_queue__v0;
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_ready_pop 
        = ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_active)) 
           & ((0U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_ready_count)) 
              & ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_valid)) 
                 & (0U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_count)))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_TU_START 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_DATA_VALID) 
           & (0U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_result_count)));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_VECTOR_LAST 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_DATA_VALID) 
           & (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_result_count) 
               & (((IData)(1U) << (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_width)) 
                  - (IData)(1U))) == (0x1ffU & (((IData)(1U) 
                                                 << (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_width)) 
                                                - (IData)(1U)))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_TU_LAST 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_DATA_VALID) 
           & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_result_count) 
              == (0x1ffU & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_total_beats) 
                            - (IData)(1U)))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_id 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_tu_id
        [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id];
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_ver 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_ver
        [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id];
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_read_bank_addr 
        = (0xffU & (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_row) 
                     << vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_width
                     [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id]) 
                    + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_col_group)));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_height 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_height
        [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id];
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_component 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_component
        [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id];
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_width 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_width
        [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id];
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_hor 
        = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_buffer_hor
        [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_rd_buffer_id];
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_ready 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_wr_active) 
           | (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_free_exists));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_fire 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_valid) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_ready));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_final 
        = (((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_fire) 
            & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col) 
               == (0x3fU & (((IData)(4U) << (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_width)) 
                            - (IData)(1U))))) & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_row_group) 
                                                 == 
                                                 (0xfU 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_height)) 
                                                     - (IData)(1U)))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_first_total_beats 
        = (0x1ffU & ((IData)(4U) << (7U & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_width) 
                                           + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_height)))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_valid_type 
        = ((3U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_hor)) 
           & (3U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_component)));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en[0U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en[1U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[0U][0U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[0U][1U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[0U][2U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[0U][3U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[1U][0U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[1U][1U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[1U][2U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[1U][3U] = 0U;
    if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_fire) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__unnamedblk3__DOT__lane = 4U;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id] 
            = (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
               [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id] 
               | (0xfU & ((IData)(1U) << (3U & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col)))));
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id] 
            = (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
               [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id] 
               | (0xfU & ((IData)(1U) << (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col))))));
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id] 
            = (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
               [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id] 
               | (0xfU & ((IData)(1U) << (3U & ((IData)(2U) 
                                                + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col))))));
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id] 
            = (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_en
               [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id] 
               | (0xfU & ((IData)(1U) << (3U & ((IData)(3U) 
                                                + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col))))));
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id][(3U 
                                                                                & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col))] 
            = (0xffU & ((((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_row_group) 
                          << 2U) << (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_width)) 
                        + VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col), 2U)));
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id][(3U 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col)))] 
            = (0xffU & ((((IData)(1U) + ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_row_group) 
                                         << 2U)) << (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_width)) 
                        + VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col), 2U)));
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id][(3U 
                                                                                & ((IData)(2U) 
                                                                                + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col)))] 
            = (0xffU & ((((IData)(2U) + ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_row_group) 
                                         << 2U)) << (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_width)) 
                        + VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col), 2U)));
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_addr[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id][(3U 
                                                                                & ((IData)(3U) 
                                                                                + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col)))] 
            = (0xffU & ((((IData)(3U) + ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_row_group) 
                                         << 2U)) << (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_width)) 
                        + VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col), 2U)));
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_mem_write_fire 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_valid) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_ready));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_stage2_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage2_valid)) 
                 | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_ready) 
                    & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hbca79e53__0))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_allow_row 
        = ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR)) 
           & ((1U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_state)) 
              | ((0U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_state)) 
                 & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_valid_type))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_final_write 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_mem_write_fire) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_last));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_stage1_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__r_stage1_valid)) 
                 | (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_stage2_ready)));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_in_valid 
        = ((0U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_count)) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_allow_row));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_raw_ready 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_scaling__DOT__u_inv_scaling__DOT__w_stage1_ready) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hbca79e53__0));
}

VL_INLINE_OPT void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___nba_sequent__TOP__3(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_scale_in_valid 
        = ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.O_DATA_VALID) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hbca79e53__0));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_col_raw_fire 
        = ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.O_DATA_VALID) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_raw_ready));
    if ((0U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_state))) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_size 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_width;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_type 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_rd_hor;
    } else {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_size 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_width;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_type 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_row_hor;
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_scale_in_valid 
        = ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.O_DATA_VALID) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hdd45bd79__0));
}

VL_INLINE_OPT void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___nba_sequent__TOP__4(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_fifo_pop 
        = ((0U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_fifo_count)) 
           & ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.I_DATA_READY) 
              & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_allow_row)));
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

VL_INLINE_OPT void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___nba_comb__TOP__0(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_pipe_data = 0ULL;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_pipe_data 
        = ((0xffffffff00000000ULL & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_pipe_data) 
           | (IData)((IData)(((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data
                               [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_buffer_id]
                               [(3U & ((IData)(1U) 
                                       + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_row_low)))] 
                               << 0x10U) | vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data
                              [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_buffer_id]
                              [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_row_low]))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_pipe_data 
        = ((0xffffffffULL & vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_pipe_data) 
           | ((QData)((IData)(((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data
                                [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_buffer_id]
                                [(3U & ((IData)(3U) 
                                        + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_row_low)))] 
                                << 0x10U) | vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_rd_bank_data
                               [vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_buffer_id]
                               [(3U & ((IData)(2U) 
                                       + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__r_pipe_row_low)))]))) 
              << 0x20U));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_stage2_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage2_valid)) 
                 | ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_OUTPUT_READY) 
                    & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hdd45bd79__0))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_result_fire 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_DATA_VALID) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_OUTPUT_READY));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[0U][0U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[0U][1U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[0U][2U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[0U][3U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[1U][0U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[1U][1U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[1U][2U] = 0U;
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[1U][3U] = 0U;
    if (vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_fire) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id][(3U 
                                                                                & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col))] 
            = (0xffffU & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_scaled_data));
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id][(3U 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col)))] 
            = (0xffffU & (IData)((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_scaled_data 
                                  >> 0x10U)));
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id][(3U 
                                                                                & ((IData)(2U) 
                                                                                + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col)))] 
            = (0xffffU & (IData)((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_scaled_data 
                                  >> 0x20U)));
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_wr_bank_data[vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_buffer_id][(3U 
                                                                                & ((IData)(3U) 
                                                                                + (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_transpose_memory__DOT__w_write_col)))] 
            = (0xffffU & (IData)((vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_scaled_data 
                                  >> 0x30U)));
    }
    if ((0U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_state))) {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_size 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TU_HEIGHT;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_type 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TRANSFORM_VER;
    } else {
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_size 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_height;
        vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_type 
            = vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_ver;
    }
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_allow_col 
        = ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_PROTOCOL_ERROR)) 
           & ((1U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_state)) 
              | ((0U == (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__r_col_state)) 
                 & ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_mem_wr_ready) 
                    & ((3U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TRANSFORM_HOR)) 
                       & ((3U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_TRANSFORM_VER)) 
                          & (3U != (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_COMPONENT))))))));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_stage1_ready 
        = (1U & ((~ (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__r_stage1_valid)) 
                 | (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_stage2_ready)));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_final_result 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_result_fire) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_TU_LAST));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_col_in_valid 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA_VALID) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_allow_col));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_raw_ready 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_scaling__DOT__u_inv_scaling__DOT__w_stage1_ready) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT____VdfgTmp_hdd45bd79__0));
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_row_raw_fire 
        = ((IData)(vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.O_DATA_VALID) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__w_row_raw_ready));
}

VL_INLINE_OPT void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___nba_comb__TOP__1(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___nba_comb__TOP__1\n"); );
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
    vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_controller__DOT__w_in_fire 
        = ((IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__I_DATA_VALID) 
           & (IData)(vlSelf->TQ_INVERSE_TRANSFORM_TOP_TB__DOT__O_INPUT_READY));
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
}

void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__0(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__1(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__2(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__0(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__1(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__3(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__3(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__4(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___nba_sequent__TOP__5(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf);
void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_comb__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__1(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);
void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_comb__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__1(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf);

void VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_nba(VTQ_INVERSE_TRANSFORM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_TRANSFORM_TOP_TB___024root___eval_nba\n"); );
    // Body
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__0((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__1((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__2((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__0((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__1((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__2((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__3((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__3((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
        VTQ_INVERSE_TRANSFORM_TOP_TB___024root___nba_sequent__TOP__3(vlSelf);
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__4((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
        VTQ_INVERSE_TRANSFORM_TOP_TB___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x101ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__2((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
    }
    if ((0x110ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__2((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__0((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
    }
    if ((0x300ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_comb__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__1((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___nba_comb__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__1((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
        VTQ_INVERSE_TRANSFORM_TOP_TB___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x208ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__3((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
    }
    if ((0x202ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__4((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
    }
    if ((0x204ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__5((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
    }
    if ((0x280ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__3((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
    }
    if ((0x220ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__4((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
    }
    if ((0x240ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__5((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
    }
    if ((0x20eULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_comb__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__0((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
    }
    if ((0x2e0ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_comb__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__0((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
    }
    if ((0x30eULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_comb__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__1((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d));
    }
    if ((0x3e0ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___act_comb__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__1((&vlSymsp->TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d));
    }
}
