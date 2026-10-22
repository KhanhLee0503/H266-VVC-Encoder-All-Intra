// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDBF_UNIFIED_FILTER_CORE_TB__SYMS_H_
#define VERILATED_VDBF_UNIFIED_FILTER_CORE_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VDBF_UNIFIED_FILTER_CORE_TB.h"

// INCLUDE MODULE CLASSES
#include "VDBF_UNIFIED_FILTER_CORE_TB___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VDBF_UNIFIED_FILTER_CORE_TB__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VDBF_UNIFIED_FILTER_CORE_TB* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VDBF_UNIFIED_FILTER_CORE_TB___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_DBF_UNIFIED_FILTER_CORE_TB;
    VerilatedScope __Vscope_DBF_UNIFIED_FILTER_CORE_TB__check_edge;
    VerilatedScope __Vscope_DBF_UNIFIED_FILTER_CORE_TB__send_edge;

    // CONSTRUCTORS
    VDBF_UNIFIED_FILTER_CORE_TB__Syms(VerilatedContext* contextp, const char* namep, VDBF_UNIFIED_FILTER_CORE_TB* modelp);
    ~VDBF_UNIFIED_FILTER_CORE_TB__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
