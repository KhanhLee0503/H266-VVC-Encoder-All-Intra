#!/usr/bin/env bash
set -euo pipefail
cd "$(dirname "$0")"
verilator --binary --timing --trace -DDUMP_VCD -Wno-fatal \
  --top-module TQ_IDCT2_NEXT_PRIMITIVES_TB \
  --Mdir build \
  rtl/TQ_IDCT2_BASE_2.sv \
  rtl/TQ_IDCT2_ODD_MCM_4.sv \
  rtl/TQ_IDCT2_COMBINE_4.sv \
  rtl/TQ_IDCT2_ODD_MCM_8.sv \
  tb/TQ_IDCT2_NEXT_PRIMITIVES_TB.sv
mkdir -p run
(cd run && ../build/VTQ_IDCT2_NEXT_PRIMITIVES_TB)
