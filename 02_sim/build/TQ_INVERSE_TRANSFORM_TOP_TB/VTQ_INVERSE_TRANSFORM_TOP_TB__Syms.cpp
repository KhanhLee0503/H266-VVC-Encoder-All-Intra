// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTQ_INVERSE_TRANSFORM_TOP_TB__pch.h"
#include "VTQ_INVERSE_TRANSFORM_TOP_TB.h"
#include "VTQ_INVERSE_TRANSFORM_TOP_TB___024root.h"
#include "VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE.h"

// FUNCTIONS
VTQ_INVERSE_TRANSFORM_TOP_TB__Syms::~VTQ_INVERSE_TRANSFORM_TOP_TB__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void VTQ_INVERSE_TRANSFORM_TOP_TB__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void VTQ_INVERSE_TRANSFORM_TOP_TB__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void VTQ_INVERSE_TRANSFORM_TOP_TB__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

VTQ_INVERSE_TRANSFORM_TOP_TB__Syms::VTQ_INVERSE_TRANSFORM_TOP_TB__Syms(VerilatedContext* contextp, const char* namep, VTQ_INVERSE_TRANSFORM_TOP_TB* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d{this, Verilated::catName(namep, "TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_column_1d")}
    , TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d{this, Verilated::catName(namep, "TQ_INVERSE_TRANSFORM_TOP_TB.u_dut.u_row_1d")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d = &TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d;
    TOP.__PVT__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d = &TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d.__Vconfigure(true);
    TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d.__Vconfigure(false);
    // Setup scopes
    __Vscope_TQ_INVERSE_TRANSFORM_TOP_TB.configure(this, name(), "TQ_INVERSE_TRANSFORM_TOP_TB", "TQ_INVERSE_TRANSFORM_TOP_TB", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TQ_INVERSE_TRANSFORM_TOP_TB__unnamedblk3.configure(this, name(), "TQ_INVERSE_TRANSFORM_TOP_TB.unnamedblk3", "unnamedblk3", -9, VerilatedScope::SCOPE_OTHER);
}
