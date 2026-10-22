# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VDBF_UNIFIED_FILTER_CORE_TB.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VDBF_UNIFIED_FILTER_CORE_TB \
	VDBF_UNIFIED_FILTER_CORE_TB___024root__DepSet_h567c1d61__0 \
	VDBF_UNIFIED_FILTER_CORE_TB___024root__DepSet_h567c1d61__1 \
	VDBF_UNIFIED_FILTER_CORE_TB___024root__DepSet_h04a28cf0__0 \
	VDBF_UNIFIED_FILTER_CORE_TB___024root__DepSet_h04a28cf0__1 \
	VDBF_UNIFIED_FILTER_CORE_TB__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VDBF_UNIFIED_FILTER_CORE_TB__ConstPool_0 \
	VDBF_UNIFIED_FILTER_CORE_TB___024root__Slow \
	VDBF_UNIFIED_FILTER_CORE_TB___024root__DepSet_h567c1d61__0__Slow \
	VDBF_UNIFIED_FILTER_CORE_TB___024root__DepSet_h04a28cf0__0__Slow \
	VDBF_UNIFIED_FILTER_CORE_TB___024root__DepSet_h04a28cf0__1__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VDBF_UNIFIED_FILTER_CORE_TB__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VDBF_UNIFIED_FILTER_CORE_TB__Syms \
	VDBF_UNIFIED_FILTER_CORE_TB__Trace__0__Slow \
	VDBF_UNIFIED_FILTER_CORE_TB__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
