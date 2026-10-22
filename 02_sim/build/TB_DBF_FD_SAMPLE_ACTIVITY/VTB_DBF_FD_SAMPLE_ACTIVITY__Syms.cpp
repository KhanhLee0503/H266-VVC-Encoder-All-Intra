// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTB_DBF_FD_SAMPLE_ACTIVITY__pch.h"
#include "VTB_DBF_FD_SAMPLE_ACTIVITY.h"
#include "VTB_DBF_FD_SAMPLE_ACTIVITY___024root.h"

// FUNCTIONS
VTB_DBF_FD_SAMPLE_ACTIVITY__Syms::~VTB_DBF_FD_SAMPLE_ACTIVITY__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void VTB_DBF_FD_SAMPLE_ACTIVITY__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void VTB_DBF_FD_SAMPLE_ACTIVITY__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void VTB_DBF_FD_SAMPLE_ACTIVITY__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

VTB_DBF_FD_SAMPLE_ACTIVITY__Syms::VTB_DBF_FD_SAMPLE_ACTIVITY__Syms(VerilatedContext* contextp, const char* namep, VTB_DBF_FD_SAMPLE_ACTIVITY* modelp)
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
    __Vscope_TB_DBF_FD_SAMPLE_ACTIVITY.configure(this, name(), "TB_DBF_FD_SAMPLE_ACTIVITY", "TB_DBF_FD_SAMPLE_ACTIVITY", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TB_DBF_FD_SAMPLE_ACTIVITY__run_one.configure(this, name(), "TB_DBF_FD_SAMPLE_ACTIVITY.run_one", "run_one", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TB_DBF_FD_SAMPLE_ACTIVITY__verify_payload.configure(this, name(), "TB_DBF_FD_SAMPLE_ACTIVITY.verify_payload", "verify_payload", -9, VerilatedScope::SCOPE_OTHER);
}
