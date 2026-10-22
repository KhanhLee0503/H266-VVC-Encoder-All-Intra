// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCTU_RECON_EXPORT_TB.h for the primary calling header

#include "VCTU_RECON_EXPORT_TB__pch.h"
#include "VCTU_RECON_EXPORT_TB__Syms.h"
#include "VCTU_RECON_EXPORT_TB___024root.h"

void VCTU_RECON_EXPORT_TB___024root___ctor_var_reset(VCTU_RECON_EXPORT_TB___024root* vlSelf);

VCTU_RECON_EXPORT_TB___024root::VCTU_RECON_EXPORT_TB___024root(VCTU_RECON_EXPORT_TB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCTU_RECON_EXPORT_TB___024root___ctor_var_reset(this);
}

void VCTU_RECON_EXPORT_TB___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VCTU_RECON_EXPORT_TB___024root::~VCTU_RECON_EXPORT_TB___024root() {
}
