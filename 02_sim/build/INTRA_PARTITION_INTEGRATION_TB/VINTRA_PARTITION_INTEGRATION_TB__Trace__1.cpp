// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VINTRA_PARTITION_INTEGRATION_TB__Syms.h"


void VINTRA_PARTITION_INTEGRATION_TB___024root__trace_chg_0_sub_1(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_PARTITION_INTEGRATION_TB___024root__trace_chg_0_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 8113);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xcU] 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgSData(oldp+0,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__48__KET____DOT__w_unit_active)
                                 ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x17U] 
                                              >> 0x10U))
                                 : 0U)),10);
        bufp->chgSData(oldp+1,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__48__KET____DOT__w_unit_active)
                                            ? (0x3ffU 
                                               & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x18U] 
                                                  >> 0x10U))
                                            : 0U) + 
                                          ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__48__KET____DOT__w_unit_active)
                                            ? (0x3ffU 
                                               & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x17U] 
                                                  >> 0x10U))
                                            : 0U)))),11);
        bufp->chgSData(oldp+2,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__48__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x18U])
                                  : 0U) << 1U)),11);
        bufp->chgSData(oldp+3,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__49__KET____DOT__w_unit_active)
                                 ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x19U])
                                 : 0U)),10);
        bufp->chgSData(oldp+4,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__49__KET____DOT__w_unit_active)
                                 ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x18U] 
                                              >> 0x10U))
                                 : 0U)),10);
        bufp->chgSData(oldp+5,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__49__KET____DOT__w_unit_active)
                                 ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x18U])
                                 : 0U)),10);
        bufp->chgSData(oldp+6,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__49__KET____DOT__w_unit_active)
                                            ? (0x3ffU 
                                               & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x19U])
                                            : 0U) + 
                                          ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__49__KET____DOT__w_unit_active)
                                            ? (0x3ffU 
                                               & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x18U])
                                            : 0U)))),11);
        bufp->chgSData(oldp+7,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__49__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x18U] 
                                               >> 0x10U))
                                  : 0U) << 1U)),11);
        bufp->chgSData(oldp+8,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__4__KET____DOT__w_unit_active)
                                 ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[2U] 
                                              >> 0x10U))
                                 : 0U)),10);
        bufp->chgSData(oldp+9,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__4__KET____DOT__w_unit_active)
                                 ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[2U])
                                 : 0U)),10);
        bufp->chgSData(oldp+10,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__4__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[1U] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+11,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__4__KET____DOT__w_unit_active)
                                             ? (0x3ffU 
                                                & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[2U] 
                                                   >> 0x10U))
                                             : 0U) 
                                           + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__4__KET____DOT__w_unit_active)
                                               ? (0x3ffU 
                                                  & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[1U] 
                                                     >> 0x10U))
                                               : 0U)))),11);
        bufp->chgSData(oldp+12,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__4__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[2U])
                                   : 0U) << 1U)),11);
        bufp->chgSData(oldp+13,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__50__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x19U] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+14,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__50__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x19U])
                                  : 0U)),10);
        bufp->chgSData(oldp+15,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__50__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x18U] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+16,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__50__KET____DOT__w_unit_active)
                                             ? (0x3ffU 
                                                & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x19U] 
                                                   >> 0x10U))
                                             : 0U) 
                                           + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__50__KET____DOT__w_unit_active)
                                               ? (0x3ffU 
                                                  & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x18U] 
                                                     >> 0x10U))
                                               : 0U)))),11);
        bufp->chgSData(oldp+17,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__50__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x19U])
                                   : 0U) << 1U)),11);
        bufp->chgSData(oldp+18,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__51__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1aU])
                                  : 0U)),10);
        bufp->chgSData(oldp+19,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__51__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x19U] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+20,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__51__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x19U])
                                  : 0U)),10);
        bufp->chgSData(oldp+21,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__51__KET____DOT__w_unit_active)
                                             ? (0x3ffU 
                                                & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1aU])
                                             : 0U) 
                                           + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__51__KET____DOT__w_unit_active)
                                               ? (0x3ffU 
                                                  & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x19U])
                                               : 0U)))),11);
        bufp->chgSData(oldp+22,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__51__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x19U] 
                                                >> 0x10U))
                                   : 0U) << 1U)),11);
        bufp->chgSData(oldp+23,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__52__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1aU] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+24,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__52__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1aU])
                                  : 0U)),10);
        bufp->chgSData(oldp+25,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__52__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x19U] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+26,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__52__KET____DOT__w_unit_active)
                                             ? (0x3ffU 
                                                & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1aU] 
                                                   >> 0x10U))
                                             : 0U) 
                                           + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__52__KET____DOT__w_unit_active)
                                               ? (0x3ffU 
                                                  & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x19U] 
                                                     >> 0x10U))
                                               : 0U)))),11);
        bufp->chgSData(oldp+27,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__52__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1aU])
                                   : 0U) << 1U)),11);
        bufp->chgSData(oldp+28,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__53__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1bU])
                                  : 0U)),10);
        bufp->chgSData(oldp+29,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__53__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1aU] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+30,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__53__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1aU])
                                  : 0U)),10);
        bufp->chgSData(oldp+31,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__53__KET____DOT__w_unit_active)
                                             ? (0x3ffU 
                                                & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1bU])
                                             : 0U) 
                                           + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__53__KET____DOT__w_unit_active)
                                               ? (0x3ffU 
                                                  & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1aU])
                                               : 0U)))),11);
        bufp->chgSData(oldp+32,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__53__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1aU] 
                                                >> 0x10U))
                                   : 0U) << 1U)),11);
        bufp->chgSData(oldp+33,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__54__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1bU] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+34,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__54__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1bU])
                                  : 0U)),10);
        bufp->chgSData(oldp+35,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__54__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1aU] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+36,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__54__KET____DOT__w_unit_active)
                                             ? (0x3ffU 
                                                & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1bU] 
                                                   >> 0x10U))
                                             : 0U) 
                                           + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__54__KET____DOT__w_unit_active)
                                               ? (0x3ffU 
                                                  & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1aU] 
                                                     >> 0x10U))
                                               : 0U)))),11);
        bufp->chgSData(oldp+37,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__54__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1bU])
                                   : 0U) << 1U)),11);
        bufp->chgSData(oldp+38,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__55__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1cU])
                                  : 0U)),10);
        bufp->chgSData(oldp+39,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__55__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1bU] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+40,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__55__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1bU])
                                  : 0U)),10);
        bufp->chgSData(oldp+41,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__55__KET____DOT__w_unit_active)
                                             ? (0x3ffU 
                                                & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1cU])
                                             : 0U) 
                                           + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__55__KET____DOT__w_unit_active)
                                               ? (0x3ffU 
                                                  & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1bU])
                                               : 0U)))),11);
        bufp->chgSData(oldp+42,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__55__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1bU] 
                                                >> 0x10U))
                                   : 0U) << 1U)),11);
        bufp->chgSData(oldp+43,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__56__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1cU] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+44,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__56__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1cU])
                                  : 0U)),10);
        bufp->chgSData(oldp+45,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__56__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1bU] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+46,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__56__KET____DOT__w_unit_active)
                                             ? (0x3ffU 
                                                & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1cU] 
                                                   >> 0x10U))
                                             : 0U) 
                                           + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__56__KET____DOT__w_unit_active)
                                               ? (0x3ffU 
                                                  & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1bU] 
                                                     >> 0x10U))
                                               : 0U)))),11);
        bufp->chgSData(oldp+47,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__56__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1cU])
                                   : 0U) << 1U)),11);
        bufp->chgSData(oldp+48,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__57__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1dU])
                                  : 0U)),10);
        bufp->chgSData(oldp+49,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__57__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1cU] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+50,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__57__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1cU])
                                  : 0U)),10);
        bufp->chgSData(oldp+51,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__57__KET____DOT__w_unit_active)
                                             ? (0x3ffU 
                                                & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1dU])
                                             : 0U) 
                                           + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__57__KET____DOT__w_unit_active)
                                               ? (0x3ffU 
                                                  & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1cU])
                                               : 0U)))),11);
        bufp->chgSData(oldp+52,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__57__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1cU] 
                                                >> 0x10U))
                                   : 0U) << 1U)),11);
        bufp->chgSData(oldp+53,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__58__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1dU] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+54,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__58__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1dU])
                                  : 0U)),10);
        bufp->chgSData(oldp+55,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__58__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1cU] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+56,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__58__KET____DOT__w_unit_active)
                                             ? (0x3ffU 
                                                & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1dU] 
                                                   >> 0x10U))
                                             : 0U) 
                                           + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__58__KET____DOT__w_unit_active)
                                               ? (0x3ffU 
                                                  & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1cU] 
                                                     >> 0x10U))
                                               : 0U)))),11);
        bufp->chgSData(oldp+57,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__58__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1dU])
                                   : 0U) << 1U)),11);
        bufp->chgSData(oldp+58,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__59__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1eU])
                                  : 0U)),10);
        bufp->chgSData(oldp+59,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__59__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1dU] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+60,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__59__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1dU])
                                  : 0U)),10);
        bufp->chgSData(oldp+61,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__59__KET____DOT__w_unit_active)
                                             ? (0x3ffU 
                                                & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1eU])
                                             : 0U) 
                                           + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__59__KET____DOT__w_unit_active)
                                               ? (0x3ffU 
                                                  & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1dU])
                                               : 0U)))),11);
        bufp->chgSData(oldp+62,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__59__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1dU] 
                                                >> 0x10U))
                                   : 0U) << 1U)),11);
        bufp->chgSData(oldp+63,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__5__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[3U])
                                  : 0U)),10);
        bufp->chgSData(oldp+64,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__5__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[2U] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+65,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__5__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[2U])
                                  : 0U)),10);
        bufp->chgSData(oldp+66,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__5__KET____DOT__w_unit_active)
                                             ? (0x3ffU 
                                                & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[3U])
                                             : 0U) 
                                           + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__5__KET____DOT__w_unit_active)
                                               ? (0x3ffU 
                                                  & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[2U])
                                               : 0U)))),11);
        bufp->chgSData(oldp+67,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__5__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[2U] 
                                                >> 0x10U))
                                   : 0U) << 1U)),11);
        bufp->chgSData(oldp+68,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__60__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1eU] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+69,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__60__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1eU])
                                  : 0U)),10);
        bufp->chgSData(oldp+70,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__60__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1dU] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+71,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__60__KET____DOT__w_unit_active)
                                             ? (0x3ffU 
                                                & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1eU] 
                                                   >> 0x10U))
                                             : 0U) 
                                           + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__60__KET____DOT__w_unit_active)
                                               ? (0x3ffU 
                                                  & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1dU] 
                                                     >> 0x10U))
                                               : 0U)))),11);
        bufp->chgSData(oldp+72,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__60__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1eU])
                                   : 0U) << 1U)),11);
        bufp->chgSData(oldp+73,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__61__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1fU])
                                  : 0U)),10);
        bufp->chgSData(oldp+74,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__61__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1eU] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+75,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__61__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1eU])
                                  : 0U)),10);
        bufp->chgSData(oldp+76,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__61__KET____DOT__w_unit_active)
                                             ? (0x3ffU 
                                                & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1fU])
                                             : 0U) 
                                           + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__61__KET____DOT__w_unit_active)
                                               ? (0x3ffU 
                                                  & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1eU])
                                               : 0U)))),11);
        bufp->chgSData(oldp+77,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__61__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1eU] 
                                                >> 0x10U))
                                   : 0U) << 1U)),11);
        bufp->chgSData(oldp+78,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__62__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1fU] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+79,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__62__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1fU])
                                  : 0U)),10);
        bufp->chgSData(oldp+80,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__62__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1eU] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+81,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__62__KET____DOT__w_unit_active)
                                             ? (0x3ffU 
                                                & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1fU] 
                                                   >> 0x10U))
                                             : 0U) 
                                           + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__62__KET____DOT__w_unit_active)
                                               ? (0x3ffU 
                                                  & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1eU] 
                                                     >> 0x10U))
                                               : 0U)))),11);
        bufp->chgSData(oldp+82,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__62__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1fU])
                                   : 0U) << 1U)),11);
        bufp->chgSData(oldp+83,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__6__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[3U] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+84,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__6__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[3U])
                                  : 0U)),10);
        bufp->chgSData(oldp+85,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__6__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[2U] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+86,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__6__KET____DOT__w_unit_active)
                                             ? (0x3ffU 
                                                & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[3U] 
                                                   >> 0x10U))
                                             : 0U) 
                                           + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__6__KET____DOT__w_unit_active)
                                               ? (0x3ffU 
                                                  & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[2U] 
                                                     >> 0x10U))
                                               : 0U)))),11);
        bufp->chgSData(oldp+87,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__6__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[3U])
                                   : 0U) << 1U)),11);
        bufp->chgSData(oldp+88,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__7__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[4U])
                                  : 0U)),10);
        bufp->chgSData(oldp+89,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__7__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[3U] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+90,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__7__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[3U])
                                  : 0U)),10);
        bufp->chgSData(oldp+91,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__7__KET____DOT__w_unit_active)
                                             ? (0x3ffU 
                                                & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[4U])
                                             : 0U) 
                                           + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__7__KET____DOT__w_unit_active)
                                               ? (0x3ffU 
                                                  & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[3U])
                                               : 0U)))),11);
        bufp->chgSData(oldp+92,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__7__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[3U] 
                                                >> 0x10U))
                                   : 0U) << 1U)),11);
        bufp->chgSData(oldp+93,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__8__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[4U] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+94,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__8__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[4U])
                                  : 0U)),10);
        bufp->chgSData(oldp+95,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__8__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[3U] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+96,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__8__KET____DOT__w_unit_active)
                                             ? (0x3ffU 
                                                & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[4U] 
                                                   >> 0x10U))
                                             : 0U) 
                                           + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__8__KET____DOT__w_unit_active)
                                               ? (0x3ffU 
                                                  & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[3U] 
                                                     >> 0x10U))
                                               : 0U)))),11);
        bufp->chgSData(oldp+97,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__8__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[4U])
                                   : 0U) << 1U)),11);
        bufp->chgSData(oldp+98,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__9__KET____DOT__w_unit_active)
                                  ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[5U])
                                  : 0U)),10);
        bufp->chgSData(oldp+99,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__9__KET____DOT__w_unit_active)
                                  ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[4U] 
                                               >> 0x10U))
                                  : 0U)),10);
        bufp->chgSData(oldp+100,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__9__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[4U])
                                   : 0U)),10);
        bufp->chgSData(oldp+101,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__9__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[5U])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__9__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[4U])
                                                : 0U)))),11);
        bufp->chgSData(oldp+102,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_LEFT_FILTER_ARRAY__BRA__9__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[4U] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+103,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__0__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_tl_data))
                                   : 0U)),10);
        bufp->chgSData(oldp+104,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__0__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0U])
                                   : 0U)),10);
        bufp->chgSData(oldp+105,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__0__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+106,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__0__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_tl_data))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__0__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0U] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+107,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__0__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0U])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+108,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__10__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[4U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+109,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__10__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[5U])
                                   : 0U)),10);
        bufp->chgSData(oldp+110,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__10__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[5U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+111,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__10__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[4U] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__10__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[5U] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+112,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__10__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[5U])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+113,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__11__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[5U])
                                   : 0U)),10);
        bufp->chgSData(oldp+114,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__11__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[5U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+115,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__11__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[6U])
                                   : 0U)),10);
        bufp->chgSData(oldp+116,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__11__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[5U])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__11__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[6U])
                                                : 0U)))),11);
        bufp->chgSData(oldp+117,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__11__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[5U] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+118,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__12__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[5U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+119,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__12__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[6U])
                                   : 0U)),10);
        bufp->chgSData(oldp+120,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__12__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[6U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+121,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__12__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[5U] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__12__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[6U] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+122,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__12__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[6U])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+123,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__13__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[6U])
                                   : 0U)),10);
        bufp->chgSData(oldp+124,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__13__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[6U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+125,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__13__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[7U])
                                   : 0U)),10);
        bufp->chgSData(oldp+126,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__13__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[6U])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__13__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[7U])
                                                : 0U)))),11);
        bufp->chgSData(oldp+127,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__13__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[6U] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+128,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__14__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[6U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+129,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__14__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[7U])
                                   : 0U)),10);
        bufp->chgSData(oldp+130,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__14__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[7U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+131,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__14__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[6U] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__14__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[7U] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+132,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__14__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[7U])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+133,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__15__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[7U])
                                   : 0U)),10);
        bufp->chgSData(oldp+134,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__15__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[7U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+135,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__15__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[8U])
                                   : 0U)),10);
        bufp->chgSData(oldp+136,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__15__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[7U])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__15__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[8U])
                                                : 0U)))),11);
        bufp->chgSData(oldp+137,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__15__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[7U] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+138,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__16__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[7U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+139,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__16__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[8U])
                                   : 0U)),10);
        bufp->chgSData(oldp+140,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__16__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[8U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+141,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__16__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[7U] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__16__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[8U] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+142,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__16__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[8U])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+143,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__17__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[8U])
                                   : 0U)),10);
        bufp->chgSData(oldp+144,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__17__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[8U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+145,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__17__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[9U])
                                   : 0U)),10);
        bufp->chgSData(oldp+146,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__17__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[8U])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__17__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[9U])
                                                : 0U)))),11);
        bufp->chgSData(oldp+147,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__17__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[8U] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+148,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__18__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[8U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+149,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__18__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[9U])
                                   : 0U)),10);
        bufp->chgSData(oldp+150,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__18__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[9U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+151,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__18__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[8U] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__18__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[9U] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+152,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__18__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[9U])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+153,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__19__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[9U])
                                   : 0U)),10);
        bufp->chgSData(oldp+154,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__19__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[9U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+155,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__19__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xaU])
                                   : 0U)),10);
        bufp->chgSData(oldp+156,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__19__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[9U])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__19__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xaU])
                                                : 0U)))),11);
        bufp->chgSData(oldp+157,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__19__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[9U] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+158,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__1__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0U])
                                   : 0U)),10);
        bufp->chgSData(oldp+159,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__1__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+160,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__1__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[1U])
                                   : 0U)),10);
        bufp->chgSData(oldp+161,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__1__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0U])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__1__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[1U])
                                                : 0U)))),11);
        bufp->chgSData(oldp+162,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__1__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0U] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+163,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__20__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[9U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+164,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__20__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xaU])
                                   : 0U)),10);
        bufp->chgSData(oldp+165,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__20__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xaU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+166,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__20__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[9U] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__20__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xaU] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+167,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__20__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xaU])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+168,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__21__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xaU])
                                   : 0U)),10);
        bufp->chgSData(oldp+169,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__21__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xaU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+170,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__21__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xbU])
                                   : 0U)),10);
        bufp->chgSData(oldp+171,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__21__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xaU])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__21__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xbU])
                                                : 0U)))),11);
        bufp->chgSData(oldp+172,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__21__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xaU] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+173,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__22__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xaU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+174,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__22__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xbU])
                                   : 0U)),10);
        bufp->chgSData(oldp+175,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__22__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xbU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+176,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__22__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xaU] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__22__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xbU] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+177,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__22__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xbU])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+178,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__23__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xbU])
                                   : 0U)),10);
        bufp->chgSData(oldp+179,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__23__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xbU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+180,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__23__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xcU])
                                   : 0U)),10);
        bufp->chgSData(oldp+181,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__23__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xbU])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__23__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xcU])
                                                : 0U)))),11);
        bufp->chgSData(oldp+182,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__23__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xbU] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+183,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__24__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xbU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+184,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__24__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xcU])
                                   : 0U)),10);
        bufp->chgSData(oldp+185,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__24__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xcU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+186,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__24__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xbU] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__24__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xcU] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+187,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__24__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xcU])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+188,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__25__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xcU])
                                   : 0U)),10);
        bufp->chgSData(oldp+189,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__25__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xcU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+190,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__25__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xdU])
                                   : 0U)),10);
        bufp->chgSData(oldp+191,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__25__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xcU])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__25__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xdU])
                                                : 0U)))),11);
        bufp->chgSData(oldp+192,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__25__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xcU] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+193,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__26__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xcU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+194,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__26__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xdU])
                                   : 0U)),10);
        bufp->chgSData(oldp+195,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__26__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xdU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+196,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__26__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xcU] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__26__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xdU] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+197,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__26__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xdU])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+198,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__27__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xdU])
                                   : 0U)),10);
        bufp->chgSData(oldp+199,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__27__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xdU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+200,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__27__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xeU])
                                   : 0U)),10);
        bufp->chgSData(oldp+201,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__27__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xdU])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__27__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xeU])
                                                : 0U)))),11);
        bufp->chgSData(oldp+202,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__27__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xdU] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+203,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__28__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xdU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+204,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__28__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xeU])
                                   : 0U)),10);
        bufp->chgSData(oldp+205,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__28__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xeU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+206,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__28__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xdU] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__28__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xeU] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+207,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__28__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xeU])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+208,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__29__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xeU])
                                   : 0U)),10);
        bufp->chgSData(oldp+209,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__29__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xeU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+210,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__29__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xfU])
                                   : 0U)),10);
        bufp->chgSData(oldp+211,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__29__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xeU])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__29__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xfU])
                                                : 0U)))),11);
        bufp->chgSData(oldp+212,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__29__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xeU] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+213,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__2__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+214,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__2__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[1U])
                                   : 0U)),10);
        bufp->chgSData(oldp+215,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__2__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[1U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+216,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__2__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0U] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__2__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[1U] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+217,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__2__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[1U])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+218,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__30__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xeU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+219,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__30__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xfU])
                                   : 0U)),10);
        bufp->chgSData(oldp+220,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__30__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xfU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+221,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__30__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xeU] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__30__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xfU] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+222,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__30__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xfU])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+223,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__31__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xfU])
                                   : 0U)),10);
        bufp->chgSData(oldp+224,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__31__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xfU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+225,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__31__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x10U])
                                   : 0U)),10);
        bufp->chgSData(oldp+226,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__31__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xfU])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__31__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x10U])
                                                : 0U)))),11);
        bufp->chgSData(oldp+227,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__31__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xfU] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+228,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__32__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xfU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+229,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__32__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x10U])
                                   : 0U)),10);
        bufp->chgSData(oldp+230,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__32__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x10U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+231,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__32__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xfU] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__32__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x10U] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+232,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__32__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x10U])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+233,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__33__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x10U])
                                   : 0U)),10);
        bufp->chgSData(oldp+234,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__33__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x10U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+235,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__33__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x11U])
                                   : 0U)),10);
        bufp->chgSData(oldp+236,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__33__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x10U])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__33__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x11U])
                                                : 0U)))),11);
        bufp->chgSData(oldp+237,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__33__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x10U] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+238,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__34__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x10U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+239,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__34__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x11U])
                                   : 0U)),10);
        bufp->chgSData(oldp+240,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__34__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x11U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+241,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__34__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x10U] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__34__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x11U] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+242,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__34__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x11U])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+243,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__35__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x11U])
                                   : 0U)),10);
        bufp->chgSData(oldp+244,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__35__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x11U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+245,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__35__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x12U])
                                   : 0U)),10);
        bufp->chgSData(oldp+246,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__35__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x11U])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__35__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x12U])
                                                : 0U)))),11);
        bufp->chgSData(oldp+247,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__35__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x11U] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+248,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__36__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x11U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+249,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__36__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x12U])
                                   : 0U)),10);
        bufp->chgSData(oldp+250,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__36__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x12U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+251,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__36__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x11U] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__36__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x12U] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+252,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__36__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x12U])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+253,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__37__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x12U])
                                   : 0U)),10);
        bufp->chgSData(oldp+254,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__37__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x12U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+255,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__37__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x13U])
                                   : 0U)),10);
        bufp->chgSData(oldp+256,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__37__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x12U])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__37__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x13U])
                                                : 0U)))),11);
        bufp->chgSData(oldp+257,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__37__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x12U] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+258,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__38__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x12U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+259,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__38__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x13U])
                                   : 0U)),10);
        bufp->chgSData(oldp+260,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__38__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x13U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+261,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__38__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x12U] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__38__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x13U] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+262,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__38__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x13U])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+263,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__39__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x13U])
                                   : 0U)),10);
        bufp->chgSData(oldp+264,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__39__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x13U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+265,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__39__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x14U])
                                   : 0U)),10);
        bufp->chgSData(oldp+266,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__39__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x13U])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__39__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x14U])
                                                : 0U)))),11);
        bufp->chgSData(oldp+267,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__39__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x13U] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+268,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__3__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[1U])
                                   : 0U)),10);
        bufp->chgSData(oldp+269,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__3__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[1U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+270,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__3__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[2U])
                                   : 0U)),10);
        bufp->chgSData(oldp+271,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__3__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[1U])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__3__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[2U])
                                                : 0U)))),11);
        bufp->chgSData(oldp+272,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__3__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[1U] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+273,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__40__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x13U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+274,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__40__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x14U])
                                   : 0U)),10);
        bufp->chgSData(oldp+275,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__40__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x14U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+276,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__40__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x13U] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__40__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x14U] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+277,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__40__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x14U])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+278,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__41__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x14U])
                                   : 0U)),10);
        bufp->chgSData(oldp+279,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__41__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x14U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+280,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__41__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x15U])
                                   : 0U)),10);
        bufp->chgSData(oldp+281,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__41__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x14U])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__41__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x15U])
                                                : 0U)))),11);
        bufp->chgSData(oldp+282,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__41__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x14U] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+283,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__42__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x14U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+284,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__42__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x15U])
                                   : 0U)),10);
        bufp->chgSData(oldp+285,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__42__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x15U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+286,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__42__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x14U] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__42__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x15U] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+287,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__42__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x15U])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+288,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__43__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x15U])
                                   : 0U)),10);
        bufp->chgSData(oldp+289,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__43__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x15U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+290,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__43__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x16U])
                                   : 0U)),10);
        bufp->chgSData(oldp+291,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__43__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x15U])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__43__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x16U])
                                                : 0U)))),11);
        bufp->chgSData(oldp+292,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__43__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x15U] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+293,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__44__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x15U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+294,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__44__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x16U])
                                   : 0U)),10);
        bufp->chgSData(oldp+295,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__44__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x16U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+296,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__44__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x15U] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__44__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x16U] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+297,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__44__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x16U])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+298,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__45__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x16U])
                                   : 0U)),10);
        bufp->chgSData(oldp+299,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__45__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x16U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+300,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__45__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x17U])
                                   : 0U)),10);
        bufp->chgSData(oldp+301,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__45__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x16U])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__45__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x17U])
                                                : 0U)))),11);
        bufp->chgSData(oldp+302,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__45__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x16U] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+303,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__46__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x16U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+304,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__46__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x17U])
                                   : 0U)),10);
        bufp->chgSData(oldp+305,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__46__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x17U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+306,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__46__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x16U] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__46__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x17U] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+307,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__46__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x17U])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+308,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__47__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x17U])
                                   : 0U)),10);
        bufp->chgSData(oldp+309,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__47__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x17U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+310,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__47__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x18U])
                                   : 0U)),10);
        bufp->chgSData(oldp+311,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__47__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x17U])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__47__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x18U])
                                                : 0U)))),11);
        bufp->chgSData(oldp+312,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__47__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x17U] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+313,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__48__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x17U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+314,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__48__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x18U])
                                   : 0U)),10);
        bufp->chgSData(oldp+315,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__48__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x18U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+316,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__48__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x17U] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__48__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x18U] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+317,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__48__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x18U])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+318,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__49__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x18U])
                                   : 0U)),10);
        bufp->chgSData(oldp+319,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__49__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x18U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+320,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__49__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x19U])
                                   : 0U)),10);
        bufp->chgSData(oldp+321,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__49__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x18U])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__49__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x19U])
                                                : 0U)))),11);
        bufp->chgSData(oldp+322,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__49__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x18U] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+323,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__4__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[1U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+324,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__4__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[2U])
                                   : 0U)),10);
        bufp->chgSData(oldp+325,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__4__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[2U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+326,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__4__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[1U] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__4__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[2U] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+327,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__4__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[2U])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+328,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__50__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x18U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+329,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__50__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x19U])
                                   : 0U)),10);
        bufp->chgSData(oldp+330,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__50__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x19U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+331,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__50__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x18U] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__50__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x19U] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+332,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__50__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x19U])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+333,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__51__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x19U])
                                   : 0U)),10);
        bufp->chgSData(oldp+334,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__51__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x19U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+335,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__51__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1aU])
                                   : 0U)),10);
        bufp->chgSData(oldp+336,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__51__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x19U])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__51__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1aU])
                                                : 0U)))),11);
        bufp->chgSData(oldp+337,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__51__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x19U] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+338,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__52__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x19U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+339,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__52__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1aU])
                                   : 0U)),10);
        bufp->chgSData(oldp+340,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__52__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1aU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+341,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__52__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x19U] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__52__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1aU] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+342,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__52__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1aU])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+343,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__53__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1aU])
                                   : 0U)),10);
        bufp->chgSData(oldp+344,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__53__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1aU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+345,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__53__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1bU])
                                   : 0U)),10);
        bufp->chgSData(oldp+346,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__53__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1aU])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__53__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1bU])
                                                : 0U)))),11);
        bufp->chgSData(oldp+347,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__53__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1aU] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+348,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__54__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1aU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+349,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__54__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1bU])
                                   : 0U)),10);
        bufp->chgSData(oldp+350,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__54__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1bU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+351,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__54__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1aU] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__54__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1bU] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+352,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__54__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1bU])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+353,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__55__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1bU])
                                   : 0U)),10);
        bufp->chgSData(oldp+354,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__55__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1bU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+355,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__55__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1cU])
                                   : 0U)),10);
        bufp->chgSData(oldp+356,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__55__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1bU])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__55__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1cU])
                                                : 0U)))),11);
        bufp->chgSData(oldp+357,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__55__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1bU] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+358,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__56__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1bU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+359,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__56__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1cU])
                                   : 0U)),10);
        bufp->chgSData(oldp+360,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__56__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1cU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+361,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__56__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1bU] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__56__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1cU] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+362,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__56__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1cU])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+363,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__57__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1cU])
                                   : 0U)),10);
        bufp->chgSData(oldp+364,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__57__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1cU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+365,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__57__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1dU])
                                   : 0U)),10);
        bufp->chgSData(oldp+366,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__57__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1cU])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__57__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1dU])
                                                : 0U)))),11);
        bufp->chgSData(oldp+367,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__57__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1cU] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+368,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__58__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1cU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+369,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__58__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1dU])
                                   : 0U)),10);
        bufp->chgSData(oldp+370,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__58__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1dU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+371,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__58__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1cU] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__58__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1dU] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+372,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__58__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1dU])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+373,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__59__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1dU])
                                   : 0U)),10);
        bufp->chgSData(oldp+374,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__59__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1dU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+375,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__59__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1eU])
                                   : 0U)),10);
        bufp->chgSData(oldp+376,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__59__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1dU])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__59__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1eU])
                                                : 0U)))),11);
        bufp->chgSData(oldp+377,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__59__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1dU] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+378,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__5__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[2U])
                                   : 0U)),10);
        bufp->chgSData(oldp+379,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__5__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[2U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+380,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__5__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[3U])
                                   : 0U)),10);
        bufp->chgSData(oldp+381,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__5__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[2U])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__5__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[3U])
                                                : 0U)))),11);
        bufp->chgSData(oldp+382,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__5__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[2U] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+383,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__60__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1dU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+384,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__60__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1eU])
                                   : 0U)),10);
        bufp->chgSData(oldp+385,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__60__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1eU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+386,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__60__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1dU] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__60__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1eU] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+387,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__60__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1eU])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+388,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__61__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1eU])
                                   : 0U)),10);
        bufp->chgSData(oldp+389,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__61__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1eU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+390,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__61__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1fU])
                                   : 0U)),10);
        bufp->chgSData(oldp+391,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__61__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1eU])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__61__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1fU])
                                                : 0U)))),11);
        bufp->chgSData(oldp+392,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__61__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1eU] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+393,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__62__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1eU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+394,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__62__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1fU])
                                   : 0U)),10);
        bufp->chgSData(oldp+395,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__62__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1fU] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+396,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__62__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1eU] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__62__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1fU] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+397,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__62__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1fU])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+398,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__6__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[2U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+399,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__6__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[3U])
                                   : 0U)),10);
        bufp->chgSData(oldp+400,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__6__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[3U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+401,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__6__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[2U] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__6__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[3U] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+402,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__6__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[3U])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+403,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__7__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[3U])
                                   : 0U)),10);
        bufp->chgSData(oldp+404,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__7__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[3U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+405,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__7__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[4U])
                                   : 0U)),10);
        bufp->chgSData(oldp+406,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__7__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[3U])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__7__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[4U])
                                                : 0U)))),11);
        bufp->chgSData(oldp+407,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__7__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[3U] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+408,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__8__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[3U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+409,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__8__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[4U])
                                   : 0U)),10);
        bufp->chgSData(oldp+410,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__8__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[4U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+411,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__8__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[3U] 
                                                    >> 0x10U))
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__8__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[4U] 
                                                      >> 0x10U))
                                                : 0U)))),11);
        bufp->chgSData(oldp+412,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__8__KET____DOT__w_unit_active)
                                    ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[4U])
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+413,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__9__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[4U])
                                   : 0U)),10);
        bufp->chgSData(oldp+414,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__9__KET____DOT__w_unit_active)
                                   ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[4U] 
                                                >> 0x10U))
                                   : 0U)),10);
        bufp->chgSData(oldp+415,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__9__KET____DOT__w_unit_active)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[5U])
                                   : 0U)),10);
        bufp->chgSData(oldp+416,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__9__KET____DOT__w_unit_active)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[4U])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__9__KET____DOT__w_unit_active)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[5U])
                                                : 0U)))),11);
        bufp->chgSData(oldp+417,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__GEN_TOP_FILTER_ARRAY__BRA__9__KET____DOT__w_unit_active)
                                    ? (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[4U] 
                                                 >> 0x10U))
                                    : 0U) << 1U)),11);
        bufp->chgSData(oldp+418,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__w_filter_launch_valid)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0U])
                                   : 0U)),10);
        bufp->chgSData(oldp+419,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__w_filter_launch_valid)
                                   ? (0x3ffU & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_tl_data))
                                   : 0U)),10);
        bufp->chgSData(oldp+420,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__w_filter_launch_valid)
                                   ? (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0U])
                                   : 0U)),10);
        bufp->chgSData(oldp+421,((0x7ffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__w_filter_launch_valid)
                                              ? (0x3ffU 
                                                 & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0U])
                                              : 0U) 
                                            + ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__w_filter_launch_valid)
                                                ? (0x3ffU 
                                                   & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0U])
                                                : 0U)))),11);
        bufp->chgSData(oldp+422,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_filter__DOT__w_filter_launch_valid)
                                    ? (0x3ffU & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_tl_data))
                                    : 0U) << 1U)),11);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xdU])) {
        bufp->chgBit(oldp+423,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_left_internal_valid));
        bufp->chgBit(oldp+424,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_above_internal_valid));
        bufp->chgBit(oldp+425,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_SYNTAX_FIFO__DOT__w_write_fire));
        bufp->chgCData(oldp+426,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_next_state),2);
        bufp->chgCData(oldp+427,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_rsp_pixel_y),8);
        bufp->chgBit(oldp+428,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_rsp_row_valid));
        bufp->chgSData(oldp+429,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_0),10);
        bufp->chgSData(oldp+430,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_1),10);
        bufp->chgSData(oldp+431,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_2),10);
        bufp->chgSData(oldp+432,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_3),10);
        bufp->chgSData(oldp+433,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_4),10);
        bufp->chgSData(oldp+434,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_5),10);
        bufp->chgSData(oldp+435,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_6),10);
        bufp->chgSData(oldp+436,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_7),10);
        bufp->chgQData(oldp+437,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_row_a_data),40);
        bufp->chgQData(oldp+439,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_row_b_data),40);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xfU])) {
        bufp->chgCData(oldp+441,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__r_winner_mode),8);
        bufp->chgWData(oldp+442,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref),1024);
        bufp->chgWData(oldp+474,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref),1024);
        bufp->chgSData(oldp+506,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_tl_data),16);
        bufp->chgQData(oldp+507,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_processed_data),40);
        bufp->chgBit(oldp+509,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_tu_last
                               [3U]));
        bufp->chgCData(oldp+510,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_candidate_id),2);
        bufp->chgQData(oldp+511,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data),40);
        bufp->chgQData(oldp+513,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data),40);
        bufp->chgBit(oldp+515,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_last));
        bufp->chgCData(oldp+516,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_cost_candidate_id),2);
        bufp->chgIData(oldp+517,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_cost_value),20);
        bufp->chgSData(oldp+518,((0x3ffU & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data))),10);
        bufp->chgSData(oldp+519,((0x3ffU & (IData)(
                                                   (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                                                    >> 0xaU)))),10);
        bufp->chgSData(oldp+520,((0x3ffU & (IData)(
                                                   (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                                                    >> 0x14U)))),10);
        bufp->chgSData(oldp+521,((0x3ffU & (IData)(
                                                   (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                                                    >> 0x1eU)))),10);
        bufp->chgSData(oldp+522,((0x3ffU & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data))),10);
        bufp->chgSData(oldp+523,((0x3ffU & (IData)(
                                                   (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                                                    >> 0xaU)))),10);
        bufp->chgSData(oldp+524,((0x3ffU & (IData)(
                                                   (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                                                    >> 0x14U)))),10);
        bufp->chgSData(oldp+525,((0x3ffU & (IData)(
                                                   (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                                                    >> 0x1eU)))),10);
        bufp->chgSData(oldp+526,((0x3ffU & (((0x3ffU 
                                              & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data)) 
                                             >= (0x3ffU 
                                                 & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data)))
                                             ? ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data) 
                                                - (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data))
                                             : ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data) 
                                                - (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data))))),10);
        bufp->chgSData(oldp+527,((0x3ffU & (((0x3ffU 
                                              & (IData)(
                                                        (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                                                         >> 0xaU))) 
                                             >= (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                                                            >> 0xaU))))
                                             ? ((IData)(
                                                        (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                                                         >> 0xaU)) 
                                                - (IData)(
                                                          (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                                                           >> 0xaU)))
                                             : ((IData)(
                                                        (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                                                         >> 0xaU)) 
                                                - (IData)(
                                                          (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                                                           >> 0xaU)))))),10);
        bufp->chgSData(oldp+528,((0x3ffU & (((0x3ffU 
                                              & (IData)(
                                                        (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                                                         >> 0x14U))) 
                                             >= (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                                                            >> 0x14U))))
                                             ? ((IData)(
                                                        (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                                                         >> 0x14U)) 
                                                - (IData)(
                                                          (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                                                           >> 0x14U)))
                                             : ((IData)(
                                                        (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                                                         >> 0x14U)) 
                                                - (IData)(
                                                          (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                                                           >> 0x14U)))))),10);
        bufp->chgSData(oldp+529,((0x3ffU & (((0x3ffU 
                                              & (IData)(
                                                        (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                                                         >> 0x1eU))) 
                                             >= (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                                                            >> 0x1eU))))
                                             ? ((IData)(
                                                        (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                                                         >> 0x1eU)) 
                                                - (IData)(
                                                          (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                                                           >> 0x1eU)))
                                             : ((IData)(
                                                        (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                                                         >> 0x1eU)) 
                                                - (IData)(
                                                          (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                                                           >> 0x1eU)))))),10);
        bufp->chgSData(oldp+530,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_diff_0),10);
        bufp->chgSData(oldp+531,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_diff_1),10);
        bufp->chgSData(oldp+532,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_diff_2),10);
        bufp->chgSData(oldp+533,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_diff_3),10);
        bufp->chgCData(oldp+534,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_candidate_id),2);
        bufp->chgBit(oldp+535,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_last));
        bufp->chgSData(oldp+536,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage2_sum_01),11);
        bufp->chgSData(oldp+537,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage2_sum_23),11);
        bufp->chgCData(oldp+538,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage2_candidate_id),2);
        bufp->chgBit(oldp+539,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage2_last));
        bufp->chgSData(oldp+540,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage3_beat_sad),12);
        bufp->chgCData(oldp+541,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage3_candidate_id),2);
        bufp->chgBit(oldp+542,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage3_last));
        bufp->chgIData(oldp+543,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage3_beat_sad),20);
        bufp->chgCData(oldp+544,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_req_candidate_id),2);
        bufp->chgQData(oldp+545,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_req_pred_data),40);
        bufp->chgBit(oldp+547,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_req_last));
        bufp->chgQData(oldp+548,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_orig_data),40);
        bufp->chgCData(oldp+550,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo1_candidate_id),2);
        bufp->chgQData(oldp+551,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo1_pred_data),40);
        bufp->chgQData(oldp+553,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo1_orig_data),40);
        bufp->chgBit(oldp+555,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo1_last));
        bufp->chgBit(oldp+556,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_tu_last[0]));
        bufp->chgBit(oldp+557,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_tu_last[1]));
        bufp->chgBit(oldp+558,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_tu_last[2]));
        bufp->chgBit(oldp+559,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_tu_last[3]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x11U])) {
        bufp->chgBit(oldp+560,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_input_fire));
        bufp->chgCData(oldp+561,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_component_id),2);
        bufp->chgCData(oldp+562,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_cu_x),7);
        bufp->chgCData(oldp+563,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_cu_y),7);
        bufp->chgCData(oldp+564,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code),3);
        bufp->chgCData(oldp+565,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code),3);
        bufp->chgBit(oldp+566,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_orig_tu_ready));
        bufp->chgBit(oldp+567,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctrl_cand_start_ready));
        bufp->chgCData(oldp+568,(((2U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_component_id))
                                   ? 0U : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_candidate_id))),2);
        bufp->chgCData(oldp+569,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_regular_mode),8);
        bufp->chgCData(oldp+570,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode),8);
        bufp->chgCData(oldp+571,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_core_select),2);
        bufp->chgBit(oldp+572,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_planar_start_ready));
        bufp->chgBit(oldp+573,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ang_h_start_ready));
        bufp->chgBit(oldp+574,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ang_v_start_ready));
        bufp->chgBit(oldp+575,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_start_ready));
        bufp->chgBit(oldp+576,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cand_start_fire));
        bufp->chgCData(oldp+577,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_active_candidate_id),2);
        bufp->chgSData(oldp+578,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_inv_angle_abs),15);
        bufp->chgBit(oldp+579,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_router_orig_ready));
        bufp->chgBit(oldp+580,((0U != (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo_count))));
        bufp->chgBit(oldp+581,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__w_stage1_ready));
        bufp->chgBit(oldp+582,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cand_start_fire) 
                                & (2U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_core_select)))));
        bufp->chgBit(oldp+583,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_mode_valid));
        bufp->chgSData(oldp+584,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_intra_pred_angle),11);
        bufp->chgSData(oldp+585,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_inv_angle_abs),15);
        bufp->chgBit(oldp+586,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_angle_negative));
        bufp->chgBit(oldp+587,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_mode_valid) 
                                & (0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_intra_pred_angle)))));
        bufp->chgBit(oldp+588,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_filter_flag));
        bufp->chgBit(oldp+589,(VL_GTS_III(8, 0x22U, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode))));
        bufp->chgBit(oldp+590,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_size_valid));
        bufp->chgBit(oldp+591,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready));
        bufp->chgBit(oldp+592,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered));
        bufp->chgWData(oldp+593,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref),640);
        bufp->chgWData(oldp+613,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_side_ref),640);
        bufp->chgCData(oldp+633,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length),7);
        bufp->chgSData(oldp+634,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint),10);
        bufp->chgWData(oldp+635,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_padded),640);
        bufp->chgBit(oldp+655,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_start));
        bufp->chgBit(oldp+656,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_component_valid));
        bufp->chgCData(oldp+657,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_input_width),6);
        bufp->chgCData(oldp+658,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_input_height),6);
        bufp->chgCData(oldp+659,((0xfU & VL_SHIFTR_III(4,4,32, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_code_sum), 1U))),4);
        bufp->chgCData(oldp+660,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_filter_threshold),6);
        bufp->chgSData(oldp+661,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_mode_ext),9);
        bufp->chgSData(oldp+662,((0x1ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_mode_ext) 
                                            - (IData)(0x12U)))),9);
        bufp->chgSData(oldp+663,((0x1ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_mode_ext) 
                                            - (IData)(0x32U)))),9);
        bufp->chgSData(oldp+664,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_mode_dist_18),9);
        bufp->chgSData(oldp+665,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_mode_dist_50),9);
        bufp->chgSData(oldp+666,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_min_dist),9);
        bufp->chgBit(oldp+667,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_interp_filter_flag_input));
        bufp->chgBit(oldp+668,((1U & ((4U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code))
                                       ? (~ ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code) 
                                             >> 1U))
                                       : ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code) 
                                          >> 1U)))));
        bufp->chgBit(oldp+669,((1U & ((4U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code))
                                       ? (~ ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code) 
                                             >> 1U))
                                       : ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code) 
                                          >> 1U)))));
        bufp->chgBit(oldp+670,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_valid));
        bufp->chgCData(oldp+671,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_code_sum),4);
        bufp->chgBit(oldp+672,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_valid) 
                                & (5U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_code_sum)))));
        bufp->chgBit(oldp+673,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_filter_required));
        bufp->chgBit(oldp+674,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cand_start_fire) 
                                & (3U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_core_select)))));
        bufp->chgBit(oldp+675,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_mode_valid));
        bufp->chgSData(oldp+676,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_intra_pred_angle),11);
        bufp->chgSData(oldp+677,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_inv_angle_abs),15);
        bufp->chgBit(oldp+678,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_angle_negative));
        bufp->chgBit(oldp+679,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_mode_valid) 
                                & (0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_intra_pred_angle)))));
        bufp->chgBit(oldp+680,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_ref_filter_flag));
        bufp->chgBit(oldp+681,(VL_LTES_III(8, 0x22U, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode))));
        bufp->chgBit(oldp+682,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready));
        bufp->chgBit(oldp+683,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered));
        bufp->chgWData(oldp+684,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref),640);
        bufp->chgWData(oldp+704,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_left_ref),640);
        bufp->chgCData(oldp+724,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length),7);
        bufp->chgSData(oldp+725,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint),10);
        bufp->chgWData(oldp+726,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_padded),640);
        bufp->chgBit(oldp+746,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_start));
        bufp->chgBit(oldp+747,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_valid));
        bufp->chgBit(oldp+748,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_valid) 
                                & (5U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_code_sum)))));
        bufp->chgBit(oldp+749,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_filter_required));
        bufp->chgCData(oldp+750,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_input_width),6);
        bufp->chgCData(oldp+751,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_input_height),6);
        bufp->chgCData(oldp+752,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_filter_threshold),6);
        bufp->chgSData(oldp+753,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_mode_dist_18),9);
        bufp->chgSData(oldp+754,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_mode_dist_50),9);
        bufp->chgSData(oldp+755,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_min_dist),9);
        bufp->chgBit(oldp+756,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_interp_filter_flag_input));
        bufp->chgCData(oldp+757,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_tu_width),6);
        bufp->chgCData(oldp+758,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_tu_height),6);
        bufp->chgBit(oldp+759,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_width_valid));
        bufp->chgBit(oldp+760,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_height_valid));
        bufp->chgBit(oldp+761,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_size_valid));
        bufp->chgBit(oldp+762,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_tu_start_accept));
        bufp->chgCData(oldp+763,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_write_candidate_id),2);
        bufp->chgBit(oldp+764,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_valid));
        bufp->chgBit(oldp+765,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__w_stage2_ready));
        bufp->chgBit(oldp+766,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage2_valid));
        bufp->chgBit(oldp+767,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__w_stage3_ready));
        bufp->chgBit(oldp+768,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage3_valid));
        bufp->chgIData(oldp+769,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_cost_accumulator),20);
        bufp->chgBit(oldp+770,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__w_cost_output_ready));
        bufp->chgBit(oldp+771,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cand_start_fire) 
                                & (1U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_core_select)))));
        bufp->chgIData(oldp+772,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask),32);
        bufp->chgIData(oldp+773,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask),32);
        bufp->chgBit(oldp+774,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_width_supported));
        bufp->chgBit(oldp+775,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_height_supported));
        bufp->chgBit(oldp+776,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_size_valid));
        bufp->chgBit(oldp+777,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_input_valid));
        bufp->chgIData(oldp+778,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0)
                                   ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask
                                   : 0U)),32);
        bufp->chgIData(oldp+779,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0)
                                   ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask
                                   : 0U)),32);
        bufp->chgCData(oldp+780,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_tu_width),6);
        bufp->chgCData(oldp+781,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_tu_height),6);
        bufp->chgBit(oldp+782,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_tree_enable));
        bufp->chgBit(oldp+783,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_tree_enable));
        bufp->chgCData(oldp+784,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_mux_sel),2);
        bufp->chgCData(oldp+785,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_round_value),6);
        bufp->chgCData(oldp+786,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_shift_amount),3);
        bufp->chgSData(oldp+787,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0]),10);
        bufp->chgSData(oldp+788,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[1]),10);
        bufp->chgSData(oldp+789,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[2]),10);
        bufp->chgSData(oldp+790,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[3]),10);
        bufp->chgSData(oldp+791,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[4]),10);
        bufp->chgSData(oldp+792,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[5]),10);
        bufp->chgSData(oldp+793,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[6]),10);
        bufp->chgSData(oldp+794,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[7]),10);
        bufp->chgSData(oldp+795,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[8]),10);
        bufp->chgSData(oldp+796,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[9]),10);
        bufp->chgSData(oldp+797,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[10]),10);
        bufp->chgSData(oldp+798,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[11]),10);
        bufp->chgSData(oldp+799,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[12]),10);
        bufp->chgSData(oldp+800,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[13]),10);
        bufp->chgSData(oldp+801,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[14]),10);
        bufp->chgSData(oldp+802,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[15]),10);
        bufp->chgSData(oldp+803,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[16]),10);
        bufp->chgSData(oldp+804,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[17]),10);
        bufp->chgSData(oldp+805,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[18]),10);
        bufp->chgSData(oldp+806,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[19]),10);
        bufp->chgSData(oldp+807,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[20]),10);
        bufp->chgSData(oldp+808,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[21]),10);
        bufp->chgSData(oldp+809,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[22]),10);
        bufp->chgSData(oldp+810,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[23]),10);
        bufp->chgSData(oldp+811,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[24]),10);
        bufp->chgSData(oldp+812,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[25]),10);
        bufp->chgSData(oldp+813,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[26]),10);
        bufp->chgSData(oldp+814,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[27]),10);
        bufp->chgSData(oldp+815,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[28]),10);
        bufp->chgSData(oldp+816,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[29]),10);
        bufp->chgSData(oldp+817,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[30]),10);
        bufp->chgSData(oldp+818,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[31]),10);
        bufp->chgSData(oldp+819,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0]),10);
        bufp->chgSData(oldp+820,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[1]),10);
        bufp->chgSData(oldp+821,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[2]),10);
        bufp->chgSData(oldp+822,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[3]),10);
        bufp->chgSData(oldp+823,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[4]),10);
        bufp->chgSData(oldp+824,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[5]),10);
        bufp->chgSData(oldp+825,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[6]),10);
        bufp->chgSData(oldp+826,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[7]),10);
        bufp->chgSData(oldp+827,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[8]),10);
        bufp->chgSData(oldp+828,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[9]),10);
        bufp->chgSData(oldp+829,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[10]),10);
        bufp->chgSData(oldp+830,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[11]),10);
        bufp->chgSData(oldp+831,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[12]),10);
        bufp->chgSData(oldp+832,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[13]),10);
        bufp->chgSData(oldp+833,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[14]),10);
        bufp->chgSData(oldp+834,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[15]),10);
        bufp->chgSData(oldp+835,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[16]),10);
        bufp->chgSData(oldp+836,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[17]),10);
        bufp->chgSData(oldp+837,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[18]),10);
        bufp->chgSData(oldp+838,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[19]),10);
        bufp->chgSData(oldp+839,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[20]),10);
        bufp->chgSData(oldp+840,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[21]),10);
        bufp->chgSData(oldp+841,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[22]),10);
        bufp->chgSData(oldp+842,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[23]),10);
        bufp->chgSData(oldp+843,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[24]),10);
        bufp->chgSData(oldp+844,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[25]),10);
        bufp->chgSData(oldp+845,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[26]),10);
        bufp->chgSData(oldp+846,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[27]),10);
        bufp->chgSData(oldp+847,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[28]),10);
        bufp->chgSData(oldp+848,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[29]),10);
        bufp->chgSData(oldp+849,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[30]),10);
        bufp->chgSData(oldp+850,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[31]),10);
        bufp->chgSData(oldp+851,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[0]),11);
        bufp->chgSData(oldp+852,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[1]),11);
        bufp->chgSData(oldp+853,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[2]),11);
        bufp->chgSData(oldp+854,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[3]),11);
        bufp->chgSData(oldp+855,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[4]),11);
        bufp->chgSData(oldp+856,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[5]),11);
        bufp->chgSData(oldp+857,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[6]),11);
        bufp->chgSData(oldp+858,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[7]),11);
        bufp->chgSData(oldp+859,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[8]),11);
        bufp->chgSData(oldp+860,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[9]),11);
        bufp->chgSData(oldp+861,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[10]),11);
        bufp->chgSData(oldp+862,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[11]),11);
        bufp->chgSData(oldp+863,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[12]),11);
        bufp->chgSData(oldp+864,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[13]),11);
        bufp->chgSData(oldp+865,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[14]),11);
        bufp->chgSData(oldp+866,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[15]),11);
        bufp->chgSData(oldp+867,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[0]),11);
        bufp->chgSData(oldp+868,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[1]),11);
        bufp->chgSData(oldp+869,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[2]),11);
        bufp->chgSData(oldp+870,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[3]),11);
        bufp->chgSData(oldp+871,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[4]),11);
        bufp->chgSData(oldp+872,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[5]),11);
        bufp->chgSData(oldp+873,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[6]),11);
        bufp->chgSData(oldp+874,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[7]),11);
        bufp->chgSData(oldp+875,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[8]),11);
        bufp->chgSData(oldp+876,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[9]),11);
        bufp->chgSData(oldp+877,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[10]),11);
        bufp->chgSData(oldp+878,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[11]),11);
        bufp->chgSData(oldp+879,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[12]),11);
        bufp->chgSData(oldp+880,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[13]),11);
        bufp->chgSData(oldp+881,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[14]),11);
        bufp->chgSData(oldp+882,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[15]),11);
        bufp->chgSData(oldp+883,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l2[0]),12);
        bufp->chgSData(oldp+884,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l2[1]),12);
        bufp->chgSData(oldp+885,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l2[2]),12);
        bufp->chgSData(oldp+886,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l2[3]),12);
        bufp->chgSData(oldp+887,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l2[4]),12);
        bufp->chgSData(oldp+888,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l2[5]),12);
        bufp->chgSData(oldp+889,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l2[6]),12);
        bufp->chgSData(oldp+890,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l2[7]),12);
        bufp->chgSData(oldp+891,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l2[0]),12);
        bufp->chgSData(oldp+892,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l2[1]),12);
        bufp->chgSData(oldp+893,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l2[2]),12);
        bufp->chgSData(oldp+894,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l2[3]),12);
        bufp->chgSData(oldp+895,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l2[4]),12);
        bufp->chgSData(oldp+896,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l2[5]),12);
        bufp->chgSData(oldp+897,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l2[6]),12);
        bufp->chgSData(oldp+898,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l2[7]),12);
        bufp->chgCData(oldp+899,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_candidate_id),2);
        bufp->chgBit(oldp+900,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_cand_start_accept));
        bufp->chgBit(oldp+901,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_candidate_done_match));
        bufp->chgCData(oldp+902,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_wh_ratio),3);
        bufp->chgCData(oldp+903,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_wide_threshold),8);
        bufp->chgCData(oldp+904,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_tall_threshold),8);
        bufp->chgBit(oldp+905,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_width_gt_height));
        bufp->chgBit(oldp+906,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_height_gt_width));
        bufp->chgCData(oldp+907,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__r_best_mode),8);
        bufp->chgBit(oldp+908,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__w_tu_start_fire));
        bufp->chgBit(oldp+909,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__w_cost_fire));
        bufp->chgCData(oldp+910,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_0),8);
        bufp->chgCData(oldp+911,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_1),8);
        bufp->chgCData(oldp+912,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_2),8);
        bufp->chgCData(oldp+913,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_3),8);
        bufp->chgBit(oldp+914,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_tu_start_accept));
        bufp->chgBit(oldp+915,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_can_issue));
        bufp->chgBit(oldp+916,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_rsp_pop));
        bufp->chgCData(oldp+917,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo_count),2);
        bufp->chgBit(oldp+918,(((2U <= (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code)) 
                                & ((5U >= (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code)) 
                                   & ((2U <= (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code)) 
                                      & ((5U >= (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code)) 
                                         & ((3U != (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_component_id)) 
                                            & (VL_LTES_III(8, 0xf2U, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode)) 
                                               & VL_GTES_III(8, 0x50U, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode))))))))));
        bufp->chgBit(oldp+919,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_start_accept));
        bufp->chgBit(oldp+920,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_control_pdpc_enable));
        bufp->chgCData(oldp+921,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_control_pdpc_mode),3);
        bufp->chgCData(oldp+922,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_control_nscale),2);
        bufp->chgIData(oldp+923,((0x1ffffU & (((IData)(3U) 
                                               * (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_inv_angle_abs)) 
                                              - (IData)(2U)))),17);
        bufp->chgCData(oldp+924,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_inv_log2),5);
        bufp->chgCData(oldp+925,((3U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_code_sum) 
                                         - (IData)(2U)) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+926,((VL_GTS_III(8, 0x12U, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode))
                                   ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code)
                                   : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code))),7);
        bufp->chgCData(oldp+927,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_inv_log2),7);
        bufp->chgCData(oldp+928,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_angular_nscale),7);
        bufp->chgBit(oldp+929,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cand_start_fire) 
                                & (0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_core_select)))));
        bufp->chgCData(oldp+930,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_input_width),6);
        bufp->chgCData(oldp+931,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_input_height),6);
        bufp->chgBit(oldp+932,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_width_supported));
        bufp->chgBit(oldp+933,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_height_supported));
        bufp->chgBit(oldp+934,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_size_valid));
        bufp->chgBit(oldp+935,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_filter_required));
        bufp->chgBit(oldp+936,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered));
        bufp->chgBit(oldp+937,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_input_accept));
        bufp->chgWData(oldp+938,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_top_ref),330);
        bufp->chgWData(oldp+949,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_left_ref),330);
        bufp->chgBit(oldp+960,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PREDICTION_RESULT_ROUTER__DOT__w_search_done));
        bufp->chgBit(oldp+961,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfilt_tl_wr_en));
        bufp->chgBit(oldp+962,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_PDPC_ANGLE_LUT__DOT__O_MODE_VALID));
        bufp->chgSData(oldp+963,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_PDPC_ANGLE_LUT__DOT__O_INTRA_PRED_ANGLE),11);
        bufp->chgBit(oldp+964,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_PDPC_ANGLE_LUT__DOT__O_MODE_VALID) 
                                & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_PDPC_ANGLE_LUT__DOT__O_INTRA_PRED_ANGLE) 
                                   >> 0xaU))));
        bufp->chgBit(oldp+965,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_PDPC_ANGLE_LUT__DOT__O_MODE_VALID) 
                                & (0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_PDPC_ANGLE_LUT__DOT__O_INTRA_PRED_ANGLE)))));
        bufp->chgBit(oldp+966,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_PDPC_ANGLE_LUT__DOT__O_REF_FILTER_FLAG));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x12U])) {
        bufp->chgBit(oldp+967,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__pred_last));
        bufp->chgBit(oldp+968,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctrl_intra_done));
        bufp->chgWData(oldp+969,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__current_pred_payload),128);
        bufp->chgBit(oldp+973,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cr_output_done));
        bufp->chgBit(oldp+974,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_ready));
        bufp->chgBit(oldp+975,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_candidate_complete));
        bufp->chgCData(oldp+976,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_bank_valid_next),4);
        bufp->chgBit(oldp+977,((0xfU == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_bank_valid_next))));
        bufp->chgCData(oldp+978,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__w_received_mask_next),4);
        bufp->chgBit(oldp+979,((0xfU == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__w_received_mask_next))));
        bufp->chgBit(oldp+980,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__w_current_is_better));
        bufp->chgBit(oldp+981,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_rsp_push));
        bufp->chgCData(oldp+982,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_fifo_count_next),2);
        bufp->chgSData(oldp+983,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfilt_tl_wr_data),16);
    }
    bufp->chgBit(oldp+984,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__I_CLK));
    bufp->chgBit(oldp+985,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_cu_ready) 
                            & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__live_partition))));
    bufp->chgBit(oldp+986,(((~ ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ctu_active) 
                                | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_mode_busy))) 
                            & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_syntax_ctu_ready))));
    bufp->chgQData(oldp+987,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cr_direct_active)
                               ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_processed_data
                               : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_stage2_data)),40);
    bufp->chgCData(oldp+989,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cr_direct_active)
                               ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_winner_chroma_mode)
                               : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_selected_mode))),8);
    bufp->chgBit(oldp+990,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_mode_busy) 
                            | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_syntax_busy))));
    bufp->chgBit(oldp+991,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT____VdfgTmp_h743687fb__0) 
                            & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_syntax_leaf_ready))));
    bufp->chgBit(oldp+992,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctu_start_fire));
    bufp->chgBit(oldp+993,(((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_core_select))
                             ? ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_core_select))
                                 ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ang_v_start_ready)
                                 : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ang_h_start_ready))
                             : ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_core_select))
                                 ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_stage1_ready)
                                 : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_planar_start_ready)))));
    bufp->chgBit(oldp+994,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_error) 
                            | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_error) 
                               | (0xdU == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state))))));
    bufp->chgSData(oldp+995,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                               ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                             ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_tl)
                                             : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_tl)))
                               : 0U)),10);
    bufp->chgBit(oldp+996,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_output_transfer) 
                            & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_output_tu_last))));
    bufp->chgCData(oldp+997,((0xfU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_fifo_push)
                                       ? ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_output_transfer)
                                           ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_fifo_count)
                                           : ((IData)(1U) 
                                              + (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_fifo_count)))
                                       : ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_output_transfer)
                                           ? ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_fifo_count) 
                                              - (IData)(1U))
                                           : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_fifo_count))))),4);
    bufp->chgCData(oldp+998,((0xfU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_output_issue_accept)
                                       ? ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_output_transfer)
                                           ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_outstanding_count)
                                           : ((IData)(1U) 
                                              + (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_outstanding_count)))
                                       : ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_output_transfer)
                                           ? ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_outstanding_count) 
                                              - (IData)(1U))
                                           : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_outstanding_count))))),4);
    bufp->chgSData(oldp+999,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                               ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                             ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_tl)
                                             : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_tl)))
                               : 0U)),10);
    bufp->chgBit(oldp+1000,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_output_transfer) 
                             & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_output_tu_last))));
    bufp->chgCData(oldp+1001,((0xfU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_fifo_push)
                                        ? ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_output_transfer)
                                            ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_fifo_count)
                                            : ((IData)(1U) 
                                               + (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_fifo_count)))
                                        : ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_output_transfer)
                                            ? ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_fifo_count) 
                                               - (IData)(1U))
                                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_fifo_count))))),4);
    bufp->chgCData(oldp+1002,((0xfU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_issue_accept)
                                        ? ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_output_transfer)
                                            ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_outstanding_count)
                                            : ((IData)(1U) 
                                               + (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_outstanding_count)))
                                        : ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__w_output_transfer)
                                            ? ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_outstanding_count) 
                                               - (IData)(1U))
                                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_output_pipeline__DOT__r_outstanding_count))))),4);
    bufp->chgCData(oldp+1003,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_next_state),3);
    bufp->chgBit(oldp+1004,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_stage2_valid) 
                             & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cand_rd_ready) 
                                & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_stage2_last)))));
    bufp->chgCData(oldp+1005,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_next_state),5);
    bufp->chgBit(oldp+1006,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_orig_tu_ready) 
                             & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctrl_orig_start))));
    bufp->chgCData(oldp+1007,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__w_current_mode),8);
    bufp->chgBit(oldp+1008,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_core_pred_valid) 
                             & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_core_pred_ready))));
    bufp->chgBit(oldp+1009,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_valid) 
                              >> 3U) & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_ready) 
                                        & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_tu_last
                                        [3U]))));
    bufp->chgBit(oldp+1010,((1U & ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_filter_required)) 
                                   | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filtered_valid)))));
    bufp->chgCData(oldp+1011,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__w_next_state),3);
    bufp->chgSData(oldp+1012,((0xffffU & ((4U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_control__DOT__r_tu_width_code))
                                           ? ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_control__DOT__r_tu_width_code))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_control__DOT__r_tu_width_code))
                                                   ? 
                                                  ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1fU] 
                                                    << 0x10U) 
                                                   | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1fU] 
                                                      >> 0x10U))
                                                   : 
                                                  ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xfU] 
                                                    << 0x10U) 
                                                   | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xfU] 
                                                      >> 0x10U))))
                                           : ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_control__DOT__r_tu_width_code))
                                               ? ((1U 
                                                   & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_control__DOT__r_tu_width_code))
                                                   ? 
                                                  ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[7U] 
                                                    << 0x10U) 
                                                   | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[7U] 
                                                      >> 0x10U))
                                                   : 
                                                  ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[3U] 
                                                    << 0x10U) 
                                                   | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[3U] 
                                                      >> 0x10U)))
                                               : 0U)))),16);
    bufp->chgSData(oldp+1013,((0xffffU & ((4U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_control__DOT__r_tu_height_code))
                                           ? ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_control__DOT__r_tu_height_code))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_control__DOT__r_tu_height_code))
                                                   ? 
                                                  ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1fU] 
                                                    << 0x10U) 
                                                   | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1fU] 
                                                      >> 0x10U))
                                                   : 
                                                  ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0xfU] 
                                                    << 0x10U) 
                                                   | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0xfU] 
                                                      >> 0x10U))))
                                           : ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_control__DOT__r_tu_height_code))
                                               ? ((1U 
                                                   & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_control__DOT__r_tu_height_code))
                                                   ? 
                                                  ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[7U] 
                                                    << 0x10U) 
                                                   | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[7U] 
                                                      >> 0x10U))
                                                   : 
                                                  ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[3U] 
                                                    << 0x10U) 
                                                   | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[3U] 
                                                      >> 0x10U)))
                                               : 0U)))),16);
    bufp->chgCData(oldp+1014,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_next_state),4);
    bufp->chgBit(oldp+1015,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_ctu_fire));
    bufp->chgBit(oldp+1016,(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_leaf_match));
    bufp->chgIData(oldp+1017,((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_cu_ctu_id) 
                                << 0x16U) | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_cu_id) 
                                              << 0xeU) 
                                             | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_mpm_flag) 
                                                 << 0xdU) 
                                                | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_not_planar_flag) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_mpm_idx) 
                                                       << 9U) 
                                                      | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_mpm_remainder) 
                                                          << 3U) 
                                                         | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_chroma_syntax)))))))),31);
    bufp->chgBit(oldp+1018,(((4U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state)) 
                             & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_selected_fire))));
    bufp->chgBit(oldp+1019,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_map_neighbor_ready) 
                             & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_map_neighbor_valid))));
    bufp->chgIData(oldp+1020,((((1U & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_row_active 
                                       >> (0x1fU & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_write_y_unit))))
                                 ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_valid_columns
                                [(0x1fU & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_write_y_unit))]
                                 : 0U) | ((IData)(1U) 
                                          << (0x1fU 
                                              & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_write_x_unit))))),32);
    bufp->chgBit(oldp+1021,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__w_feature_bank_b_wr_en) 
                             & ((0x1fU == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__r_tile_b_x_d2)) 
                                & (0x1fU == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__r_tile_b_y_d2))))));
    bufp->chgBit(oldp+1022,(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__p_done_ack) 
                             & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__w_engine_done))));
    bufp->chgQData(oldp+1023,((((QData)((IData)((0x1fU 
                                                 & ((IData)(
                                                            (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_NODE_REG__DOT__r_node_data 
                                                             >> 0x30U)) 
                                                    + 
                                                    ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_0_offset_x) 
                                                     >> 2U))))) 
                                << 0x30U) | (((QData)((IData)(
                                                              (0x1fU 
                                                               & ((IData)(
                                                                          (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_NODE_REG__DOT__r_node_data 
                                                                           >> 0x2bU)) 
                                                                  + 
                                                                  ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_0_offset_y) 
                                                                   >> 2U))))) 
                                              << 0x2bU) 
                                             | (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_0_width_code)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_0_height_code)) 
                                                    << 0x25U) 
                                                   | (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_0_valid_width)) 
                                                       << 0x1dU) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_0_valid_height) 
                                                                          << 0x15U) 
                                                                         | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_qt_depth) 
                                                                             << 0x12U) 
                                                                            | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_mtt_depth) 
                                                                                << 0xfU) 
                                                                               | ((0x7000U 
                                                                                & ((IData)(
                                                                                (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_NODE_REG__DOT__r_node_data 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_selected_split_type) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_0_boundary_flags) 
                                                                                << 5U) 
                                                                                | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_0_part_idx) 
                                                                                << 3U))))))))))))))),53);
    bufp->chgQData(oldp+1025,((((QData)((IData)((0x1fU 
                                                 & ((IData)(
                                                            (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_NODE_REG__DOT__r_node_data 
                                                             >> 0x30U)) 
                                                    + 
                                                    ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_1_offset_x) 
                                                     >> 2U))))) 
                                << 0x30U) | (((QData)((IData)(
                                                              (0x1fU 
                                                               & ((IData)(
                                                                          (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_NODE_REG__DOT__r_node_data 
                                                                           >> 0x2bU)) 
                                                                  + 
                                                                  ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_1_offset_y) 
                                                                   >> 2U))))) 
                                              << 0x2bU) 
                                             | (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_1_width_code)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_1_height_code)) 
                                                    << 0x25U) 
                                                   | (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_1_valid_width)) 
                                                       << 0x1dU) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_1_valid_height) 
                                                                          << 0x15U) 
                                                                         | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_qt_depth) 
                                                                             << 0x12U) 
                                                                            | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_mtt_depth) 
                                                                                << 0xfU) 
                                                                               | ((0x7000U 
                                                                                & ((IData)(
                                                                                (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_NODE_REG__DOT__r_node_data 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_selected_split_type) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_1_boundary_flags) 
                                                                                << 5U) 
                                                                                | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_1_part_idx) 
                                                                                << 3U))))))))))))))),53);
    bufp->chgQData(oldp+1027,((((QData)((IData)((0x1fU 
                                                 & ((IData)(
                                                            (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_NODE_REG__DOT__r_node_data 
                                                             >> 0x30U)) 
                                                    + 
                                                    ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_3_offset_x) 
                                                     >> 2U))))) 
                                << 0x30U) | (((QData)((IData)(
                                                              (0x1fU 
                                                               & ((IData)(
                                                                          (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_NODE_REG__DOT__r_node_data 
                                                                           >> 0x2bU)) 
                                                                  + 
                                                                  ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_3_offset_y) 
                                                                   >> 2U))))) 
                                              << 0x2bU) 
                                             | (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_3_width_code)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_3_height_code)) 
                                                    << 0x25U) 
                                                   | (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_3_valid_width)) 
                                                       << 0x1dU) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_3_valid_height) 
                                                                          << 0x15U) 
                                                                         | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_qt_depth) 
                                                                             << 0x12U) 
                                                                            | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_mtt_depth) 
                                                                                << 0xfU) 
                                                                               | ((0x7000U 
                                                                                & ((IData)(
                                                                                (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_NODE_REG__DOT__r_node_data 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_selected_split_type) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_3_boundary_flags) 
                                                                                << 5U) 
                                                                                | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CHILD_NODE_GENERATOR__DOT__w_child_3_part_idx) 
                                                                                << 3U))))))))))))))),53);
}

void VINTRA_PARTITION_INTEGRATION_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_PARTITION_INTEGRATION_TB___024root__trace_cleanup\n"); );
    // Init
    VINTRA_PARTITION_INTEGRATION_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VINTRA_PARTITION_INTEGRATION_TB___024root*>(voidSelf);
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x13U] = 0U;
}
