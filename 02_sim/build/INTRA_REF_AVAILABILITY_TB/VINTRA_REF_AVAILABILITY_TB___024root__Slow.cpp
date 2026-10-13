// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VINTRA_REF_AVAILABILITY_TB.h for the primary calling header

#include "VINTRA_REF_AVAILABILITY_TB__pch.h"
#include "VINTRA_REF_AVAILABILITY_TB__Syms.h"
#include "VINTRA_REF_AVAILABILITY_TB___024root.h"

void VINTRA_REF_AVAILABILITY_TB___024root___ctor_var_reset(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf);

VINTRA_REF_AVAILABILITY_TB___024root::VINTRA_REF_AVAILABILITY_TB___024root(VINTRA_REF_AVAILABILITY_TB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VINTRA_REF_AVAILABILITY_TB___024root___ctor_var_reset(this);
}

void VINTRA_REF_AVAILABILITY_TB___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VINTRA_REF_AVAILABILITY_TB___024root::~VINTRA_REF_AVAILABILITY_TB___024root() {
}
