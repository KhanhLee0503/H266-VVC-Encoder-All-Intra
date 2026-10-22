// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VRECON_SUBSYSTEM_TOP_TB__pch.h"
#include "VRECON_SUBSYSTEM_TOP_TB.h"
#include "VRECON_SUBSYSTEM_TOP_TB___024root.h"

// FUNCTIONS
VRECON_SUBSYSTEM_TOP_TB__Syms::~VRECON_SUBSYSTEM_TOP_TB__Syms()
{
}

VRECON_SUBSYSTEM_TOP_TB__Syms::VRECON_SUBSYSTEM_TOP_TB__Syms(VerilatedContext* contextp, const char* namep, VRECON_SUBSYSTEM_TOP_TB* modelp)
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
    __Vscope_RECON_SUBSYSTEM_TOP_TB.configure(this, name(), "RECON_SUBSYSTEM_TOP_TB", "RECON_SUBSYSTEM_TOP_TB", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_RECON_SUBSYSTEM_TOP_TB__EXPORT_AFTER_CU8.configure(this, name(), "RECON_SUBSYSTEM_TOP_TB.EXPORT_AFTER_CU8", "EXPORT_AFTER_CU8", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_RECON_SUBSYSTEM_TOP_TB__check_bit.configure(this, name(), "RECON_SUBSYSTEM_TOP_TB.check_bit", "check_bit", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_RECON_SUBSYSTEM_TOP_TB__check_corner.configure(this, name(), "RECON_SUBSYSTEM_TOP_TB.check_corner", "check_corner", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_RECON_SUBSYSTEM_TOP_TB__check_word.configure(this, name(), "RECON_SUBSYSTEM_TOP_TB.check_word", "check_word", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_RECON_SUBSYSTEM_TOP_TB__complete_cu__wait_commit.configure(this, name(), "RECON_SUBSYSTEM_TOP_TB.complete_cu.wait_commit", "wait_commit", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_RECON_SUBSYSTEM_TOP_TB__finish_ctu.configure(this, name(), "RECON_SUBSYSTEM_TOP_TB.finish_ctu", "finish_ctu", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_RECON_SUBSYSTEM_TOP_TB__read_h.configure(this, name(), "RECON_SUBSYSTEM_TOP_TB.read_h", "read_h", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_RECON_SUBSYSTEM_TOP_TB__send_recon.configure(this, name(), "RECON_SUBSYSTEM_TOP_TB.send_recon", "send_recon", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_RECON_SUBSYSTEM_TOP_TB__start_ctu.configure(this, name(), "RECON_SUBSYSTEM_TOP_TB.start_ctu", "start_ctu", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_RECON_SUBSYSTEM_TOP_TB__start_cu.configure(this, name(), "RECON_SUBSYSTEM_TOP_TB.start_cu", "start_cu", -9, VerilatedScope::SCOPE_OTHER);
}
