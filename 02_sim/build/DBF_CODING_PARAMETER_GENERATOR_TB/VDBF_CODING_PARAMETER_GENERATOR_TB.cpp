// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VDBF_CODING_PARAMETER_GENERATOR_TB__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VDBF_CODING_PARAMETER_GENERATOR_TB::VDBF_CODING_PARAMETER_GENERATOR_TB(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VDBF_CODING_PARAMETER_GENERATOR_TB__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VDBF_CODING_PARAMETER_GENERATOR_TB::VDBF_CODING_PARAMETER_GENERATOR_TB(const char* _vcname__)
    : VDBF_CODING_PARAMETER_GENERATOR_TB(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VDBF_CODING_PARAMETER_GENERATOR_TB::~VDBF_CODING_PARAMETER_GENERATOR_TB() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_debug_assertions(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf);
#endif  // VL_DEBUG
void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_static(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf);
void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_initial(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf);
void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_settle(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf);
void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf);

void VDBF_CODING_PARAMETER_GENERATOR_TB::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDBF_CODING_PARAMETER_GENERATOR_TB::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_static(&(vlSymsp->TOP));
        VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_initial(&(vlSymsp->TOP));
        VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VDBF_CODING_PARAMETER_GENERATOR_TB::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VDBF_CODING_PARAMETER_GENERATOR_TB::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VDBF_CODING_PARAMETER_GENERATOR_TB::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_final(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf);

VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB::final() {
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VDBF_CODING_PARAMETER_GENERATOR_TB::hierName() const { return vlSymsp->name(); }
const char* VDBF_CODING_PARAMETER_GENERATOR_TB::modelName() const { return "VDBF_CODING_PARAMETER_GENERATOR_TB"; }
unsigned VDBF_CODING_PARAMETER_GENERATOR_TB::threads() const { return 1; }
void VDBF_CODING_PARAMETER_GENERATOR_TB::prepareClone() const { contextp()->prepareClone(); }
void VDBF_CODING_PARAMETER_GENERATOR_TB::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VDBF_CODING_PARAMETER_GENERATOR_TB::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_decl_types(VerilatedVcd* tracep);

void VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_init_top(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDBF_CODING_PARAMETER_GENERATOR_TB___024root*>(voidSelf);
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_decl_types(tracep);
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_register(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VDBF_CODING_PARAMETER_GENERATOR_TB::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
