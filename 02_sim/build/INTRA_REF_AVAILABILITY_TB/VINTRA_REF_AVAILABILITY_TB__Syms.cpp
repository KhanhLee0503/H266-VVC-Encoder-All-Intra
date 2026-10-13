// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VINTRA_REF_AVAILABILITY_TB__pch.h"
#include "VINTRA_REF_AVAILABILITY_TB.h"
#include "VINTRA_REF_AVAILABILITY_TB___024root.h"

// FUNCTIONS
VINTRA_REF_AVAILABILITY_TB__Syms::~VINTRA_REF_AVAILABILITY_TB__Syms()
{
}

VINTRA_REF_AVAILABILITY_TB__Syms::VINTRA_REF_AVAILABILITY_TB__Syms(VerilatedContext* contextp, const char* namep, VINTRA_REF_AVAILABILITY_TB* modelp)
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
    __Vscope_INTRA_REF_AVAILABILITY_TB.configure(this, name(), "INTRA_REF_AVAILABILITY_TB", "INTRA_REF_AVAILABILITY_TB", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_INTRA_REF_AVAILABILITY_TB__check_case.configure(this, name(), "INTRA_REF_AVAILABILITY_TB.check_case", "check_case", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_INTRA_REF_AVAILABILITY_TB__check_globals.configure(this, name(), "INTRA_REF_AVAILABILITY_TB.check_globals", "check_globals", -9, VerilatedScope::SCOPE_OTHER);
}
