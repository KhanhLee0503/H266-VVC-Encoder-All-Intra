// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VRECON_SUBSYSTEM_TOP_H_
#define VERILATED_VRECON_SUBSYSTEM_TOP_H_  // guard

#include "verilated.h"

class VRECON_SUBSYSTEM_TOP__Syms;
class VRECON_SUBSYSTEM_TOP___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VRECON_SUBSYSTEM_TOP VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VRECON_SUBSYSTEM_TOP__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&I_CLK,0,0);
    VL_IN8(&I_RESETN,0,0);
    VL_IN8(&I_CLEAR_ERROR,0,0);
    VL_IN8(&I_PICTURE_START,0,0);
    VL_IN8(&I_CTU_START_VALID,0,0);
    VL_OUT8(&O_CTU_START_READY,0,0);
    VL_IN8(&I_CTU_VALID_WIDTH,7,0);
    VL_IN8(&I_CTU_VALID_HEIGHT,7,0);
    VL_OUT8(&O_CTU_INIT_DONE,0,0);
    VL_IN8(&I_CTU_FINISH_VALID,0,0);
    VL_OUT8(&O_CTU_FINISH_READY,0,0);
    VL_IN8(&I_CU_VALID,0,0);
    VL_OUT8(&O_CU_READY,0,0);
    VL_IN8(&I_CU_X,6,0);
    VL_IN8(&I_CU_Y,6,0);
    VL_IN8(&I_CU_WIDTH,7,0);
    VL_IN8(&I_CU_HEIGHT,7,0);
    VL_IN8(&I_CU_REF_COMMIT_REQ,0,0);
    VL_OUT8(&O_CU_REF_COMMIT_DONE,0,0);
    VL_IN8(&I_CU_RELEASE,0,0);
    VL_IN8(&I_RECON_VALID,0,0);
    VL_OUT8(&O_RECON_READY,0,0);
    VL_IN8(&I_RECON_COMPONENT_ID,1,0);
    VL_IN8(&I_RECON_X_BASE,6,0);
    VL_IN8(&I_RECON_Y,6,0);
    VL_IN8(&I_RECON_LANE_VALID,3,0);
    VL_IN8(&I_RECON_TU_LAST,0,0);
    VL_IN8(&I_REF_MAP_QUERY_COMPONENT_ID,1,0);
    VL_IN8(&I_REF_TOP_MAP_QUERY_VALID,0,0);
    VL_IN8(&I_REF_TOP_MAP_X_UNIT,4,0);
    VL_IN8(&I_REF_TOP_MAP_Y_UNIT,4,0);
    VL_OUT8(&O_REF_TOP_MAP_AVAILABLE,0,0);
    VL_IN8(&I_REF_LEFT_MAP_QUERY_VALID,0,0);
    VL_IN8(&I_REF_LEFT_MAP_X_UNIT,4,0);
    VL_IN8(&I_REF_LEFT_MAP_Y_UNIT,4,0);
    VL_OUT8(&O_REF_LEFT_MAP_AVAILABLE,0,0);
    VL_IN8(&I_REF_TL_MAP_QUERY_VALID,0,0);
    VL_IN8(&I_REF_TL_MAP_X_UNIT,4,0);
    VL_IN8(&I_REF_TL_MAP_Y_UNIT,4,0);
    VL_OUT8(&O_REF_TL_MAP_AVAILABLE,0,0);
    VL_OUT8(&O_REF_ABOVE_ROW_VALID,0,0);
    VL_OUT8(&O_REF_LEFT_BOUNDARY_VALID,0,0);
    VL_OUT8(&O_REF_ABOVE_LEFT_VALID,0,0);
    VL_IN8(&I_REF_H_EDGE_RD_EN,0,0);
    VL_IN8(&I_REF_H_EDGE_RD_COMPONENT_ID,1,0);
    VL_OUT8(&O_REF_H_EDGE_RD_VALID,0,0);
    VL_IN8(&I_REF_V_EDGE_RD_EN,0,0);
    VL_IN8(&I_REF_V_EDGE_RD_COMPONENT_ID,1,0);
    VL_OUT8(&O_REF_V_EDGE_RD_VALID,0,0);
    VL_IN8(&I_REF_ABOVE_RD_EN,0,0);
    VL_IN8(&I_REF_ABOVE_RD_COMPONENT_ID,1,0);
    VL_OUT8(&O_REF_ABOVE_RD_VALID,0,0);
    VL_IN8(&I_REF_LEFT_BOUND_RD_EN,0,0);
    VL_IN8(&I_REF_LEFT_BOUND_RD_COMPONENT_ID,1,0);
    VL_IN8(&I_REF_LEFT_BOUND_RD_ADDR,4,0);
    VL_OUT8(&O_REF_LEFT_BOUND_RD_VALID,0,0);
    VL_IN8(&I_REF_CORNER_QUERY_COMPONENT_ID,1,0);
    VL_OUT8(&O_REF_CORNER_QUERY_VALID,0,0);
    VL_IN8(&I_EXPORT_RAM_RD_EN,0,0);
    VL_IN8(&I_EXPORT_RAM_RD_COMPONENT_ID,1,0);
    VL_OUT8(&O_EXPORT_RAM_RD_VALID,0,0);
    VL_OUT8(&O_BUSY,0,0);
    VL_OUT8(&O_ERROR,0,0);
    VL_IN16(&I_CTU_X_ORIGIN,12,0);
    VL_IN16(&I_CTU_Y_ORIGIN,12,0);
    VL_IN16(&I_PICTURE_WIDTH,12,0);
    VL_IN16(&I_PICTURE_HEIGHT,12,0);
    VL_IN16(&I_REF_H_EDGE_RD_ADDR,9,0);
    VL_IN16(&I_REF_V_EDGE_RD_ADDR,9,0);
    VL_IN16(&I_REF_ABOVE_RD_ADDR,9,0);
    VL_OUT16(&O_REF_CORNER_QUERY_SAMPLE,15,0);
    VL_IN16(&I_EXPORT_RAM_RD_ADDR,11,0);
    VL_IN64(&I_RECON_SAMPLE,39,0);
    VL_OUT64(&O_REF_H_EDGE_RD_DATA,63,0);
    VL_OUT64(&O_REF_V_EDGE_RD_DATA,63,0);
    VL_OUT64(&O_REF_ABOVE_RD_DATA,63,0);
    VL_OUT64(&O_REF_LEFT_BOUND_RD_DATA,63,0);
    VL_OUT64(&O_EXPORT_RAM_RD_DATA,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VRECON_SUBSYSTEM_TOP___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VRECON_SUBSYSTEM_TOP(VerilatedContext* contextp, const char* name = "TOP");
    explicit VRECON_SUBSYSTEM_TOP(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VRECON_SUBSYSTEM_TOP();
  private:
    VL_UNCOPYABLE(VRECON_SUBSYSTEM_TOP);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
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
