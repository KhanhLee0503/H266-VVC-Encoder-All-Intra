// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTQ_UNIFIED_INVERSE_1D_ENGINE__pch.h"

//============================================================
// Constructors

VTQ_UNIFIED_INVERSE_1D_ENGINE::VTQ_UNIFIED_INVERSE_1D_ENGINE(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTQ_UNIFIED_INVERSE_1D_ENGINE__Syms(contextp(), _vcname__, this)}
    , I_CLK{vlSymsp->TOP.I_CLK}
    , I_RESETN{vlSymsp->TOP.I_RESETN}
    , I_TRANSFORM_TYPE{vlSymsp->TOP.I_TRANSFORM_TYPE}
    , I_TRANSFORM_SIZE{vlSymsp->TOP.I_TRANSFORM_SIZE}
    , I_DATA_VALID{vlSymsp->TOP.I_DATA_VALID}
    , I_DATA_READY{vlSymsp->TOP.I_DATA_READY}
    , O_DATA_VALID{vlSymsp->TOP.O_DATA_VALID}
    , O_DATA_READY{vlSymsp->TOP.O_DATA_READY}
    , O_DATA_LAST{vlSymsp->TOP.O_DATA_LAST}
    , O_DATA{vlSymsp->TOP.O_DATA}
    , I_DATA{vlSymsp->TOP.I_DATA}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VTQ_UNIFIED_INVERSE_1D_ENGINE::VTQ_UNIFIED_INVERSE_1D_ENGINE(const char* _vcname__)
    : VTQ_UNIFIED_INVERSE_1D_ENGINE(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTQ_UNIFIED_INVERSE_1D_ENGINE::~VTQ_UNIFIED_INVERSE_1D_ENGINE() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_debug_assertions(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);
#endif  // VL_DEBUG
void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_static(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_initial(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_settle(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);

void VTQ_UNIFIED_INVERSE_1D_ENGINE::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTQ_UNIFIED_INVERSE_1D_ENGINE::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_static(&(vlSymsp->TOP));
        VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_initial(&(vlSymsp->TOP));
        VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VTQ_UNIFIED_INVERSE_1D_ENGINE::eventsPending() { return false; }

uint64_t VTQ_UNIFIED_INVERSE_1D_ENGINE::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VTQ_UNIFIED_INVERSE_1D_ENGINE::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_final(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);

VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE::final() {
    VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTQ_UNIFIED_INVERSE_1D_ENGINE::hierName() const { return vlSymsp->name(); }
const char* VTQ_UNIFIED_INVERSE_1D_ENGINE::modelName() const { return "VTQ_UNIFIED_INVERSE_1D_ENGINE"; }
unsigned VTQ_UNIFIED_INVERSE_1D_ENGINE::threads() const { return 1; }
void VTQ_UNIFIED_INVERSE_1D_ENGINE::prepareClone() const { contextp()->prepareClone(); }
void VTQ_UNIFIED_INVERSE_1D_ENGINE::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VTQ_UNIFIED_INVERSE_1D_ENGINE::trace()' called on model that was Verilated without --trace option");
}
