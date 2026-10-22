// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTB_DBF_FD_SAMPLE_ACTIVITY__Syms.h"


void VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_chg_0_sub_0(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_chg_0\n"); );
    // Init
    VTB_DBF_FD_SAMPLE_ACTIVITY___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_DBF_FD_SAMPLE_ACTIVITY___024root*>(voidSelf);
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_chg_0_sub_0(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((((vlSelf->__Vm_traceActivity[1U] 
                        | vlSelf->__Vm_traceActivity
                        [2U]) | vlSelf->__Vm_traceActivity
                       [3U]) | vlSelf->__Vm_traceActivity
                      [4U]) | vlSelf->__Vm_traceActivity
                     [5U]))) {
        bufp->chgBit(oldp+0,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid));
        bufp->chgWData(oldp+1,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples),1024);
        bufp->chgCData(oldp+33,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp),2);
        bufp->chgBit(oldp+34,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_dir));
        bufp->chgCData(oldp+35,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_group_enable),2);
        bufp->chgCData(oldp+36,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0),3);
        bufp->chgCData(oldp+37,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0),3);
        bufp->chgCData(oldp+38,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1),3);
        bufp->chgCData(oldp+39,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1),3);
        bufp->chgCData(oldp+40,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs0),2);
        bufp->chgCData(oldp+41,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs1),2);
        bufp->chgSData(oldp+42,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta0),16);
        bufp->chgSData(oldp+43,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta1),16);
        bufp->chgSData(oldp+44,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc0),16);
        bufp->chgSData(oldp+45,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc1),16);
        bufp->chgSData(oldp+46,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tag),16);
        bufp->chgBit(oldp+47,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_ready));
        bufp->chgIData(oldp+48,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__total_pass),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgCData(oldp+49,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sp_g1_selected),3);
        bufp->chgCData(oldp+50,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sq_g1_selected),3);
        bufp->chgSData(oldp+51,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[0]),12);
        bufp->chgSData(oldp+52,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[1]),12);
        bufp->chgSData(oldp+53,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[2]),12);
        bufp->chgSData(oldp+54,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[3]),12);
        bufp->chgSData(oldp+55,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[4]),12);
        bufp->chgSData(oldp+56,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[5]),12);
        bufp->chgSData(oldp+57,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[6]),12);
        bufp->chgSData(oldp+58,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[7]),12);
        bufp->chgSData(oldp+59,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[0]),12);
        bufp->chgSData(oldp+60,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[1]),12);
        bufp->chgSData(oldp+61,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[2]),12);
        bufp->chgSData(oldp+62,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[3]),12);
        bufp->chgSData(oldp+63,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[4]),12);
        bufp->chgSData(oldp+64,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[5]),12);
        bufp->chgSData(oldp+65,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[6]),12);
        bufp->chgSData(oldp+66,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[7]),12);
        bufp->chgSData(oldp+67,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[0]),12);
        bufp->chgSData(oldp+68,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[1]),12);
        bufp->chgSData(oldp+69,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[2]),12);
        bufp->chgSData(oldp+70,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[3]),12);
        bufp->chgSData(oldp+71,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[4]),12);
        bufp->chgSData(oldp+72,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[5]),12);
        bufp->chgSData(oldp+73,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[6]),12);
        bufp->chgSData(oldp+74,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[7]),12);
        bufp->chgSData(oldp+75,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[0]),12);
        bufp->chgSData(oldp+76,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[1]),12);
        bufp->chgSData(oldp+77,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[2]),12);
        bufp->chgSData(oldp+78,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[3]),12);
        bufp->chgSData(oldp+79,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[4]),12);
        bufp->chgSData(oldp+80,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[5]),12);
        bufp->chgSData(oldp+81,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[6]),12);
        bufp->chgSData(oldp+82,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[7]),12);
        bufp->chgSData(oldp+83,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[0]),12);
        bufp->chgSData(oldp+84,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[1]),12);
        bufp->chgSData(oldp+85,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[2]),12);
        bufp->chgSData(oldp+86,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[3]),12);
        bufp->chgSData(oldp+87,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[4]),12);
        bufp->chgSData(oldp+88,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[5]),12);
        bufp->chgSData(oldp+89,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[6]),12);
        bufp->chgSData(oldp+90,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[7]),12);
        bufp->chgSData(oldp+91,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[0]),12);
        bufp->chgSData(oldp+92,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[1]),12);
        bufp->chgSData(oldp+93,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[2]),12);
        bufp->chgSData(oldp+94,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[3]),12);
        bufp->chgSData(oldp+95,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[4]),12);
        bufp->chgSData(oldp+96,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[5]),12);
        bufp->chgSData(oldp+97,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[6]),12);
        bufp->chgSData(oldp+98,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[7]),12);
        bufp->chgSData(oldp+99,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[0]),12);
        bufp->chgSData(oldp+100,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[1]),12);
        bufp->chgSData(oldp+101,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[2]),12);
        bufp->chgSData(oldp+102,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[3]),12);
        bufp->chgSData(oldp+103,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[4]),12);
        bufp->chgSData(oldp+104,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[5]),12);
        bufp->chgSData(oldp+105,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[6]),12);
        bufp->chgSData(oldp+106,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[7]),12);
        bufp->chgSData(oldp+107,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[0]),12);
        bufp->chgSData(oldp+108,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[1]),12);
        bufp->chgSData(oldp+109,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[2]),12);
        bufp->chgSData(oldp+110,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[3]),12);
        bufp->chgSData(oldp+111,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[4]),12);
        bufp->chgSData(oldp+112,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[5]),12);
        bufp->chgSData(oldp+113,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[6]),12);
        bufp->chgSData(oldp+114,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[7]),12);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[9U]))) {
        bufp->chgQData(oldp+115,((((QData)((IData)(
                                                   (0xfffU 
                                                    & ((0x800U 
                                                        & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_near))
                                                        ? 
                                                       (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_near))
                                                        : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_near))))) 
                                   << 0x24U) | (((QData)((IData)(
                                                                 (0xfffU 
                                                                  & ((0x800U 
                                                                      & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_near))
                                                                      ? 
                                                                     (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_near))
                                                                      : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_near))))) 
                                                 << 0x18U) 
                                                | (QData)((IData)(
                                                                  ((0xfff000U 
                                                                    & (((0x800U 
                                                                         & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_near))
                                                                         ? 
                                                                        (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_near))
                                                                         : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_near)) 
                                                                       << 0xcU)) 
                                                                   | (0xfffU 
                                                                      & ((0x800U 
                                                                          & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_near))
                                                                          ? 
                                                                         (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_near))
                                                                          : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_near))))))))),48);
        bufp->chgQData(oldp+117,((((QData)((IData)(
                                                   (0xfffU 
                                                    & ((0x800U 
                                                        & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_near))
                                                        ? 
                                                       (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_near))
                                                        : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_near))))) 
                                   << 0x24U) | (((QData)((IData)(
                                                                 (0xfffU 
                                                                  & ((0x800U 
                                                                      & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_near))
                                                                      ? 
                                                                     (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_near))
                                                                      : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_near))))) 
                                                 << 0x18U) 
                                                | (QData)((IData)(
                                                                  ((0xfff000U 
                                                                    & (((0x800U 
                                                                         & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_near))
                                                                         ? 
                                                                        (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_near))
                                                                         : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_near)) 
                                                                       << 0xcU)) 
                                                                   | (0xfffU 
                                                                      & ((0x800U 
                                                                          & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_near))
                                                                          ? 
                                                                         (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_near))
                                                                          : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_near))))))))),48);
        bufp->chgQData(oldp+119,((((QData)((IData)(
                                                   (0xfffU 
                                                    & ((0x800U 
                                                        & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_far))
                                                        ? 
                                                       (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_far))
                                                        : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_far))))) 
                                   << 0x24U) | (((QData)((IData)(
                                                                 (0xfffU 
                                                                  & ((0x800U 
                                                                      & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_far))
                                                                      ? 
                                                                     (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_far))
                                                                      : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_far))))) 
                                                 << 0x18U) 
                                                | (QData)((IData)(
                                                                  ((0xfff000U 
                                                                    & (((0x800U 
                                                                         & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_far))
                                                                         ? 
                                                                        (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_far))
                                                                         : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_far)) 
                                                                       << 0xcU)) 
                                                                   | (0xfffU 
                                                                      & ((0x800U 
                                                                          & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_far))
                                                                          ? 
                                                                         (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_far))
                                                                          : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_far))))))))),48);
        bufp->chgQData(oldp+121,((((QData)((IData)(
                                                   (0xfffU 
                                                    & ((0x800U 
                                                        & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_far))
                                                        ? 
                                                       (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_far))
                                                        : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_far))))) 
                                   << 0x24U) | (((QData)((IData)(
                                                                 (0xfffU 
                                                                  & ((0x800U 
                                                                      & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_far))
                                                                      ? 
                                                                     (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_far))
                                                                      : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_far))))) 
                                                 << 0x18U) 
                                                | (QData)((IData)(
                                                                  ((0xfff000U 
                                                                    & (((0x800U 
                                                                         & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_far))
                                                                         ? 
                                                                        (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_far))
                                                                         : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_far)) 
                                                                       << 0xcU)) 
                                                                   | (0xfffU 
                                                                      & ((0x800U 
                                                                          & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_far))
                                                                          ? 
                                                                         (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_far))
                                                                          : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_far))))))))),48);
        bufp->chgQData(oldp+123,((((QData)((IData)(
                                                   (0xfffU 
                                                    & ((0x800U 
                                                        & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span3))
                                                        ? 
                                                       (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span3))
                                                        : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span3))))) 
                                   << 0x24U) | (((QData)((IData)(
                                                                 (0xfffU 
                                                                  & ((0x800U 
                                                                      & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span3))
                                                                      ? 
                                                                     (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span3))
                                                                      : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span3))))) 
                                                 << 0x18U) 
                                                | (QData)((IData)(
                                                                  ((0xfff000U 
                                                                    & (((0x800U 
                                                                         & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span3))
                                                                         ? 
                                                                        (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span3))
                                                                         : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span3)) 
                                                                       << 0xcU)) 
                                                                   | (0xfffU 
                                                                      & ((0x800U 
                                                                          & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span3))
                                                                          ? 
                                                                         (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span3))
                                                                          : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span3))))))))),48);
        bufp->chgQData(oldp+125,((((QData)((IData)(
                                                   (0xfffU 
                                                    & ((0x800U 
                                                        & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span3))
                                                        ? 
                                                       (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span3))
                                                        : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span3))))) 
                                   << 0x24U) | (((QData)((IData)(
                                                                 (0xfffU 
                                                                  & ((0x800U 
                                                                      & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span3))
                                                                      ? 
                                                                     (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span3))
                                                                      : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span3))))) 
                                                 << 0x18U) 
                                                | (QData)((IData)(
                                                                  ((0xfff000U 
                                                                    & (((0x800U 
                                                                         & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span3))
                                                                         ? 
                                                                        (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span3))
                                                                         : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span3)) 
                                                                       << 0xcU)) 
                                                                   | (0xfffU 
                                                                      & ((0x800U 
                                                                          & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span3))
                                                                          ? 
                                                                         (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span3))
                                                                          : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span3))))))))),48);
        bufp->chgQData(oldp+127,((((QData)((IData)(
                                                   (0xfffU 
                                                    & ((0x800U 
                                                        & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span_len))
                                                        ? 
                                                       (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span_len))
                                                        : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span_len))))) 
                                   << 0x24U) | (((QData)((IData)(
                                                                 (0xfffU 
                                                                  & ((0x800U 
                                                                      & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span_len))
                                                                      ? 
                                                                     (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span_len))
                                                                      : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span_len))))) 
                                                 << 0x18U) 
                                                | (QData)((IData)(
                                                                  ((0xfff000U 
                                                                    & (((0x800U 
                                                                         & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span_len))
                                                                         ? 
                                                                        (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span_len))
                                                                         : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span_len)) 
                                                                       << 0xcU)) 
                                                                   | (0xfffU 
                                                                      & ((0x800U 
                                                                          & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span_len))
                                                                          ? 
                                                                         (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span_len))
                                                                          : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span_len))))))))),48);
        bufp->chgQData(oldp+129,((((QData)((IData)(
                                                   (0xfffU 
                                                    & ((0x800U 
                                                        & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span_len))
                                                        ? 
                                                       (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span_len))
                                                        : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span_len))))) 
                                   << 0x24U) | (((QData)((IData)(
                                                                 (0xfffU 
                                                                  & ((0x800U 
                                                                      & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span_len))
                                                                      ? 
                                                                     (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span_len))
                                                                      : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span_len))))) 
                                                 << 0x18U) 
                                                | (QData)((IData)(
                                                                  ((0xfff000U 
                                                                    & (((0x800U 
                                                                         & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span_len))
                                                                         ? 
                                                                        (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span_len))
                                                                         : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span_len)) 
                                                                       << 0xcU)) 
                                                                   | (0xfffU 
                                                                      & ((0x800U 
                                                                          & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span_len))
                                                                          ? 
                                                                         (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span_len))
                                                                          : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span_len))))))))),48);
        bufp->chgQData(oldp+131,((((QData)((IData)(
                                                   (0xfffU 
                                                    & ((0x800U 
                                                        & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_extension))
                                                        ? 
                                                       (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_extension))
                                                        : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_extension))))) 
                                   << 0x24U) | (((QData)((IData)(
                                                                 (0xfffU 
                                                                  & ((0x800U 
                                                                      & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_extension))
                                                                      ? 
                                                                     (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_extension))
                                                                      : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_extension))))) 
                                                 << 0x18U) 
                                                | (QData)((IData)(
                                                                  ((0xfff000U 
                                                                    & (((0x800U 
                                                                         & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_extension))
                                                                         ? 
                                                                        (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_extension))
                                                                         : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_extension)) 
                                                                       << 0xcU)) 
                                                                   | (0xfffU 
                                                                      & ((0x800U 
                                                                          & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_extension))
                                                                          ? 
                                                                         (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_extension))
                                                                          : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_extension))))))))),48);
        bufp->chgQData(oldp+133,((((QData)((IData)(
                                                   (0xfffU 
                                                    & ((0x800U 
                                                        & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_extension))
                                                        ? 
                                                       (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_extension))
                                                        : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_extension))))) 
                                   << 0x24U) | (((QData)((IData)(
                                                                 (0xfffU 
                                                                  & ((0x800U 
                                                                      & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_extension))
                                                                      ? 
                                                                     (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_extension))
                                                                      : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_extension))))) 
                                                 << 0x18U) 
                                                | (QData)((IData)(
                                                                  ((0xfff000U 
                                                                    & (((0x800U 
                                                                         & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_extension))
                                                                         ? 
                                                                        (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_extension))
                                                                         : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_extension)) 
                                                                       << 0xcU)) 
                                                                   | (0xfffU 
                                                                      & ((0x800U 
                                                                          & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_extension))
                                                                          ? 
                                                                         (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_extension))
                                                                          : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_extension))))))))),48);
        bufp->chgQData(oldp+135,((((QData)((IData)(
                                                   (0xfffU 
                                                    & ((0x800U 
                                                        & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_boundary))
                                                        ? 
                                                       (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_boundary))
                                                        : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_boundary))))) 
                                   << 0x24U) | (((QData)((IData)(
                                                                 (0xfffU 
                                                                  & ((0x800U 
                                                                      & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_boundary))
                                                                      ? 
                                                                     (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_boundary))
                                                                      : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_boundary))))) 
                                                 << 0x18U) 
                                                | (QData)((IData)(
                                                                  ((0xfff000U 
                                                                    & (((0x800U 
                                                                         & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_boundary))
                                                                         ? 
                                                                        (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_boundary))
                                                                         : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_boundary)) 
                                                                       << 0xcU)) 
                                                                   | (0xfffU 
                                                                      & ((0x800U 
                                                                          & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_boundary))
                                                                          ? 
                                                                         (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_boundary))
                                                                          : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_boundary))))))))),48);
        bufp->chgSData(oldp+137,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_near),12);
        bufp->chgSData(oldp+138,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_near),12);
        bufp->chgSData(oldp+139,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_far),12);
        bufp->chgSData(oldp+140,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_far),12);
        bufp->chgSData(oldp+141,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span3),12);
        bufp->chgSData(oldp+142,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span3),12);
        bufp->chgSData(oldp+143,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span_len),12);
        bufp->chgSData(oldp+144,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span_len),12);
        bufp->chgSData(oldp+145,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_extension),12);
        bufp->chgSData(oldp+146,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_extension),12);
        bufp->chgSData(oldp+147,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_boundary),12);
        bufp->chgSData(oldp+148,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_near),12);
        bufp->chgSData(oldp+149,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_near),12);
        bufp->chgSData(oldp+150,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_far),12);
        bufp->chgSData(oldp+151,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_far),12);
        bufp->chgSData(oldp+152,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span3),12);
        bufp->chgSData(oldp+153,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span3),12);
        bufp->chgSData(oldp+154,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span_len),12);
        bufp->chgSData(oldp+155,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span_len),12);
        bufp->chgSData(oldp+156,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_extension),12);
        bufp->chgSData(oldp+157,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_extension),12);
        bufp->chgSData(oldp+158,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_boundary),12);
        bufp->chgSData(oldp+159,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_near),12);
        bufp->chgSData(oldp+160,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_near),12);
        bufp->chgSData(oldp+161,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_far),12);
        bufp->chgSData(oldp+162,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_far),12);
        bufp->chgSData(oldp+163,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span3),12);
        bufp->chgSData(oldp+164,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span3),12);
        bufp->chgSData(oldp+165,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span_len),12);
        bufp->chgSData(oldp+166,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span_len),12);
        bufp->chgSData(oldp+167,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_extension),12);
        bufp->chgSData(oldp+168,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_extension),12);
        bufp->chgSData(oldp+169,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_boundary),12);
        bufp->chgSData(oldp+170,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_near),12);
        bufp->chgSData(oldp+171,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_near),12);
        bufp->chgSData(oldp+172,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_far),12);
        bufp->chgSData(oldp+173,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_far),12);
        bufp->chgSData(oldp+174,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span3),12);
        bufp->chgSData(oldp+175,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span3),12);
        bufp->chgSData(oldp+176,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span_len),12);
        bufp->chgSData(oldp+177,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span_len),12);
        bufp->chgSData(oldp+178,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_extension),12);
        bufp->chgSData(oldp+179,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_extension),12);
        bufp->chgSData(oldp+180,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_boundary),12);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgWData(oldp+181,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples),1024);
        bufp->chgCData(oldp+213,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_comp),2);
        bufp->chgBit(oldp+214,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_dir));
        bufp->chgCData(oldp+215,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_group_enable),2);
        bufp->chgCData(oldp+216,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sp0),3);
        bufp->chgCData(oldp+217,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sq0),3);
        bufp->chgCData(oldp+218,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sp1),3);
        bufp->chgCData(oldp+219,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sq1),3);
        bufp->chgCData(oldp+220,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_bs0),2);
        bufp->chgCData(oldp+221,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_bs1),2);
        bufp->chgSData(oldp+222,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_beta0),16);
        bufp->chgSData(oldp+223,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_beta1),16);
        bufp->chgSData(oldp+224,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tc0),16);
        bufp->chgSData(oldp+225,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tc1),16);
        bufp->chgSData(oldp+226,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tag),16);
        bufp->chgQData(oldp+227,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near),48);
        bufp->chgQData(oldp+229,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near),48);
        bufp->chgQData(oldp+231,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far),48);
        bufp->chgQData(oldp+233,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far),48);
        bufp->chgQData(oldp+235,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3),48);
        bufp->chgQData(oldp+237,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3),48);
        bufp->chgQData(oldp+239,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len),48);
        bufp->chgQData(oldp+241,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len),48);
        bufp->chgQData(oldp+243,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext),48);
        bufp->chgQData(oldp+245,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext),48);
        bufp->chgQData(oldp+247,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff),48);
    }
    bufp->chgBit(oldp+249,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__clk));
    bufp->chgBit(oldp+250,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__rst_n));
    bufp->chgBit(oldp+251,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__clear));
    bufp->chgBit(oldp+252,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready));
    bufp->chgBit(oldp+253,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid));
    bufp->chgBit(oldp+254,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_slot_ready));
    bufp->chgBit(oldp+255,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_accept));
    bufp->chgIData(oldp+256,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__unnamedblk1__DOT__n),32);
}

void VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_cleanup\n"); );
    // Init
    VTB_DBF_FD_SAMPLE_ACTIVITY___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_DBF_FD_SAMPLE_ACTIVITY___024root*>(voidSelf);
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
}
