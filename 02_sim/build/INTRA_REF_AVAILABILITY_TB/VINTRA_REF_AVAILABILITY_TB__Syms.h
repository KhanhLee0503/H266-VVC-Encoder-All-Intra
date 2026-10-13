// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VINTRA_REF_AVAILABILITY_TB__SYMS_H_
#define VERILATED_VINTRA_REF_AVAILABILITY_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VINTRA_REF_AVAILABILITY_TB.h"

// INCLUDE MODULE CLASSES
#include "VINTRA_REF_AVAILABILITY_TB___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VINTRA_REF_AVAILABILITY_TB__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VINTRA_REF_AVAILABILITY_TB* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VINTRA_REF_AVAILABILITY_TB___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_INTRA_REF_AVAILABILITY_TB;
    VerilatedScope __Vscope_INTRA_REF_AVAILABILITY_TB__check_case;
    VerilatedScope __Vscope_INTRA_REF_AVAILABILITY_TB__check_globals;

    // CONSTRUCTORS
    VINTRA_REF_AVAILABILITY_TB__Syms(VerilatedContext* contextp, const char* namep, VINTRA_REF_AVAILABILITY_TB* modelp);
    ~VINTRA_REF_AVAILABILITY_TB__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
