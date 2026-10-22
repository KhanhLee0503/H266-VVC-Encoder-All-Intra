// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DBF_FD_SAMPLE_ACTIVITY.h for the primary calling header

#include "VTB_DBF_FD_SAMPLE_ACTIVITY__pch.h"
#include "VTB_DBF_FD_SAMPLE_ACTIVITY__Syms.h"
#include "VTB_DBF_FD_SAMPLE_ACTIVITY___024root.h"

void VTB_DBF_FD_SAMPLE_ACTIVITY___024root___ctor_var_reset(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf);

VTB_DBF_FD_SAMPLE_ACTIVITY___024root::VTB_DBF_FD_SAMPLE_ACTIVITY___024root(VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTB_DBF_FD_SAMPLE_ACTIVITY___024root___ctor_var_reset(this);
}

void VTB_DBF_FD_SAMPLE_ACTIVITY___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTB_DBF_FD_SAMPLE_ACTIVITY___024root::~VTB_DBF_FD_SAMPLE_ACTIVITY___024root() {
}
