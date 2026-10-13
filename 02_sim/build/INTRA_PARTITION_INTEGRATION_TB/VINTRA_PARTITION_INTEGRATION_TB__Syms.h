// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VINTRA_PARTITION_INTEGRATION_TB__SYMS_H_
#define VERILATED_VINTRA_PARTITION_INTEGRATION_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VINTRA_PARTITION_INTEGRATION_TB.h"

// INCLUDE MODULE CLASSES
#include "VINTRA_PARTITION_INTEGRATION_TB___024root.h"
#include "VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VINTRA_PARTITION_INTEGRATION_TB__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VINTRA_PARTITION_INTEGRATION_TB* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    std::vector<VlEvent*> __Vm_triggeredEvents;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VINTRA_PARTITION_INTEGRATION_TB___024root TOP;
    VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension;
    VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_neg_ref_extension;

    // SCOPE NAMES
    VerilatedScope __Vscope_INTRA_PARTITION_INTEGRATION_TB;
    VerilatedScope __Vscope_INTRA_PARTITION_INTEGRATION_TB__final_checks;

    // CONSTRUCTORS
    VINTRA_PARTITION_INTEGRATION_TB__Syms(VerilatedContext* contextp, const char* namep, VINTRA_PARTITION_INTEGRATION_TB* modelp);
    ~VINTRA_PARTITION_INTEGRATION_TB__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void enqueueTriggeredEventForClearing(VlEvent& event) {
#ifdef VL_DEBUG
        if (VL_UNLIKELY(!event.isTriggered())) {
            VL_FATAL_MT(__FILE__, __LINE__, __FILE__, "event passed to 'enqueueTriggeredEventForClearing' was not triggered");
        }
#endif
        __Vm_triggeredEvents.push_back(&event);
    }
    void clearTriggeredEvents() {
        for (const auto eventp : __Vm_triggeredEvents) eventp->clearTriggered();
        __Vm_triggeredEvents.clear();
    }
};

#endif  // guard
