// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTQ_INVERSE_TRANSFORM_TOP_TB_H_
#define VERILATED_VTQ_INVERSE_TRANSFORM_TOP_TB_H_  // guard

#include "verilated.h"

class VTQ_INVERSE_TRANSFORM_TOP_TB__Syms;
class VTQ_INVERSE_TRANSFORM_TOP_TB___024root;
class VerilatedVcdC;
class VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VTQ_INVERSE_TRANSFORM_TOP_TB VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* const __PVT__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d;
    VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* const __PVT__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VTQ_INVERSE_TRANSFORM_TOP_TB___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VTQ_INVERSE_TRANSFORM_TOP_TB(VerilatedContext* contextp, const char* name = "TOP");
    explicit VTQ_INVERSE_TRANSFORM_TOP_TB(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VTQ_INVERSE_TRANSFORM_TOP_TB();
  private:
    VL_UNCOPYABLE(VTQ_INVERSE_TRANSFORM_TOP_TB);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); eval_end_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard
