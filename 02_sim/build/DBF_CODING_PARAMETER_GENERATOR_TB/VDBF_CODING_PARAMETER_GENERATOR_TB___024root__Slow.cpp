// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDBF_CODING_PARAMETER_GENERATOR_TB.h for the primary calling header

#include "VDBF_CODING_PARAMETER_GENERATOR_TB__pch.h"
#include "VDBF_CODING_PARAMETER_GENERATOR_TB__Syms.h"
#include "VDBF_CODING_PARAMETER_GENERATOR_TB___024root.h"

void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___ctor_var_reset(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf);

VDBF_CODING_PARAMETER_GENERATOR_TB___024root::VDBF_CODING_PARAMETER_GENERATOR_TB___024root(VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___ctor_var_reset(this);
}

void VDBF_CODING_PARAMETER_GENERATOR_TB___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VDBF_CODING_PARAMETER_GENERATOR_TB___024root::~VDBF_CODING_PARAMETER_GENERATOR_TB___024root() {
}
