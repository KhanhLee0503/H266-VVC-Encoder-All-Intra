// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTQ_INVERSE_QUANTIZATION_ENGINE_TB__pch.h"
#include "VTQ_INVERSE_QUANTIZATION_ENGINE_TB.h"
#include "VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root.h"

// FUNCTIONS
VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms::~VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms()
{
}

VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms::VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms(VerilatedContext* contextp, const char* namep, VTQ_INVERSE_QUANTIZATION_ENGINE_TB* modelp)
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
    __Vscope_TQ_INVERSE_QUANTIZATION_ENGINE_TB.configure(this, name(), "TQ_INVERSE_QUANTIZATION_ENGINE_TB", "TQ_INVERSE_QUANTIZATION_ENGINE_TB", -9, VerilatedScope::SCOPE_OTHER);
}
