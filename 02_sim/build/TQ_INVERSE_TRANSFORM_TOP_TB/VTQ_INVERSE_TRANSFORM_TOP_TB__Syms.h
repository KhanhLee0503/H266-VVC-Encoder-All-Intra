// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTQ_INVERSE_TRANSFORM_TOP_TB__SYMS_H_
#define VERILATED_VTQ_INVERSE_TRANSFORM_TOP_TB__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "VTQ_INVERSE_TRANSFORM_TOP_TB.h"

// INCLUDE MODULE CLASSES
#include "VTQ_INVERSE_TRANSFORM_TOP_TB___024root.h"
#include "VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VTQ_INVERSE_TRANSFORM_TOP_TB__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VTQ_INVERSE_TRANSFORM_TOP_TB* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VTQ_INVERSE_TRANSFORM_TOP_TB___024root TOP;
    VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d;
    VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d;

    // SCOPE NAMES
    VerilatedScope __Vscope_TQ_INVERSE_TRANSFORM_TOP_TB;
    VerilatedScope __Vscope_TQ_INVERSE_TRANSFORM_TOP_TB__unnamedblk3;

    // CONSTRUCTORS
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms(VerilatedContext* contextp, const char* namep, VTQ_INVERSE_TRANSFORM_TOP_TB* modelp);
    ~VTQ_INVERSE_TRANSFORM_TOP_TB__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
