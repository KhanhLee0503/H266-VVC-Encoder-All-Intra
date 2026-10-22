// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VRECON_SUBSYSTEM_TOP__pch.h"
#include "VRECON_SUBSYSTEM_TOP.h"
#include "VRECON_SUBSYSTEM_TOP___024root.h"

// FUNCTIONS
VRECON_SUBSYSTEM_TOP__Syms::~VRECON_SUBSYSTEM_TOP__Syms()
{
}

VRECON_SUBSYSTEM_TOP__Syms::VRECON_SUBSYSTEM_TOP__Syms(VerilatedContext* contextp, const char* namep, VRECON_SUBSYSTEM_TOP* modelp)
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
