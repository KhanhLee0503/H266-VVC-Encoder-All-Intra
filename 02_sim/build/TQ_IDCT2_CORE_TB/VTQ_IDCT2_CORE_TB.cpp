// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTQ_IDCT2_CORE_TB__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VTQ_IDCT2_CORE_TB::VTQ_IDCT2_CORE_TB(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTQ_IDCT2_CORE_TB__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VTQ_IDCT2_CORE_TB::VTQ_IDCT2_CORE_TB(const char* _vcname__)
    : VTQ_IDCT2_CORE_TB(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTQ_IDCT2_CORE_TB::~VTQ_IDCT2_CORE_TB() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTQ_IDCT2_CORE_TB___024root___eval_debug_assertions(VTQ_IDCT2_CORE_TB___024root* vlSelf);
#endif  // VL_DEBUG
void VTQ_IDCT2_CORE_TB___024root___eval_static(VTQ_IDCT2_CORE_TB___024root* vlSelf);
void VTQ_IDCT2_CORE_TB___024root___eval_initial(VTQ_IDCT2_CORE_TB___024root* vlSelf);
void VTQ_IDCT2_CORE_TB___024root___eval_settle(VTQ_IDCT2_CORE_TB___024root* vlSelf);
void VTQ_IDCT2_CORE_TB___024root___eval(VTQ_IDCT2_CORE_TB___024root* vlSelf);

void VTQ_IDCT2_CORE_TB::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTQ_IDCT2_CORE_TB::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTQ_IDCT2_CORE_TB___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTQ_IDCT2_CORE_TB___024root___eval_static(&(vlSymsp->TOP));
        VTQ_IDCT2_CORE_TB___024root___eval_initial(&(vlSymsp->TOP));
        VTQ_IDCT2_CORE_TB___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTQ_IDCT2_CORE_TB___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VTQ_IDCT2_CORE_TB::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VTQ_IDCT2_CORE_TB::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VTQ_IDCT2_CORE_TB::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTQ_IDCT2_CORE_TB___024root___eval_final(VTQ_IDCT2_CORE_TB___024root* vlSelf);

VL_ATTR_COLD void VTQ_IDCT2_CORE_TB::final() {
    VTQ_IDCT2_CORE_TB___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTQ_IDCT2_CORE_TB::hierName() const { return vlSymsp->name(); }
const char* VTQ_IDCT2_CORE_TB::modelName() const { return "VTQ_IDCT2_CORE_TB"; }
unsigned VTQ_IDCT2_CORE_TB::threads() const { return 1; }
void VTQ_IDCT2_CORE_TB::prepareClone() const { contextp()->prepareClone(); }
void VTQ_IDCT2_CORE_TB::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VTQ_IDCT2_CORE_TB::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VTQ_IDCT2_CORE_TB___024root__trace_decl_types(VerilatedVcd* tracep);

void VTQ_IDCT2_CORE_TB___024root__trace_init_top(VTQ_IDCT2_CORE_TB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTQ_IDCT2_CORE_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_IDCT2_CORE_TB___024root*>(voidSelf);
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VTQ_IDCT2_CORE_TB___024root__trace_decl_types(tracep);
    VTQ_IDCT2_CORE_TB___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root__trace_register(VTQ_IDCT2_CORE_TB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTQ_IDCT2_CORE_TB::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VTQ_IDCT2_CORE_TB::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTQ_IDCT2_CORE_TB___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
