// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTQ_UNIFIED_INVERSE_1D_ENGINE__SYMS_H_
#define VERILATED_VTQ_UNIFIED_INVERSE_1D_ENGINE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VTQ_UNIFIED_INVERSE_1D_ENGINE.h"

// INCLUDE MODULE CLASSES
#include "VTQ_UNIFIED_INVERSE_1D_ENGINE___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VTQ_UNIFIED_INVERSE_1D_ENGINE__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VTQ_UNIFIED_INVERSE_1D_ENGINE* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VTQ_UNIFIED_INVERSE_1D_ENGINE___024root TOP;

    // CONSTRUCTORS
    VTQ_UNIFIED_INVERSE_1D_ENGINE__Syms(VerilatedContext* contextp, const char* namep, VTQ_UNIFIED_INVERSE_1D_ENGINE* modelp);
    ~VTQ_UNIFIED_INVERSE_1D_ENGINE__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
