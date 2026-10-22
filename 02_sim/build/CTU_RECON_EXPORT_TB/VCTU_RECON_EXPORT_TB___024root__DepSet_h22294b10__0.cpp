// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCTU_RECON_EXPORT_TB.h for the primary calling header

#include "VCTU_RECON_EXPORT_TB__pch.h"
#include "VCTU_RECON_EXPORT_TB___024root.h"

VlCoroutine VCTU_RECON_EXPORT_TB___024root___eval_initial__TOP__Vtiming__0(VCTU_RECON_EXPORT_TB___024root* vlSelf);
VlCoroutine VCTU_RECON_EXPORT_TB___024root___eval_initial__TOP__Vtiming__1(VCTU_RECON_EXPORT_TB___024root* vlSelf);

void VCTU_RECON_EXPORT_TB___024root___eval_initial(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VCTU_RECON_EXPORT_TB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VCTU_RECON_EXPORT_TB___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__CTU_RECON_EXPORT_TB__DOT__I_CLK__0 
        = vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CLK;
    vlSelf->__Vtrigprevexpr___TOP__CTU_RECON_EXPORT_TB__DOT__I_RESETN__0 
        = vlSelf->CTU_RECON_EXPORT_TB__DOT__I_RESETN;
}

VL_INLINE_OPT VlCoroutine VCTU_RECON_EXPORT_TB___024root___eval_initial__TOP__Vtiming__1(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 
                                           4);
        vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CLK = (1U 
                                                   & (~ (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CLK)));
    }
}

void VCTU_RECON_EXPORT_TB___024root___eval_act(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___eval_act\n"); );
}

VL_INLINE_OPT void VCTU_RECON_EXPORT_TB___024root___nba_sequent__TOP__1(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*7:0*/ __Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x;
    __Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x = 0;
    CData/*7:0*/ __Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y;
    __Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y = 0;
    // Body
    vlSelf->__Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state 
        = vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state;
    vlSelf->__Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component 
        = vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component;
    __Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y 
        = vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y;
    __Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x 
        = vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x;
    if (vlSelf->CTU_RECON_EXPORT_TB__DOT__I_RESETN) {
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_done = 0U;
        if ((4U & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))) {
            vlSelf->__Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state = 4U;
        } else if ((2U & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))) {
            if ((1U & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))) {
                if (vlSelf->CTU_RECON_EXPORT_TB__DOT__I_DATA_READY) {
                    if (vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_ctu_last) {
                        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_done = 1U;
                        vlSelf->__Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state = 0U;
                    } else if (vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component_last) {
                        vlSelf->__Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component 
                            = (3U & ((IData)(1U) + (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component)));
                        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_comp_width 
                            = (0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_luma_width), 1U));
                        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_comp_height 
                            = (0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_luma_height), 1U));
                        __Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x = 0U;
                        __Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y = 0U;
                        vlSelf->__Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state = 1U;
                    } else {
                        if (vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_row_last) {
                            __Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y)));
                            __Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x = 0U;
                        } else {
                            __Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x 
                                = (0xffU & ((IData)(4U) 
                                            + (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x)));
                        }
                        vlSelf->__Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state = 1U;
                    }
                }
            } else if (vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_rd_valid) {
                vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_data 
                    = vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_rd_data;
                vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_row_last 
                    = vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__w_last_in_row;
                vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component_last 
                    = vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__w_last_in_component;
                vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_ctu_last 
                    = ((IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__w_last_in_component) 
                       & (2U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component)));
                vlSelf->__Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state = 3U;
            }
        } else if ((1U & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))) {
            vlSelf->__Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state = 2U;
        } else if (vlSelf->CTU_RECON_EXPORT_TB__DOT__I_EXPORT_START_VALID) {
            if (((8U <= (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_WIDTH)) 
                 & ((0x80U >= (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_WIDTH)) 
                    & ((2U <= (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_HEIGHT)) 
                       & ((0x80U >= (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_HEIGHT)) 
                          & ((~ (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_HEIGHT)) 
                             & (0U == (7U & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_WIDTH))))))))) {
                vlSelf->__Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component = 0U;
                vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_ctu_id 
                    = vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_ID;
                vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_luma_width 
                    = vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_WIDTH;
                vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_luma_height 
                    = vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_HEIGHT;
                vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_comp_width 
                    = vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_WIDTH;
                vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_comp_height 
                    = vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_HEIGHT;
                __Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x = 0U;
                __Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y = 0U;
                vlSelf->__Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state = 1U;
            } else {
                vlSelf->__Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state = 4U;
            }
        }
    } else {
        vlSelf->__Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component = 0U;
        vlSelf->__Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state = 0U;
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_ctu_id = 0U;
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_luma_width = 0U;
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_luma_height = 0U;
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_comp_width = 0U;
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_comp_height = 0U;
        __Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x = 0U;
        __Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y = 0U;
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_data = 0ULL;
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_row_last = 0U;
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component_last = 0U;
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_ctu_last = 0U;
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_done = 0U;
    }
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y 
        = __Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x 
        = __Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__w_last_in_row 
        = ((0x1ffU & ((IData)(4U) + (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x))) 
           >= (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_comp_width));
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_rd_valid 
        = ((IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_RESETN) 
           & ((1U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)) 
              & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__w_rd_component_valid)));
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__w_last_in_component 
        = ((IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__w_last_in_row) 
           & ((0x1ffU & ((IData)(1U) + (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y))) 
              >= (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_comp_height)));
}

VL_INLINE_OPT void VCTU_RECON_EXPORT_TB___024root___nba_sequent__TOP__2(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (((1U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)) 
         & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__w_rd_component_valid))) {
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_rd_data 
            = ((0U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component))
                ? vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem
               [vlSelf->CTU_RECON_EXPORT_TB__DOT__O_RAM_RD_ADDR]
                : ((1U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component))
                    ? vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem
                   [(0x3ffU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__O_RAM_RD_ADDR))]
                    : ((2U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component))
                        ? vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem
                       [(0x3ffU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__O_RAM_RD_ADDR))]
                        : 0ULL)));
    }
    if (vlSelf->__Vdlyvset__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v0) {
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem[vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v0] 
            = (((~ (0xffffULL << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v0))) 
                & vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem
                [vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v0]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v0)) 
                  << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v0)));
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem[vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v1] 
            = (((~ (0xffffULL << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v1))) 
                & vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem
                [vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v1]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v1)) 
                  << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v1)));
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem[vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v2] 
            = (((~ (0xffffULL << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v2))) 
                & vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem
                [vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v2]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v2)) 
                  << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v2)));
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem[vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v3] 
            = (((~ (0xffffULL << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v3))) 
                & vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem
                [vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v3]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v3)) 
                  << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_y_mem__v3)));
    }
    if (vlSelf->__Vdlyvset__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v0) {
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem[vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v0] 
            = (((~ (0xffffULL << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v0))) 
                & vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem
                [vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v0]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v0)) 
                  << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v0)));
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem[vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v1] 
            = (((~ (0xffffULL << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v1))) 
                & vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem
                [vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v1]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v1)) 
                  << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v1)));
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem[vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v2] 
            = (((~ (0xffffULL << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v2))) 
                & vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem
                [vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v2]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v2)) 
                  << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v2)));
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem[vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v3] 
            = (((~ (0xffffULL << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v3))) 
                & vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem
                [vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v3]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v3)) 
                  << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cb_mem__v3)));
    }
    if (vlSelf->__Vdlyvset__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v0) {
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem[vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v0] 
            = (((~ (0xffffULL << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v0))) 
                & vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem
                [vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v0]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v0)) 
                  << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v0)));
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem[vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v1] 
            = (((~ (0xffffULL << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v1))) 
                & vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem
                [vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v1]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v1)) 
                  << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v1)));
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem[vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v2] 
            = (((~ (0xffffULL << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v2))) 
                & vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem
                [vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v2]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v2)) 
                  << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v2)));
        vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem[vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v3] 
            = (((~ (0xffffULL << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v3))) 
                & vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem
                [vlSelf->__Vdlyvdim0__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v3]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v3)) 
                  << (IData)(vlSelf->__Vdlyvlsb__CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_cr_mem__v3)));
    }
}

VL_INLINE_OPT void VCTU_RECON_EXPORT_TB___024root___nba_sequent__TOP__3(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state 
        = vlSelf->__Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component 
        = vlSelf->__Vdly__CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component;
    vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__w_rd_component_valid 
        = ((0U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component)) 
           || ((1U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component)) 
               || (2U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component))));
    vlSelf->CTU_RECON_EXPORT_TB__DOT__O_RAM_RD_ADDR 
        = (0xfffU & ((0U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component))
                      ? (VL_SHIFTL_III(12,12,32, (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y), 5U) 
                         + (0x1fU & ((IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x) 
                                     >> 2U))) : (VL_SHIFTL_III(12,12,32, (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y), 4U) 
                                                 + 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x) 
                                                     >> 2U)))));
}

void VCTU_RECON_EXPORT_TB___024root___nba_sequent__TOP__0(VCTU_RECON_EXPORT_TB___024root* vlSelf);

void VCTU_RECON_EXPORT_TB___024root___eval_nba(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCTU_RECON_EXPORT_TB___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCTU_RECON_EXPORT_TB___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCTU_RECON_EXPORT_TB___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCTU_RECON_EXPORT_TB___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

void VCTU_RECON_EXPORT_TB___024root___timing_resume(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h52bfbd70__0.resume("@(posedge CTU_RECON_EXPORT_TB.I_CLK)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VCTU_RECON_EXPORT_TB___024root___timing_commit(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h52bfbd70__0.commit("@(posedge CTU_RECON_EXPORT_TB.I_CLK)");
    }
}

void VCTU_RECON_EXPORT_TB___024root___eval_triggers__act(VCTU_RECON_EXPORT_TB___024root* vlSelf);

bool VCTU_RECON_EXPORT_TB___024root___eval_phase__act(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VCTU_RECON_EXPORT_TB___024root___eval_triggers__act(vlSelf);
    VCTU_RECON_EXPORT_TB___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VCTU_RECON_EXPORT_TB___024root___timing_resume(vlSelf);
        VCTU_RECON_EXPORT_TB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VCTU_RECON_EXPORT_TB___024root___eval_phase__nba(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VCTU_RECON_EXPORT_TB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root___dump_triggers__nba(VCTU_RECON_EXPORT_TB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root___dump_triggers__act(VCTU_RECON_EXPORT_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VCTU_RECON_EXPORT_TB___024root___eval(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VCTU_RECON_EXPORT_TB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VCTU_RECON_EXPORT_TB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../01_tb/RECON_SUBSYSTEM/CTU_RECON_EXPORT_TB.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VCTU_RECON_EXPORT_TB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VCTU_RECON_EXPORT_TB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VCTU_RECON_EXPORT_TB___024root___eval_debug_assertions(VCTU_RECON_EXPORT_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
