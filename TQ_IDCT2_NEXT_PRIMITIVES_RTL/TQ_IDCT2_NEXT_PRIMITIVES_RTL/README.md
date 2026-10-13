# IDCT2 Next Primitives — SystemVerilog RTL

## Delivery

**New RTL modules:**

1. `rtl/TQ_IDCT2_COMBINE_4.sv`
2. `rtl/TQ_IDCT2_ODD_MCM_8.sv`

**Unmodified dependencies, included so the testbench runs standalone:**

- `rtl/TQ_IDCT2_BASE_2.sv`
- `rtl/TQ_IDCT2_ODD_MCM_4.sv`

**Verification:**

- `tb/TQ_IDCT2_NEXT_PRIMITIVES_TB.sv`
- `tb/verify_python_reference.py` (standalone arithmetic/protocol *model*, not RTL simulation)
- `run_verilator.sh`

## Numeric contract

All lane slices are **signed** in the datapath, with lane 0 at the least-significant bits of each packed bus. The default input coefficient width is 16 bits. All arithmetic results are raw signed 28-bit integers. **No rounding, normalization, transform-stage clipping, or DSP multiplication occurs in these modules.** Inverse scaling remains outside the IDCT2 core.

### `TQ_IDCT2_COMBINE_4`

Input `I_EVEN_DATA` packs `[E1,E0]` and input `I_ODD_DATA` packs `[O1,O0]`, least-significant lane first.

The module computes:

```
X0 = E0 + O0
X1 = E1 + O1
X2 = E1 - O1
X3 = E0 - O0
```

Output `O_DATA` packs `{X3, X2, X1, X0}`. Each input has **separate** `VALID/READY`. One-entry registers hold each branch, followed by a registered output stage. Branch items are paired **in arrival order**. They must refer to the same vector index; module does not have a vector ID and does not match by tags. Backpressure is fully supported; existing `TQ_IDCT2_BASE_2` (2 stages) and `TQ_IDCT2_ODD_MCM_4` (3 stages) can drive this join directly.

The default 28-bit result width safely represents all possible 4-point raw results for 16-bit coefficient inputs. Parameter changes require a new numerical-width proof.

### `TQ_IDCT2_ODD_MCM_8`

Input `I_DATA` packs `{C7,C5,C3,C1}`. Output `O_DATA` packs `{O3,O2,O1,O0}`.

```
O0 = 89*C1 + 75*C3 + 50*C5 + 18*C7
O1 = 75*C1 - 18*C3 - 89*C5 - 50*C7
O2 = 50*C1 - 89*C3 + 18*C5 + 75*C7
O3 = 18*C1 - 50*C3 + 75*C5 - 89*C7
```

The odd half of the 8-point DCT2 basis is symmetric, allowing the same constant-product topology as the forward `TQ_DCT2_ODD_MCM_8`. Five elastic pipeline stages implement shared shift-add products. After filling, throughput is **one four-term vector per cycle** if downstream READY remains asserted. A single stage stores a complete four-lane transaction; there are no partial-lane handshakes.

`ODD_MCM_8` alone is **not** a complete inverse 8-point DCT2: it needs the inverse even hierarchy and `COMBINE_8`.

## Run on WSL with Verilator

From the extracted directory:

```bash
bash run_verilator.sh
```

The script runs the combined testbench that instantiates four modules, prints 12 raw vectors for each path, and emits `[PASS]` only when all expected results and backpressure assertions match. It also creates a VCD file in `run/` when tracing is enabled. The testbench does not need `.mem` files.

To use your project Makefile, add the four RTL files and `tb/TQ_IDCT2_NEXT_PRIMITIVES_TB.sv` to your filelist and set:

```bash
make run SIM_TOP=TQ_IDCT2_NEXT_PRIMITIVES_TB
```

To run the independent **Python-only** checks:

```bash
python3 tb/verify_python_reference.py
```

## Verification status

- Python arithmetic reference: **100,003 vectors PASS** for inverse 4-point combination and 8-point odd terms.
- Python ready/valid join model: **10,000 ordered pairs PASS**, including stalls.
- **Verilator RTL simulation: not yet run in the authoring environment**. You should run the included SystemVerilog testbench on WSL and review the log.
- Vivado synthesis / 200-MHz timing: not yet run.
- Whole IDCT2 8/16/32 datapath vs VTM: not yet established by these two blocks.

## Interface and design decisions

- Naming follows the uploaded SystemVerilog coding guideline (uppercase module/port/parameter names; `logic` internal signals; `always_ff` sequential; reset only validity).
- Existing `BASE_2` and `ODD_MCM_4` are included **unchanged**.
- The join deliberately does not assume identical branch latencies.
- For an IDCT2 core with one vector in flight, a higher-level controller still needs to manage whole-vector input/output framing, size, and metadata.
