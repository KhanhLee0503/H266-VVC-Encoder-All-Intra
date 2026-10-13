// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VINTRA_REF_AVAILABILITY_TB__Syms.h"


void VINTRA_REF_AVAILABILITY_TB___024root__trace_chg_0_sub_0(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VINTRA_REF_AVAILABILITY_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root__trace_chg_0\n"); );
    // Init
    VINTRA_REF_AVAILABILITY_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VINTRA_REF_AVAILABILITY_TB___024root*>(voidSelf);
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VINTRA_REF_AVAILABILITY_TB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VINTRA_REF_AVAILABILITY_TB___024root__trace_chg_0_sub_0(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_COMPONENT_ID),2);
        bufp->chgCData(oldp+1,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X),7);
        bufp->chgCData(oldp+2,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y),7);
        bufp->chgSData(oldp+3,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN),13);
        bufp->chgSData(oldp+4,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN),13);
        bufp->chgSData(oldp+5,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_WIDTH),13);
        bufp->chgSData(oldp+6,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_HEIGHT),13);
        bufp->chgBit(oldp+7,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_CHECK_VALID));
        bufp->chgCData(oldp+8,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_SEG_INDEX),4);
        bufp->chgBit(oldp+9,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_CHECK_VALID));
        bufp->chgCData(oldp+10,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_SEG_INDEX),4);
        bufp->chgBit(oldp+11,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TL_CHECK_VALID));
        bufp->chgBit(oldp+12,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_MAP_AVAILABLE));
        bufp->chgBit(oldp+13,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_MAP_AVAILABLE));
        bufp->chgBit(oldp+14,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TL_MAP_AVAILABLE));
        bufp->chgBit(oldp+15,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_ABOVE_ROW_VALID));
        bufp->chgBit(oldp+16,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_BOUNDARY_VALID));
        bufp->chgBit(oldp+17,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_ABOVE_LEFT_VALID));
        bufp->chgCData(oldp+18,(((0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X))
                                  ? (0xffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X) 
                                              - (IData)(1U)))
                                  : 0U)),8);
        bufp->chgSData(oldp+19,((0x3fffU & ((0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X))
                                             ? ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN) 
                                                + (
                                                   (0U 
                                                    != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X))
                                                    ? 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X) 
                                                       - (IData)(1U)))
                                                    : 0U))
                                             : ((0U 
                                                 == (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN))
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN) 
                                                 - (IData)(1U)))))),14);
        bufp->chgIData(oldp+20,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count),32);
        bufp->chgCData(oldp+21,((0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_SEG_INDEX), 2U))),8);
        bufp->chgCData(oldp+22,((0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_SEG_INDEX), 2U))),8);
        bufp->chgSData(oldp+23,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_WIDTH),14);
        bufp->chgSData(oldp+24,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_HEIGHT),14);
        bufp->chgSData(oldp+25,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN),14);
        bufp->chgSData(oldp+26,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN),14);
        bufp->chgSData(oldp+27,((0x3fffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN) 
                                            + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X)))),14);
        bufp->chgSData(oldp+28,((0x3fffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN) 
                                            + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y)))),14);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+29,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_QUERY_VALID));
        bufp->chgCData(oldp+30,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_X_UNIT),5);
        bufp->chgCData(oldp+31,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_Y_UNIT),5);
        bufp->chgBit(oldp+32,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_QUERY_VALID));
        bufp->chgCData(oldp+33,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_X_UNIT),5);
        bufp->chgCData(oldp+34,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_Y_UNIT),5);
        bufp->chgBit(oldp+35,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_QUERY_VALID));
        bufp->chgCData(oldp+36,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_X_UNIT),5);
        bufp->chgCData(oldp+37,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_Y_UNIT),5);
        bufp->chgCData(oldp+38,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION),3);
        bufp->chgCData(oldp+39,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_ref_x),8);
        bufp->chgCData(oldp+40,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_ref_y),8);
        bufp->chgBit(oldp+41,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_CODING_VALID));
        bufp->chgBit(oldp+42,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_RECON_READY));
        bufp->chgBit(oldp+43,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_AVAILABLE));
        bufp->chgCData(oldp+44,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION),3);
        bufp->chgCData(oldp+45,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_ref_y),8);
        bufp->chgBit(oldp+46,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_CODING_VALID));
        bufp->chgBit(oldp+47,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_RECON_READY));
        bufp->chgBit(oldp+48,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_AVAILABLE));
        bufp->chgCData(oldp+49,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION),3);
        bufp->chgBit(oldp+50,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_CODING_VALID));
        bufp->chgBit(oldp+51,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_RECON_READY));
        bufp->chgBit(oldp+52,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_AVAILABLE));
        bufp->chgBit(oldp+53,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_component_valid));
        bufp->chgCData(oldp+54,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_ctu_size),8);
        bufp->chgCData(oldp+55,((0xffU & ((IData)(3U) 
                                          + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_ref_x)))),8);
        bufp->chgCData(oldp+56,((0xffU & ((IData)(3U) 
                                          + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_ref_y)))),8);
        bufp->chgBit(oldp+57,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_tu_origin_valid));
        bufp->chgBit(oldp+58,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_picture_valid));
        bufp->chgBit(oldp+59,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_picture_valid));
        bufp->chgBit(oldp+60,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_tl_picture_valid));
    }
    bufp->chgBit(oldp+61,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__clk));
    bufp->chgSData(oldp+62,((0x3fffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN) 
                                        + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_ref_x)))),14);
    bufp->chgSData(oldp+63,((0x3fffU & ((0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y))
                                         ? ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN) 
                                            + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_ref_y))
                                         : ((0U == (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN))
                                             ? 0U : 
                                            ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN) 
                                             - (IData)(1U)))))),14);
    bufp->chgSData(oldp+64,((0x3fffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN) 
                                        + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_ref_y)))),14);
    bufp->chgSData(oldp+65,((0x3fffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN) 
                                        + (0xffU & 
                                           ((IData)(3U) 
                                            + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_ref_x)))))),14);
    bufp->chgSData(oldp+66,((0x3fffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN) 
                                        + (0xffU & 
                                           ((IData)(3U) 
                                            + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_ref_y)))))),14);
}

void VINTRA_REF_AVAILABILITY_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root__trace_cleanup\n"); );
    // Init
    VINTRA_REF_AVAILABILITY_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VINTRA_REF_AVAILABILITY_TB___024root*>(voidSelf);
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
