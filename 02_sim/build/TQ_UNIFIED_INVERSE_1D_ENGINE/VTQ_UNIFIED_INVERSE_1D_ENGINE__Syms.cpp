// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTQ_UNIFIED_INVERSE_1D_ENGINE__pch.h"
#include "VTQ_UNIFIED_INVERSE_1D_ENGINE.h"
#include "VTQ_UNIFIED_INVERSE_1D_ENGINE___024root.h"

// FUNCTIONS
VTQ_UNIFIED_INVERSE_1D_ENGINE__Syms::~VTQ_UNIFIED_INVERSE_1D_ENGINE__Syms()
{
}

VTQ_UNIFIED_INVERSE_1D_ENGINE__Syms::VTQ_UNIFIED_INVERSE_1D_ENGINE__Syms(VerilatedContext* contextp, const char* namep, VTQ_UNIFIED_INVERSE_1D_ENGINE* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
