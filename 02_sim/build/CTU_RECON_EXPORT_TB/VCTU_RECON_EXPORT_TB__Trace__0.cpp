// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCTU_RECON_EXPORT_TB__Syms.h"


void VCTU_RECON_EXPORT_TB___024root__trace_chg_0_sub_0(VCTU_RECON_EXPORT_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VCTU_RECON_EXPORT_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root__trace_chg_0\n"); );
    // Init
    VCTU_RECON_EXPORT_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCTU_RECON_EXPORT_TB___024root*>(voidSelf);
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCTU_RECON_EXPORT_TB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VCTU_RECON_EXPORT_TB___024root__trace_chg_0_sub_0(VCTU_RECON_EXPORT_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_RESETN));
        bufp->chgBit(oldp+1,(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_EXPORT_START_VALID));
        bufp->chgSData(oldp+2,(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_ID),9);
        bufp->chgCData(oldp+3,(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_WIDTH),8);
        bufp->chgCData(oldp+4,(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_HEIGHT),8);
        bufp->chgBit(oldp+5,(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_DATA_READY));
        bufp->chgBit(oldp+6,(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_en));
        bufp->chgCData(oldp+7,(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_comp),2);
        bufp->chgSData(oldp+8,(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr),12);
        bufp->chgQData(oldp+9,(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data),64);
        bufp->chgIData(oldp+11,(vlSelf->CTU_RECON_EXPORT_TB__DOT__case_id),32);
        bufp->chgIData(oldp+12,(vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats),32);
        bufp->chgIData(oldp+13,(vlSelf->CTU_RECON_EXPORT_TB__DOT__w),32);
        bufp->chgIData(oldp+14,(vlSelf->CTU_RECON_EXPORT_TB__DOT__h),32);
        bufp->chgBit(oldp+15,(vlSelf->CTU_RECON_EXPORT_TB__DOT__export_active));
        bufp->chgBit(oldp+16,(((8U <= (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_WIDTH)) 
                               & ((0x80U >= (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_WIDTH)) 
                                  & ((2U <= (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_HEIGHT)) 
                                     & ((0x80U >= (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_HEIGHT)) 
                                        & ((~ (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_HEIGHT)) 
                                           & (0U == 
                                              (7U & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_WIDTH))))))))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+17,(vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats),32);
        bufp->chgIData(oldp+18,(vlSelf->CTU_RECON_EXPORT_TB__DOT__reads),32);
        bufp->chgIData(oldp+19,(vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_comp),32);
        bufp->chgIData(oldp+20,(vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_x),32);
        bufp->chgIData(oldp+21,(vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_y),32);
        bufp->chgIData(oldp+22,(vlSelf->CTU_RECON_EXPORT_TB__DOT__done_seen),32);
        bufp->chgBit(oldp+23,(vlSelf->CTU_RECON_EXPORT_TB__DOT__was_stalled));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgQData(oldp+24,(vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_data),64);
        bufp->chgCData(oldp+26,(vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_comp),2);
        bufp->chgCData(oldp+27,(vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_x),7);
        bufp->chgCData(oldp+28,(vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_y),7);
        bufp->chgBit(oldp+29,(vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_row_last));
        bufp->chgBit(oldp+30,(vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_comp_last));
        bufp->chgBit(oldp+31,(vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_ctu_last));
        bufp->chgIData(oldp+32,(vlSelf->CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__cw),32);
        bufp->chgIData(oldp+33,(vlSelf->CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__ch),32);
        bufp->chgIData(oldp+34,(vlSelf->CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__addr),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+35,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_rd_valid));
        bufp->chgQData(oldp+36,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_data),64);
        bufp->chgCData(oldp+38,((0x7fU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x))),7);
        bufp->chgCData(oldp+39,((0x7fU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y))),7);
        bufp->chgSData(oldp+40,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_ctu_id),9);
        bufp->chgBit(oldp+41,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_row_last));
        bufp->chgBit(oldp+42,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component_last));
        bufp->chgBit(oldp+43,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_ctu_last));
        bufp->chgBit(oldp+44,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_done));
        bufp->chgCData(oldp+45,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_luma_width),8);
        bufp->chgCData(oldp+46,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_luma_height),8);
        bufp->chgCData(oldp+47,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_comp_width),8);
        bufp->chgCData(oldp+48,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_comp_height),8);
        bufp->chgCData(oldp+49,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x),8);
        bufp->chgCData(oldp+50,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y),8);
        bufp->chgBit(oldp+51,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__w_last_in_row));
        bufp->chgBit(oldp+52,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__w_last_in_component));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+53,((0U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))));
        bufp->chgBit(oldp+54,((1U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))));
        bufp->chgCData(oldp+55,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component),2);
        bufp->chgSData(oldp+56,(vlSelf->CTU_RECON_EXPORT_TB__DOT__O_RAM_RD_ADDR),12);
        bufp->chgBit(oldp+57,((3U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))));
        bufp->chgBit(oldp+58,(((0U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)) 
                               & (4U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)))));
        bufp->chgBit(oldp+59,((4U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))));
        bufp->chgCData(oldp+60,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state),3);
        bufp->chgBit(oldp+61,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__w_rd_component_valid));
    }
    bufp->chgBit(oldp+62,(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CLK));
    bufp->chgQData(oldp+63,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_rd_data),64);
}

void VCTU_RECON_EXPORT_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root__trace_cleanup\n"); );
    // Init
    VCTU_RECON_EXPORT_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCTU_RECON_EXPORT_TB___024root*>(voidSelf);
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
