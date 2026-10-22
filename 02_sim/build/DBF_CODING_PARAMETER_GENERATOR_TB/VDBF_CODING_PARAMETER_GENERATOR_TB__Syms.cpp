// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VDBF_CODING_PARAMETER_GENERATOR_TB__pch.h"
#include "VDBF_CODING_PARAMETER_GENERATOR_TB.h"
#include "VDBF_CODING_PARAMETER_GENERATOR_TB___024root.h"

// FUNCTIONS
VDBF_CODING_PARAMETER_GENERATOR_TB__Syms::~VDBF_CODING_PARAMETER_GENERATOR_TB__Syms()
{
}

VDBF_CODING_PARAMETER_GENERATOR_TB__Syms::VDBF_CODING_PARAMETER_GENERATOR_TB__Syms(VerilatedContext* contextp, const char* namep, VDBF_CODING_PARAMETER_GENERATOR_TB* modelp)
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
    __Vscope_DBF_CODING_PARAMETER_GENERATOR_TB.configure(this, name(), "DBF_CODING_PARAMETER_GENERATOR_TB", "DBF_CODING_PARAMETER_GENERATOR_TB", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_DBF_CODING_PARAMETER_GENERATOR_TB__acknowledge_scan.configure(this, name(), "DBF_CODING_PARAMETER_GENERATOR_TB.acknowledge_scan", "acknowledge_scan", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_DBF_CODING_PARAMETER_GENERATOR_TB__param_wait.configure(this, name(), "DBF_CODING_PARAMETER_GENERATOR_TB.param_wait", "param_wait", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_DBF_CODING_PARAMETER_GENERATOR_TB__ready0_wait.configure(this, name(), "DBF_CODING_PARAMETER_GENERATOR_TB.ready0_wait", "ready0_wait", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_DBF_CODING_PARAMETER_GENERATOR_TB__ready1_wait.configure(this, name(), "DBF_CODING_PARAMETER_GENERATOR_TB.ready1_wait", "ready1_wait", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_DBF_CODING_PARAMETER_GENERATOR_TB__ready2_wait.configure(this, name(), "DBF_CODING_PARAMETER_GENERATOR_TB.ready2_wait", "ready2_wait", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_DBF_CODING_PARAMETER_GENERATOR_TB__release_ctu.configure(this, name(), "DBF_CODING_PARAMETER_GENERATOR_TB.release_ctu", "release_ctu", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_DBF_CODING_PARAMETER_GENERATOR_TB__send_leaf.configure(this, name(), "DBF_CODING_PARAMETER_GENERATOR_TB.send_leaf", "send_leaf", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_DBF_CODING_PARAMETER_GENERATOR_TB__start_ctu.configure(this, name(), "DBF_CODING_PARAMETER_GENERATOR_TB.start_ctu", "start_ctu", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_DBF_CODING_PARAMETER_GENERATOR_TB__start_scan.configure(this, name(), "DBF_CODING_PARAMETER_GENERATOR_TB.start_scan", "start_scan", -9, VerilatedScope::SCOPE_OTHER);
}
