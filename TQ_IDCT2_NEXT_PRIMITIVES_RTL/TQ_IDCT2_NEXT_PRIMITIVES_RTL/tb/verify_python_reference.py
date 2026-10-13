#!/usr/bin/env python3
"""Non-HDL arithmetic and ready/valid reference checks for two IDCT2 primitives."""
import random

R = random.Random(266)
MAT8_ODD = (
    (89, 75, 50, 18),
    (75, -18, -89, -50),
    (50, -89, 18, 75),
    (18, -50, 75, -89),
)
MAT4 = (
    (64, 83, 64, 36),
    (64, 36, -64, -83),
    (64, -36, -64, 83),
    (64, -83, 64, -36),
)


def mcm8(v):
    p9 = [(x << 3) + x for x in v]
    p25 = [(x << 4) + k for x, k in zip(v, p9)]
    p18 = [x << 1 for x in p9]
    p50 = [x << 1 for x in p25]
    p75 = [(x << 1) + x for x in p25]
    p89 = [(x << 6) + k for x, k in zip(v, p25)]
    return [
        p89[0] + p75[1] + p50[2] + p18[3],
        p75[0] - p18[1] - p89[2] - p50[3],
        p50[0] - p89[1] + p18[2] + p75[3],
        p18[0] - p50[1] + p75[2] - p89[3],
    ]


def combine4(c):
    c0, c1, c2, c3 = c
    even0 = 64 * (c0 + c2)
    even1 = 64 * (c0 - c2)
    odd0 = 83 * c1 + 36 * c3
    odd1 = 36 * c1 - 83 * c3
    return [even0 + odd0, even1 + odd1, even1 - odd1, even0 - odd0]


def check_math(trials=100000):
    cases = [[0] * 4, [32767] * 4, [-32768] * 4]
    for _ in range(trials):
        cases.append([R.randint(-32768, 32767) for _ in range(4)])
    for c in cases:
        got_odd = mcm8(c)
        gold_odd = [sum(a * b for a, b in zip(row, c)) for row in MAT8_ODD]
        assert got_odd == gold_odd, (c, got_odd, gold_odd)
        got4 = combine4(c)
        gold4 = [sum(a * b for a, b in zip(row, c)) for row in MAT4]
        assert got4 == gold4, (c, got4, gold4)
        assert all(-(1 << 27) <= x < (1 << 27) for x in (*got_odd, *got4))
    print(f"[PASS] Reference arithmetic: {len(cases)} vectors for COMBINE4 and ODD8")


def check_join_handshake(n=10000):
    """Simulate COMBINE_4 valids and holdings with separate input backpressure."""
    even = list(range(n))
    odd = list(range(n))
    i_e = i_o = 0
    e_valid = o_valid = out_valid = False
    e_data = o_data = out_data = None
    result = []
    stalls = 0
    for cycle in range(100000):
        rd = R.choice([True, False, False])
        even_in_valid = i_e < n and R.choice([True, False])
        odd_in_valid = i_o < n and R.choice([True, False])
        out_ready = (not out_valid) or rd
        pair = e_valid and o_valid and out_ready
        e_ready = (not e_valid) or pair
        o_ready = (not o_valid) or pair
        if out_valid and not rd:
            stalls += 1
        if out_valid and rd:
            result.append(out_data)
        nxt_e_valid = even_in_valid if e_ready else e_valid
        nxt_o_valid = odd_in_valid if o_ready else o_valid
        nxt_out_valid = e_valid and o_valid if out_ready else out_valid
        nxt_e_data = even[i_e] if e_ready and even_in_valid else e_data
        nxt_o_data = odd[i_o] if o_ready and odd_in_valid else o_data
        nxt_out_data = (e_data, o_data) if pair else out_data
        if e_ready and even_in_valid:
            i_e += 1
        if o_ready and odd_in_valid:
            i_o += 1
        e_valid, o_valid, out_valid = nxt_e_valid, nxt_o_valid, nxt_out_valid
        e_data, o_data, out_data = nxt_e_data, nxt_o_data, nxt_out_data
        if len(result) == n:
            break
    assert result == list(zip(even, odd)), (len(result), n)
    print(f"[PASS] Reference elastic join: {n} ordered pairs, {stalls} stall cycles")


if __name__ == "__main__":
    check_math()
    check_join_handshake()
