// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRECON_SUBSYSTEM_TOP_TB__SYMS_H_
#define VERILATED_VRECON_SUBSYSTEM_TOP_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VRECON_SUBSYSTEM_TOP_TB.h"

// INCLUDE MODULE CLASSES
#include "VRECON_SUBSYSTEM_TOP_TB___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VRECON_SUBSYSTEM_TOP_TB__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VRECON_SUBSYSTEM_TOP_TB* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VRECON_SUBSYSTEM_TOP_TB___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_RECON_SUBSYSTEM_TOP_TB;
    VerilatedScope __Vscope_RECON_SUBSYSTEM_TOP_TB__EXPORT_AFTER_CU8;
    VerilatedScope __Vscope_RECON_SUBSYSTEM_TOP_TB__check_bit;
    VerilatedScope __Vscope_RECON_SUBSYSTEM_TOP_TB__check_corner;
    VerilatedScope __Vscope_RECON_SUBSYSTEM_TOP_TB__check_word;
    VerilatedScope __Vscope_RECON_SUBSYSTEM_TOP_TB__complete_cu__wait_commit;
    VerilatedScope __Vscope_RECON_SUBSYSTEM_TOP_TB__finish_ctu;
    VerilatedScope __Vscope_RECON_SUBSYSTEM_TOP_TB__read_h;
    VerilatedScope __Vscope_RECON_SUBSYSTEM_TOP_TB__send_recon;
    VerilatedScope __Vscope_RECON_SUBSYSTEM_TOP_TB__start_ctu;
    VerilatedScope __Vscope_RECON_SUBSYSTEM_TOP_TB__start_cu;

    // CONSTRUCTORS
    VRECON_SUBSYSTEM_TOP_TB__Syms(VerilatedContext* contextp, const char* namep, VRECON_SUBSYSTEM_TOP_TB* modelp);
    ~VRECON_SUBSYSTEM_TOP_TB__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
