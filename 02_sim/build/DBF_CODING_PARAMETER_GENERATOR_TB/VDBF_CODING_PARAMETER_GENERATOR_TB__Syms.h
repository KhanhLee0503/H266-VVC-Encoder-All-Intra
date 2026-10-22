// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDBF_CODING_PARAMETER_GENERATOR_TB__SYMS_H_
#define VERILATED_VDBF_CODING_PARAMETER_GENERATOR_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VDBF_CODING_PARAMETER_GENERATOR_TB.h"

// INCLUDE MODULE CLASSES
#include "VDBF_CODING_PARAMETER_GENERATOR_TB___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VDBF_CODING_PARAMETER_GENERATOR_TB__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VDBF_CODING_PARAMETER_GENERATOR_TB* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_DBF_CODING_PARAMETER_GENERATOR_TB;
    VerilatedScope __Vscope_DBF_CODING_PARAMETER_GENERATOR_TB__acknowledge_scan;
    VerilatedScope __Vscope_DBF_CODING_PARAMETER_GENERATOR_TB__param_wait;
    VerilatedScope __Vscope_DBF_CODING_PARAMETER_GENERATOR_TB__ready0_wait;
    VerilatedScope __Vscope_DBF_CODING_PARAMETER_GENERATOR_TB__ready1_wait;
    VerilatedScope __Vscope_DBF_CODING_PARAMETER_GENERATOR_TB__ready2_wait;
    VerilatedScope __Vscope_DBF_CODING_PARAMETER_GENERATOR_TB__release_ctu;
    VerilatedScope __Vscope_DBF_CODING_PARAMETER_GENERATOR_TB__send_leaf;
    VerilatedScope __Vscope_DBF_CODING_PARAMETER_GENERATOR_TB__start_ctu;
    VerilatedScope __Vscope_DBF_CODING_PARAMETER_GENERATOR_TB__start_scan;

    // CONSTRUCTORS
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms(VerilatedContext* contextp, const char* namep, VDBF_CODING_PARAMETER_GENERATOR_TB* modelp);
    ~VDBF_CODING_PARAMETER_GENERATOR_TB__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
