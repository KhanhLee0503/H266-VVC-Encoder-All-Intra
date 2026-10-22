// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTB_DBF_CODING_PARAMETERS_TOP__pch.h"
#include "VTB_DBF_CODING_PARAMETERS_TOP.h"
#include "VTB_DBF_CODING_PARAMETERS_TOP___024root.h"

// FUNCTIONS
VTB_DBF_CODING_PARAMETERS_TOP__Syms::~VTB_DBF_CODING_PARAMETERS_TOP__Syms()
{
}

VTB_DBF_CODING_PARAMETERS_TOP__Syms::VTB_DBF_CODING_PARAMETERS_TOP__Syms(VerilatedContext* contextp, const char* namep, VTB_DBF_CODING_PARAMETERS_TOP* modelp)
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
    __Vscope_TB_DBF_CODING_PARAMETERS_TOP.configure(this, name(), "TB_DBF_CODING_PARAMETERS_TOP", "TB_DBF_CODING_PARAMETERS_TOP", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TB_DBF_CODING_PARAMETERS_TOP__check_read_results.configure(this, name(), "TB_DBF_CODING_PARAMETERS_TOP.check_read_results", "check_read_results", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TB_DBF_CODING_PARAMETERS_TOP__send_tu.configure(this, name(), "TB_DBF_CODING_PARAMETERS_TOP.send_tu", "send_tu", -9, VerilatedScope::SCOPE_OTHER);
}
