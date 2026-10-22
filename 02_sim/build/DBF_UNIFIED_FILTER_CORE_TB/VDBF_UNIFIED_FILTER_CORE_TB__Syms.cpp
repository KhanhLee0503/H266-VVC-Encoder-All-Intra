// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VDBF_UNIFIED_FILTER_CORE_TB__pch.h"
#include "VDBF_UNIFIED_FILTER_CORE_TB.h"
#include "VDBF_UNIFIED_FILTER_CORE_TB___024root.h"

// FUNCTIONS
VDBF_UNIFIED_FILTER_CORE_TB__Syms::~VDBF_UNIFIED_FILTER_CORE_TB__Syms()
{
}

VDBF_UNIFIED_FILTER_CORE_TB__Syms::VDBF_UNIFIED_FILTER_CORE_TB__Syms(VerilatedContext* contextp, const char* namep, VDBF_UNIFIED_FILTER_CORE_TB* modelp)
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
    __Vscope_DBF_UNIFIED_FILTER_CORE_TB.configure(this, name(), "DBF_UNIFIED_FILTER_CORE_TB", "DBF_UNIFIED_FILTER_CORE_TB", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_DBF_UNIFIED_FILTER_CORE_TB__check_edge.configure(this, name(), "DBF_UNIFIED_FILTER_CORE_TB.check_edge", "check_edge", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_DBF_UNIFIED_FILTER_CORE_TB__send_edge.configure(this, name(), "DBF_UNIFIED_FILTER_CORE_TB.send_edge", "send_edge", -9, VerilatedScope::SCOPE_OTHER);
}
