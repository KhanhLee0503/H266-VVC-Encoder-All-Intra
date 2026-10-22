// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VTB_DBF_SAMPLE_WINDOW_ASSEMBLER::VTB_DBF_SAMPLE_WINDOW_ASSEMBLER(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VTB_DBF_SAMPLE_WINDOW_ASSEMBLER::VTB_DBF_SAMPLE_WINDOW_ASSEMBLER(const char* _vcname__)
    : VTB_DBF_SAMPLE_WINDOW_ASSEMBLER(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTB_DBF_SAMPLE_WINDOW_ASSEMBLER::~VTB_DBF_SAMPLE_WINDOW_ASSEMBLER() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_debug_assertions(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);
#endif  // VL_DEBUG
void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_static(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);
void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);
void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_settle(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);
void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);

void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTB_DBF_SAMPLE_WINDOW_ASSEMBLER::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_static(&(vlSymsp->TOP));
        VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial(&(vlSymsp->TOP));
        VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VTB_DBF_SAMPLE_WINDOW_ASSEMBLER::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VTB_DBF_SAMPLE_WINDOW_ASSEMBLER::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VTB_DBF_SAMPLE_WINDOW_ASSEMBLER::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VTB_DBF_SAMPLE_WINDOW_ASSEMBLER::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_final(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);

VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER::final() {
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTB_DBF_SAMPLE_WINDOW_ASSEMBLER::hierName() const { return vlSymsp->name(); }
const char* VTB_DBF_SAMPLE_WINDOW_ASSEMBLER::modelName() const { return "VTB_DBF_SAMPLE_WINDOW_ASSEMBLER"; }
unsigned VTB_DBF_SAMPLE_WINDOW_ASSEMBLER::threads() const { return 1; }
void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER::prepareClone() const { contextp()->prepareClone(); }
void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VTB_DBF_SAMPLE_WINDOW_ASSEMBLER::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_decl_types(VerilatedVcd* tracep);

void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_init_top(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root*>(voidSelf);
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_decl_types(tracep);
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_register(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VTB_DBF_SAMPLE_WINDOW_ASSEMBLER::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
