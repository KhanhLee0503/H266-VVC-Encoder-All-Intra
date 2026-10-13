#!/usr/bin/env python3
"""Independent fixed-coefficient arithmetic consistency checks for IDCT2 B2/B4."""
import random

rng = random.Random(266)
values = [0, 1, -1, 32767, -32768]
for test_idx in range(100_000):
    c0, c1, c2, c3 = [
        rng.choice(values) if rng.randrange(4) == 0 else rng.randint(-32768, 32767)
        for _ in range(4)
    ]
    e0 = (c0 + c2) << 6
    e1 = (c0 - c2) << 6
    nine_c1, nine_c3 = (c1 << 3) + c1, (c3 << 3) + c3
    thirty_six_c1, thirty_six_c3 = nine_c1 << 2, nine_c3 << 2
    eighty_three_c1 = (c1 << 6) + (nine_c1 << 1) + c1
    eighty_three_c3 = (c3 << 6) + (nine_c3 << 1) + c3
    o0 = eighty_three_c1 + thirty_six_c3
    o1 = thirty_six_c1 - eighty_three_c3
    assert (e0, e1, o0, o1) == (
        64 * (c0 + c2),
        64 * (c0 - c2),
        83 * c1 + 36 * c3,
        36 * c1 - 83 * c3,
    ), f"Mismatch test_idx={test_idx}"
    assert all(-(1 << 27) <= result < (1 << 27) for result in (e0, e1, o0, o1))
print("PASS: 100000 input vectors, constant-product arithmetic, signed28 bound")
