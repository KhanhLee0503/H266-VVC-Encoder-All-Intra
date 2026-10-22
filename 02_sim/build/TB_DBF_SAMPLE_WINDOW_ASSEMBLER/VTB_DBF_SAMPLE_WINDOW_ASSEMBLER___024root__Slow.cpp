// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DBF_SAMPLE_WINDOW_ASSEMBLER.h for the primary calling header

#include "VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__pch.h"
#include "VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms.h"
#include "VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root.h"

void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___ctor_var_reset(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);

VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root::VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___ctor_var_reset(this);
}

void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root::~VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root() {
}
