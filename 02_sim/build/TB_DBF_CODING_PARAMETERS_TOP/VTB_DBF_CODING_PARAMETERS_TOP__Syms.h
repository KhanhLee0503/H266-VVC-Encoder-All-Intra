// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_DBF_CODING_PARAMETERS_TOP__SYMS_H_
#define VERILATED_VTB_DBF_CODING_PARAMETERS_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VTB_DBF_CODING_PARAMETERS_TOP.h"

// INCLUDE MODULE CLASSES
#include "VTB_DBF_CODING_PARAMETERS_TOP___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VTB_DBF_CODING_PARAMETERS_TOP__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VTB_DBF_CODING_PARAMETERS_TOP* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VTB_DBF_CODING_PARAMETERS_TOP___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_TB_DBF_CODING_PARAMETERS_TOP;
    VerilatedScope __Vscope_TB_DBF_CODING_PARAMETERS_TOP__check_read_results;
    VerilatedScope __Vscope_TB_DBF_CODING_PARAMETERS_TOP__send_tu;

    // CONSTRUCTORS
    VTB_DBF_CODING_PARAMETERS_TOP__Syms(VerilatedContext* contextp, const char* namep, VTB_DBF_CODING_PARAMETERS_TOP* modelp);
    ~VTB_DBF_CODING_PARAMETERS_TOP__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
