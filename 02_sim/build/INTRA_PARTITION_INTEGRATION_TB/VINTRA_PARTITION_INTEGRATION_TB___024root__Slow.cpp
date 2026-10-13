// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VINTRA_PARTITION_INTEGRATION_TB.h for the primary calling header

#include "VINTRA_PARTITION_INTEGRATION_TB__pch.h"
#include "VINTRA_PARTITION_INTEGRATION_TB__Syms.h"
#include "VINTRA_PARTITION_INTEGRATION_TB___024root.h"

void VINTRA_PARTITION_INTEGRATION_TB___024root___ctor_var_reset(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);

VINTRA_PARTITION_INTEGRATION_TB___024root::VINTRA_PARTITION_INTEGRATION_TB___024root(VINTRA_PARTITION_INTEGRATION_TB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VINTRA_PARTITION_INTEGRATION_TB___024root___ctor_var_reset(this);
}

void VINTRA_PARTITION_INTEGRATION_TB___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VINTRA_PARTITION_INTEGRATION_TB___024root::~VINTRA_PARTITION_INTEGRATION_TB___024root() {
}
