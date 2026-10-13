// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTQ_IDCT2_CORE_TB__pch.h"
#include "VTQ_IDCT2_CORE_TB.h"
#include "VTQ_IDCT2_CORE_TB___024root.h"

// FUNCTIONS
VTQ_IDCT2_CORE_TB__Syms::~VTQ_IDCT2_CORE_TB__Syms()
{
}

VTQ_IDCT2_CORE_TB__Syms::VTQ_IDCT2_CORE_TB__Syms(VerilatedContext* contextp, const char* namep, VTQ_IDCT2_CORE_TB* modelp)
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
    // Setup scopes
    __Vscope_TQ_IDCT2_CORE_TB.configure(this, name(), "TQ_IDCT2_CORE_TB", "TQ_IDCT2_CORE_TB", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TQ_IDCT2_CORE_TB__unnamedblk1.configure(this, name(), "TQ_IDCT2_CORE_TB.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
}
