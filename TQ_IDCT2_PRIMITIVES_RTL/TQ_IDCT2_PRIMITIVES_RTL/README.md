# TQ_IDCT2_BASE_2 + TQ_IDCT2_ODD_MCM_4

## Trạng thái

- **Kiến trúc đã chốt:** 1-vector-in-flight `TQ_IDCT2_CORE`, inverse even/odd partial butterfly, MCM4/8 parallel, MCM16/32 folded (dự kiến).
- **Hai module RTL đã viết:** `TQ_IDCT2_BASE_2.sv`, `TQ_IDCT2_ODD_MCM_4.sv`.
- **Chưa chạy HDL simulation/synthesis ở môi trường tạo file này.** `TQ_IDCT2_PRIMITIVES_TB.sv` cần chạy trên Verilator/Questa. Python arithmetic check đã chạy 100.000 vectors PASS, không thay thế HDL simulation.
- Hai module đều là **synthesizable RTL**, không dùng `function`, `initial`, `$readmemh` hay phép nhân biến; dùng shift-add/shift.

## 1. Giao tiếp (cùng convention với Forward core)

```systemverilog
input        I_CLK, I_RESETN;
input        I_DATA_VALID;
output logic O_DATA_READY;
input  [2*PARA_DATA_WD-1:0] I_DATA;
output logic O_DATA_VALID;
input        I_DATA_READY;
output logic [2*PARA_RESULT_WD-1:0] O_DATA;
```

`PARA_DATA_WD=16` và `PARA_RESULT_WD=28` mặc định. **Lane 0 nằm trong các bit thấp**. Mỗi output chứa đúng hai signed raw partial sums, **chưa rounding, chưa scaling, chưa clipping**.

### TQ_IDCT2_BASE_2

Input `{C2, C0}` (lane 1 = C2, lane 0 = C0) → Output `{E1, E0}`:

```text
E0 = 64*(C0+C2)
E1 = 64*(C0-C2)
```

Pipeline: 2 stages. S0 cộng/trừ 17-bit, S1 shift-left 6 để ra signed 28-bit. Cặp này cũng được sử dụng cho các cặp hệ số có stride tương ứng của subtree 8/16/32-point.

### TQ_IDCT2_ODD_MCM_4

Input `{C3, C1}` (lane 1 = C3, lane 0 = C1) → Output `{O1, O0}`:

```text
O0 = 83*C1+36*C3
O1 = 36*C1-83*C3
```

Pipeline: 3 stages. S0 đăng ký `C1/C3` và `9*C`; S1 tính `36*C=(9*C)<<2` và `83*C=(64+18+1)*C`; S2 cộng/trừ tích hằng.

Lưu ý: đối với 4-point, kernel odd là cùng ma trận đối xứng với Forward `TQ_DCT2_ODD_MCM_4`, nhưng **semantics** đã đổi từ spatial butterfly odd terms sang frequency coefficients `C1,C3`, và output là các partial sums `O0,O1`.

### Ghép IDCT2 4-point (sẽ thuộc TQ_IDCT2_COMBINE_4)

```text
x0_raw=E0+O0
x1_raw=E1+O1
x2_raw=E1-O1
x3_raw=E0-O0
```

Core sẽ tiếp tục có external scaling: inverse column stage arithmetic `round >> 7`, row stage `round >> 10`, và clip riêng ở hai stages (cấu hình dự án bit-depth 10).

## 2. Cách chạy testbench trên WSL

```bash
cd TQ_IDCT2_PRIMITIVES_RTL
bash run_verilator.sh
```

Yêu cầu Verilator hỗ trợ `--binary --timing`; script tạo `build/` và chạy trong `run/`, nơi tạo `TQ_IDCT2_PRIMITIVES_TB.vcd`. Testbench dùng **posedge-only stimulus**, kiểm tra:

- 8 vectors: zero, signed-positive/negative, `32767`, `-32768`, hỗn hợp.
- So sánh output của từng module với biểu thức độc lập.
- Assertion giữ `VALID`/payload khi output stall.
- Đủ 8 transactions và tối thiểu một lần backpressure mỗi module.
- In trọn từng raw vector 4-point bằng cách ghép Even/Odd trong testbench.

Kiểm tra phần số học Python riêng:

```bash
python3 model/check_arithmetic.py
```

## 3. Tích hợp vào TQ_IDCT2_CORE sau này

Hai module **không có `TU_ID`, transform size, LAST`**: chúng là functional units cấp vector/subtree, core controller đảm nhận routing, đồng bộ thời điểm hoàn tất nhánh, kết hợp và streaming output. Do latency Base2=2 và Odd4=3, controller **không được ghép output tức thời theo clock**, mà phải chốt kết quả từng nhánh khi `O_DATA_VALID && I_DATA_READY`.

Cặp `{C0,C2}` / `{C1,C3}` minh họa cho 4-point. Trong 8/16/32-point, input sẽ đến qua selector với **stride 2/4/8/16** thích hợp. Cần đo width toàn bộ đường recursion trước khi chốt 28-bit final raw cho 32-point.

## 4. Nguồn xác minh

- RTL gốc của dự án: `TQ_DCT2_BASE_2.sv`, `TQ_DCT2_ODD_MCM_4.sv`.
- VTM `source/Lib/CommonLib/TrQuant_EMT.cpp`, `fastInverseDCT2_B2/B4` (cần cố định commit VTM cho verification bit-exact cuối).

## 5. Quy ước coding style

`timescale 1ns/1ps`, `module TQ_...`, `parameter PARA_...`, `I_*/O_*` ports, 2-space indentation, `logic` internals, `always_ff` cho registers, async-low reset chỉ validity, `endmodule: ...`, one module/file. Pipeline registers chỉ update khi ready và dữ liệu valid.
