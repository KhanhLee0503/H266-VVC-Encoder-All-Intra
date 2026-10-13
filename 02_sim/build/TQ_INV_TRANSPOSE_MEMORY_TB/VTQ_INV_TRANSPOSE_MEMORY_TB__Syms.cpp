// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTQ_INV_TRANSPOSE_MEMORY_TB__pch.h"
#include "VTQ_INV_TRANSPOSE_MEMORY_TB.h"
#include "VTQ_INV_TRANSPOSE_MEMORY_TB___024root.h"

// FUNCTIONS
VTQ_INV_TRANSPOSE_MEMORY_TB__Syms::~VTQ_INV_TRANSPOSE_MEMORY_TB__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void VTQ_INV_TRANSPOSE_MEMORY_TB__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void VTQ_INV_TRANSPOSE_MEMORY_TB__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void VTQ_INV_TRANSPOSE_MEMORY_TB__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

VTQ_INV_TRANSPOSE_MEMORY_TB__Syms::VTQ_INV_TRANSPOSE_MEMORY_TB__Syms(VerilatedContext* contextp, const char* namep, VTQ_INV_TRANSPOSE_MEMORY_TB* modelp)
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
    __Vscope_TQ_INV_TRANSPOSE_MEMORY_TB.configure(this, name(), "TQ_INV_TRANSPOSE_MEMORY_TB", "TQ_INV_TRANSPOSE_MEMORY_TB", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TQ_INV_TRANSPOSE_MEMORY_TB__SCORE.configure(this, name(), "TQ_INV_TRANSPOSE_MEMORY_TB.SCORE", "SCORE", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TQ_INV_TRANSPOSE_MEMORY_TB__SCORE__unnamedblk4.configure(this, name(), "TQ_INV_TRANSPOSE_MEMORY_TB.SCORE.unnamedblk4", "unnamedblk4", -9, VerilatedScope::SCOPE_OTHER);
}
