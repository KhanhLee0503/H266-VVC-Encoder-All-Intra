// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCTU_RECON_EXPORT_TB__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VCTU_RECON_EXPORT_TB::VCTU_RECON_EXPORT_TB(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCTU_RECON_EXPORT_TB__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VCTU_RECON_EXPORT_TB::VCTU_RECON_EXPORT_TB(const char* _vcname__)
    : VCTU_RECON_EXPORT_TB(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCTU_RECON_EXPORT_TB::~VCTU_RECON_EXPORT_TB() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCTU_RECON_EXPORT_TB___024root___eval_debug_assertions(VCTU_RECON_EXPORT_TB___024root* vlSelf);
#endif  // VL_DEBUG
void VCTU_RECON_EXPORT_TB___024root___eval_static(VCTU_RECON_EXPORT_TB___024root* vlSelf);
void VCTU_RECON_EXPORT_TB___024root___eval_initial(VCTU_RECON_EXPORT_TB___024root* vlSelf);
void VCTU_RECON_EXPORT_TB___024root___eval_settle(VCTU_RECON_EXPORT_TB___024root* vlSelf);
void VCTU_RECON_EXPORT_TB___024root___eval(VCTU_RECON_EXPORT_TB___024root* vlSelf);

void VCTU_RECON_EXPORT_TB::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCTU_RECON_EXPORT_TB::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCTU_RECON_EXPORT_TB___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCTU_RECON_EXPORT_TB___024root___eval_static(&(vlSymsp->TOP));
        VCTU_RECON_EXPORT_TB___024root___eval_initial(&(vlSymsp->TOP));
        VCTU_RECON_EXPORT_TB___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCTU_RECON_EXPORT_TB___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VCTU_RECON_EXPORT_TB::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VCTU_RECON_EXPORT_TB::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VCTU_RECON_EXPORT_TB::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VCTU_RECON_EXPORT_TB::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VCTU_RECON_EXPORT_TB::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCTU_RECON_EXPORT_TB___024root___eval_final(VCTU_RECON_EXPORT_TB___024root* vlSelf);

VL_ATTR_COLD void VCTU_RECON_EXPORT_TB::final() {
    VCTU_RECON_EXPORT_TB___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCTU_RECON_EXPORT_TB::hierName() const { return vlSymsp->name(); }
const char* VCTU_RECON_EXPORT_TB::modelName() const { return "VCTU_RECON_EXPORT_TB"; }
unsigned VCTU_RECON_EXPORT_TB::threads() const { return 1; }
void VCTU_RECON_EXPORT_TB::prepareClone() const { contextp()->prepareClone(); }
void VCTU_RECON_EXPORT_TB::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VCTU_RECON_EXPORT_TB::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VCTU_RECON_EXPORT_TB___024root__trace_decl_types(VerilatedVcd* tracep);

void VCTU_RECON_EXPORT_TB___024root__trace_init_top(VCTU_RECON_EXPORT_TB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCTU_RECON_EXPORT_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCTU_RECON_EXPORT_TB___024root*>(voidSelf);
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VCTU_RECON_EXPORT_TB___024root__trace_decl_types(tracep);
    VCTU_RECON_EXPORT_TB___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root__trace_register(VCTU_RECON_EXPORT_TB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCTU_RECON_EXPORT_TB::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VCTU_RECON_EXPORT_TB::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VCTU_RECON_EXPORT_TB___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
