# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VTQ_INVERSE_QUANTIZATION_ENGINE_TB.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VTQ_INVERSE_QUANTIZATION_ENGINE_TB \
	VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__DepSet_h2c2e8e73__0 \
	VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__DepSet_h567c2fec__0 \
	VTQ_INVERSE_QUANTIZATION_ENGINE_TB__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool_0 \
	VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__Slow \
	VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__DepSet_h2c2e8e73__0__Slow \
	VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__DepSet_h567c2fec__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms \
	VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Trace__0__Slow \
	VTQ_INVERSE_QUANTIZATION_ENGINE_TB__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
