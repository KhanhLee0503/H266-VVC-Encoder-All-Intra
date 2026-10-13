// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_IDCT2_CORE_TB.h for the primary calling header

#include "VTQ_IDCT2_CORE_TB__pch.h"
#include "VTQ_IDCT2_CORE_TB__Syms.h"
#include "VTQ_IDCT2_CORE_TB___024root.h"

void VTQ_IDCT2_CORE_TB___024root___ctor_var_reset(VTQ_IDCT2_CORE_TB___024root* vlSelf);

VTQ_IDCT2_CORE_TB___024root::VTQ_IDCT2_CORE_TB___024root(VTQ_IDCT2_CORE_TB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTQ_IDCT2_CORE_TB___024root___ctor_var_reset(this);
}

void VTQ_IDCT2_CORE_TB___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTQ_IDCT2_CORE_TB___024root::~VTQ_IDCT2_CORE_TB___024root() {
}
