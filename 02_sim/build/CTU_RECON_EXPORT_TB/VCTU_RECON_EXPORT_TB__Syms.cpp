// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCTU_RECON_EXPORT_TB__pch.h"
#include "VCTU_RECON_EXPORT_TB.h"
#include "VCTU_RECON_EXPORT_TB___024root.h"

// FUNCTIONS
VCTU_RECON_EXPORT_TB__Syms::~VCTU_RECON_EXPORT_TB__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void VCTU_RECON_EXPORT_TB__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void VCTU_RECON_EXPORT_TB__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void VCTU_RECON_EXPORT_TB__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

VCTU_RECON_EXPORT_TB__Syms::VCTU_RECON_EXPORT_TB__Syms(VerilatedContext* contextp, const char* namep, VCTU_RECON_EXPORT_TB* modelp)
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
    __Vscope_CTU_RECON_EXPORT_TB.configure(this, name(), "CTU_RECON_EXPORT_TB", "CTU_RECON_EXPORT_TB", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_CTU_RECON_EXPORT_TB__run_case.configure(this, name(), "CTU_RECON_EXPORT_TB.run_case", "run_case", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_CTU_RECON_EXPORT_TB__unnamedblk2.configure(this, name(), "CTU_RECON_EXPORT_TB.unnamedblk2", "unnamedblk2", -9, VerilatedScope::SCOPE_OTHER);
}
