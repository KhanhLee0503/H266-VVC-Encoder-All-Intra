# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VTB_DBF_FD_SAMPLE_ACTIVITY.mk for the caller.

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
	VTB_DBF_FD_SAMPLE_ACTIVITY \
	VTB_DBF_FD_SAMPLE_ACTIVITY___024root__DepSet_hf4c88114__0 \
	VTB_DBF_FD_SAMPLE_ACTIVITY___024root__DepSet_hf4c88114__1 \
	VTB_DBF_FD_SAMPLE_ACTIVITY___024root__DepSet_hf4c88114__2 \
	VTB_DBF_FD_SAMPLE_ACTIVITY___024root__DepSet_hf4c88114__3 \
	VTB_DBF_FD_SAMPLE_ACTIVITY___024root__DepSet_hf4c88114__4 \
	VTB_DBF_FD_SAMPLE_ACTIVITY___024root__DepSet_hf4c88114__5 \
	VTB_DBF_FD_SAMPLE_ACTIVITY___024root__DepSet_h7a691100__0 \
	VTB_DBF_FD_SAMPLE_ACTIVITY__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VTB_DBF_FD_SAMPLE_ACTIVITY__ConstPool_0 \
	VTB_DBF_FD_SAMPLE_ACTIVITY___024root__Slow \
	VTB_DBF_FD_SAMPLE_ACTIVITY___024root__DepSet_hf4c88114__0__Slow \
	VTB_DBF_FD_SAMPLE_ACTIVITY___024root__DepSet_h7a691100__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VTB_DBF_FD_SAMPLE_ACTIVITY__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VTB_DBF_FD_SAMPLE_ACTIVITY__Syms \
	VTB_DBF_FD_SAMPLE_ACTIVITY__Trace__0__Slow \
	VTB_DBF_FD_SAMPLE_ACTIVITY__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
