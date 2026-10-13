# H.266/VVC All-Intra — Inverse Transform Architecture Specification

**Status:** Inverse 2D architecture **CHỐT**; `TQ_IDCT2_CORE` inverse partial butterfly/MCM microarchitecture **CHỐT**; RTL đang triển khai theo từng module.  
**Ngày:** 2026-10-11  
**Target:** Kintex UltraScale+ / 200 MHz / YUV 4:2:0 10-bit / 4 samples mỗi beat.  
**Liên quan:** `TQ_PRIMARY_TRANSFORM_TOP`, `TQ_INVERSE_QUANTIZATION_ENGINE`, Reconstruction Engine, `ENCODER_TU_SCHEDULER`.

## 1. Phạm vi và baseline đã thống nhất

- Input: bốn **dequantized coefficients signed 16-bit** trên mỗi beat, theo **column-major**, từ Inverse Quantization.
- Output: bốn **reconstructed residual samples signed 16-bit** trên mỗi beat, theo **row-major**, đưa sang Reconstruction Engine.
- Kích thước 1D: 4/8/16/32-point; TU vuông hoặc chữ nhật với chiều rộng/cao thuộc tập này.
- Transform: DCT-II; DST-VII/DCT-VIII ở những trường hợp được cấu hình VVC cho phép. `MTS` phải được quyết định đúng ở Encoder và báo hiệu/diễn giải đúng ở CABAC/Decoder.
- Baseline: LFNST OFF, Transform Skip OFF, extended transform precision OFF, `maxLog2TrDynamicRange=15`, `bitDepth=10`.
- Datapath vẫn giữ `TU_ID` 16-bit nội bộ, metadata kích thước và hai transform mode, các mốc `TU_START/TU_LAST` và ready/valid.
- Toàn bộ dữ liệu signed sử dụng sign extension tường minh và clip có thứ tự. Không chèn rounding/clipping trong arithmetic core thô.

## 2. Kiến trúc 2D đã CHỐT

```text
TQ_INVERSE_QUANTIZATION_ENGINE
   │ 4 × signed 16-bit, column-major
   ▼
TQ_INVERSE_COLUMN_1D_ENGINE
   ├─ TQ_IDCT2_CORE
   └─ TQ_IDST7_IDCT8_CORE
   │ raw wide sums (chưa shift/clip)
   ▼
TQ_INV_COLUMN_SCALING
   │ signed round >> 7; clip [-32768, 32767]
   ▼
TQ_INV_TRANSPOSE_MEMORY
   │ 2 TU ping-pong buffers × 4 banks/buffer
   │ ghi theo cột, đọc theo hàng
   ▼
TQ_INVERSE_ROW_1D_ENGINE
   ├─ TQ_IDCT2_CORE
   └─ TQ_IDST7_IDCT8_CORE
   │ raw wide sums
   ▼
TQ_INV_ROW_SCALING
   │ signed round >> 10; clip [-32768, 32767]
   ▼
RECONSTRUCTION ENGINE
   (4 × signed 16-bit reconstructed residuals, row-major)
```

**Hai 1D Engines là hai instance phần cứng độc lập**, giúp pipeline giữa các TU qua ping-pong memory. Controller theo dõi TU ownership/metadata, không trộn các TU đang ở hai stage.

### 2.1. Scaling / rounding / clipping

Theo baseline từ `TrQuant::xIT()` của VTM:

- `shift_1st = TRANSFORM_MATRIX_SHIFT + 1 + COM16_C806_TRANS_PREC = 7` với `TRANSFORM_MATRIX_SHIFT=6`, precision offset=0.
- `shift_2nd = TRANSFORM_MATRIX_SHIFT + maxLog2TrDynamicRange - 1 - bitDepth + COM16_C806_TRANS_PREC = 10`.
- Mỗi stage tạo: `clip16((raw_sum + (1 << (shift-1))) >>> shift)` với phép toán signed đủ rộng.
- Clip ở **hai stage riêng**, không trì hoãn clip của column đến sau row.
- Điều kiện/số liệu chốt đúng cho baseline 10-bit đã chọn; nếu cấu hình VTM thay đổi phải tính lại.

### 2.2. Transpose memory

- Giữ ý tưởng của Forward `TQ_TRANSPOSE_MEMORY`: **2 buffers** quản lý ping-pong, mỗi buffer **4 banks**.
- Định tuyến đồng thời 4 lanes bằng `bank=(row+col)%4`; ở inverse **ghi 4 phần tử dọc** theo một cột, **đọc 4 phần tử ngang** theo một hàng.
- Địa chỉ bank phải được chứng minh ánh xạ bijective cho cả hai hướng, không chỉ sao chép biểu thức Forward mà thiếu kiểm tra.
- Output đưa sang inverse row ở thứ tự hàng, sẵn sàng cho Reconstruction row-major.

### 2.3. Các module 2D dự kiến

| Module | Trạng thái | Ghi chú |
|---|---|---|
| `TQ_INVERSE_TRANSFORM_TOP` | CHỐT cấp kiến trúc | Wrapper mỏng, không duplicating FSM |
| `TQ_INVERSE_2D_CONTROLLER` | CHỐT cấp kiến trúc | 2 engines, scaling, ping-pong transpose |
| `TQ_UNIFIED_INVERSE_1D_ENGINE` | CHỐT cấp kiến trúc | Mux kết quả IDCT2 hoặc IDST7/IDCT8 |
| `TQ_IDCT2_CORE` | **ĐÃ CHỐT KIẾN TRÚC; CHƯA RTL TOP** | Inverse hierarchical partial butterfly |
| `TQ_IDST7_IDCT8_CORE` | CHỐT hướng | MCM inverse + permutation/sign DCT8 |
| `TQ_INV_COLUMN_SCALING` | CHỐT | Shift 7 + clip signed16 |
| `TQ_INV_TRANSPOSE_MEMORY` | CHỐT | 2 buffers × 4 banks, column→row |
| `TQ_INV_ROW_SCALING` | CHỐT | Shift 10 + clip signed16 |

## 3. Vì sao không thể chỉ thay coefficient LUT ở Forward Core?

Inverse tính tích ma trận tương ứng hướng chuyển vị của Forward; **hướng luân chuyển dữ liệu trong Partial Butterfly bị đảo**:

- Forward DCT2: input spatial → sum/difference butterfly → odd MCM + even descendants → frequency coefficients.
- Inverse DCT2: frequency coefficients → even/odd MCM/recursive partial transforms → inverse butterfly combine → spatial residual samples.
- MCM có thể kế thừa các phép nhân hằng (shift-add) nhưng phải thiết kế lại **input selection, signed routing, accumulation, butterfly combination và output order**.
- Kết quả raw của core không thay được scaling/rounding/clipping VTM phía ngoài.

## 4. `TQ_IDCT2_CORE` — Vi kiến trúc CHỐT (RTL theo giai đoạn)

### 4.1. Interface gần như giữ nguyên Forward `TQ_DCT2_CORE`

| Port | Ý nghĩa |
|---|---|
| `I_CLK`, `I_RESETN` | Clock, active-low reset |
| `I_TRANSFORM_SIZE[1:0]` | `00`=4, `01`=8, `10`=16, `11`=32 |
| `I_DATA[4*16-1:0]` | 4 signed coefficients/beat; lane 0 ở bit thấp |
| `I_DATA_VALID`, `I_DATA_READY` (output) | Input ready/valid handshake; output `I_DATA_READY` do core phát |
| `O_DATA[4*28-1:0]` | 4 signed raw inverse sums/beat, **chưa scaling** |
| `O_DATA_VALID`, `O_DATA_READY` (input) | Output ready/valid handshake; input `O_DATA_READY` do downstream phát |
| `O_DATA_LAST` | Beat cuối của vector 1D |

Core nhận 4/8/16/32 coefficients trong 1/2/4/8 beats và trả lại đúng 1/2/4/8 beats ở thứ tự **x[0], x[1], …, x[N-1]**. Như Forward, phiên bản đầu giới hạn **1 vector in-flight/core**, không overlap vectors.

> Các cổng ready ở đây giữ **đúng convention của Forward `TQ_DCT2_CORE`**: `I_DATA_READY` là *output* và `O_DATA_READY` là *input*.

### 4.2. Phân rã đệ quy theo tần số chẵn/lẻ

Với vector input `C[0..N-1]` (N=4/8/16/32):

- Tập **even-frequency**: `C[0], C[2], C[4], ...`; tính đệ quy inverse DCT2 `N/2`-point để tạo `E[k]`.
- Tập **odd-frequency**: `C[1], C[3], C[5], ...`; tính bằng **Odd MCM N-point** để tạo `O[k]`, `k=0..N/2-1`.
- Ghép cánh bướm:

  ```text
  x[k]       = E[k] + O[k]
  x[N-1-k]   = E[k] - O[k]       với k=0..N/2-1
  ```

- Trường hợp cơ sở `N=2` dùng `64*(C0+C1)` và `64*(C0-C1)` trong baseline coefficient set. Đầu vào even của N=4 chỉ gồm `C0,C2`.

**Luồng raw tính toán:** `Base2 → Combine4 → Combine8 → Combine16 → Combine32` cho N=32; chọn điểm kết thúc theo kích thước cấu hình.

### 4.3. Ví dụ inverse DCT2 4-point (raw, trước scaling)

Với coefficient set DCT2 4-point đang dùng trong Forward Core, `C=[c0,c1,c2,c3]`:

```text
E0 = 64*c0 + 64*c2      O0 = 83*c1 + 36*c3
E1 = 64*c0 - 64*c2      O1 = 36*c1 - 83*c3

x0 = E0 + O0
x1 = E1 + O1
x2 = E1 - O1
x3 = E0 - O0
```

Đây là **raw inverse 1D**. `TQ_IDCT2_CORE` không cộng rounding offset, không shift 7/10 và không clip 16-bit; việc đó do `TQ_INV_COLUMN_SCALING` hoặc `TQ_INV_ROW_SCALING` đảm nhận.

### 4.4. Sơ đồ khối bên trong

```text
Input (4 coeffs/beat)
         │
         ▼
INPUT VECTOR BUFFER (max 32 × 16 bit)
         │
         ▼
EVEN/ODD INDEX SELECTOR + CONTROLLER
         │
         ├─ Base2 from C[0], C[N/2] where applicable
         ├─ Odd MCM4  (C1,C3 of 4-point subtree)
         ├─ Odd MCM8  (C1,C3,C5,C7 of 8-point subtree)
         ├─ Odd MCM16 (8 odd inputs; folded implementation)
         └─ Odd MCM32 (16 odd inputs; folded implementation)
         │
         ▼
INVERSE BUTTERFLY COMBINER
    Base2 → Combine4 → Combine8 → Combine16 → Combine32
         │
         ▼
OUTPUT VECTOR COLLECTOR (max 32 × 28 bit)
         │
         ▼
Output (4 raw sums/beat + LAST)
```

**Chú ý:** Sơ đồ `Base2` phải lấy cặp hệ số chẵn ở *subtree* thích hợp. Với N=32, đường cuối cùng đi qua các hệ số tần số 0 và 16; tại từng tầng, chỉ số phải được định tuyến theo **stride 2,4,8,…**. Mỗi MCM phải dùng đúng bộ coefficient của kích thước tương ứng, không lấy MCM Forward nối đảo chiều dây.

### 4.5. Tái sử dụng / thay mới từ Forward DCT2 Core

| Forward implementation | IDCT2 proposed counterpart | Cách làm |
|---|---|---|
| `TQ_DCT2_CORE` input / output streaming | `TQ_IDCT2_CORE` | Giữ protocol, input/output buffer, 1-vector-in-flight |
| Input stage selector | Even/Odd coefficient selector | **Đổi routing** |
| `TQ_DCT2_BUTTERFLY_4/8/16/32` | `TQ_IDCT2_COMBINE_4/8/16/32` | **Thay thuật toán** |
| `TQ_DCT2_ODD_MCM_4/8` | `TQ_IDCT2_ODD_MCM_4/8` | Giữ chiến lược shift-add, đổi coefficient→output mapping |
| `TQ_DCT2_ODD_MCM_16/32` | `TQ_IDCT2_ODD_MCM_16/32` | Cân nhắc 4 generators folded, đổi route/accumulate |
| `TQ_DCT2_BASE_2` | `TQ_IDCT2_BASE_2` | Hệ số 64, sum/difference |
| Coefficient assembler | Spatial result collector | Gom sample theo x index tự nhiên |

### 4.6. Width và scheduling cần xác nhận trước RTL

- `I_DATA` signed 16-bit và `O_DATA` raw signed 28-bit **đề xuất**. Từ bound thô `32*32768*90 < 2^27`, 28-bit signed chứa được raw dot-product 32-point khi mọi hệ số có độ lớn không vượt quá 90; cần xác minh bound của các intermediate MCM theo lịch phép cộng trước khi cố định width nội bộ.
- Odd MCM 4/8 ưu tiên fully parallel; Odd MCM 16/32 đề xuất giữ tối đa **4 shared constant-product generators** và accumulation theo từng nhóm. Phải kiểm tra latency/chân handshake vì inverse routing khác Forward.
- Một vector có thể chờ mọi nhánh MCM hoàn tất trước khi chạy combiner. Giữ completion flags, không dùng giả định tất cả MCM có cùng latency.
- No multiply-by-variable / no DSP cần thiết bên trong IDCT2 MCM; ưu tiên shift/add/sub hằng số. Điều này **khác 4 DSP48E2 của Inverse Quantization**.
- Output collector xuất 4 raw sums mỗi beat; `LAST` ở beat thứ `N/4` được handshake.

## 5. Ràng buộc xử lý MTS / DST7 / DCT8

- Chroma baseline sử dụng DCT2; DST7/DCT8 chỉ khi được chuẩn cho phép và mode đã được báo hiệu hợp lệ.
- Inverse DST7/DCT8 có thể dùng cùng arithmetic kernel inverse DST7 với permutation/sign đúng chiều; **không chỉ sửa giá trị coefficient LUT**.
- Với 32-point DST7/DCT8 bị zero-out tần số cao, vẫn phải sinh **đủ 32 spatial residual samples** ở đầu ra.

## 6. Verification / việc cần chốt tiếp

1. Thiết kế và verify `TQ_IDCT2_BASE_2`, `TQ_IDCT2_ODD_MCM_4`, `TQ_IDCT2_COMBINE_4` với golden direct matrix raw.
2. Mở rộng N=8 → N=16 → N=32, mỗi N đối chiếu raw matrix product trước rounding.
3. Kiểm tra độ rộng ở mọi stage, nhất là 32-point extremes, signed negative và MCM accumulation.
4. Kiểm tra tất cả output samples, không chỉ nửa vector / odd terms.
5. Test 4-lane ready/valid, stalls tại last beat, size đổi khi vector tiếp theo và vector ordering.
6. Sau khi core raw PASS, verify `shift=7`, `shift=10` và hai bước clip ở 2D engine.
7. Golden VTM pinned revision và decoder conformance cần được kiểm tra độc lập với golden Python.
8. Cuối cùng đo Vivado utilization và timing 200 MHz.

**Điểm đang thảo luận kế tiếp:** xác định cấu trúc odd-MCM/selector/combiner để giữ thiết kế 4 generators folded cho N=16/32 và 1-vector-in-flight, sau đó viết RTL theo SystemVerilog coding guideline của project.

## 7. Tham chiếu

- Local Forward RTL được đối chiếu: `TQ_DCT2_CORE_RTL.zip`, bao gồm `TQ_DCT2_CORE.sv`, Butterfly, Odd MCM và Base2.
- VTM `TrQuant.cpp`: <https://raw.githubusercontent.com/ChristianFeldmann/VTM/master/source/Lib/CommonLib/TrQuant.cpp> — `xIT()` inverse 2D, scaling/order.
- VTM `TrQuant_EMT.cpp`: <https://raw.githubusercontent.com/ChristianFeldmann/VTM/master/source/Lib/CommonLib/TrQuant_EMT.cpp> — `fastInverseDCT2_B4/B8/B16/B32`.
- Trước khi khẳng định bit-exact phải khóa một bản VTM cụ thể thay vì nhánh `master` biến động.

## 7. Tiến độ triển khai IDCT2 2026-10-11

- `TQ_IDCT2_BASE_2.sv`: đã viết 2-stage elastic pipeline, signed 16-bit input và raw 28-bit output; `E0=64(C0+C2)`, `E1=64(C0-C2)`.
- `TQ_IDCT2_ODD_MCM_4.sv`: đã viết 3-stage elastic pipeline, shift-add 36/83; `O0=83*C1+36*C3`, `O1=36*C1-83*C3`.
- Testbench `TQ_IDCT2_PRIMITIVES_TB.sv` có 8 vectors và stall checks; chưa có xác nhận RTL simulation. Python check 100.000 vectors arithmetic PASS.
- Các khối Combine4, Odd MCM8/16/32, Combine8/16/32, top IDCT2 vẫn cần triển khai và xác minh.
