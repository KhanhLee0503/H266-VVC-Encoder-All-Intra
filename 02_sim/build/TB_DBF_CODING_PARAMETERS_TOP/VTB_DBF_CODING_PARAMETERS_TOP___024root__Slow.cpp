// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DBF_CODING_PARAMETERS_TOP.h for the primary calling header

#include "VTB_DBF_CODING_PARAMETERS_TOP__pch.h"
#include "VTB_DBF_CODING_PARAMETERS_TOP__Syms.h"
#include "VTB_DBF_CODING_PARAMETERS_TOP___024root.h"

void VTB_DBF_CODING_PARAMETERS_TOP___024root___ctor_var_reset(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf);

VTB_DBF_CODING_PARAMETERS_TOP___024root::VTB_DBF_CODING_PARAMETERS_TOP___024root(VTB_DBF_CODING_PARAMETERS_TOP__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTB_DBF_CODING_PARAMETERS_TOP___024root___ctor_var_reset(this);
}

void VTB_DBF_CODING_PARAMETERS_TOP___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTB_DBF_CODING_PARAMETERS_TOP___024root::~VTB_DBF_CODING_PARAMETERS_TOP___024root() {
}
