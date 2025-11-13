#include <bits/stdc++.h>

using namespace std;

int clearIthBit(int num, int i) {
    int mask = ~(1 << i);
    return (mask & num);
}

int main() {
    int n, i;
    cin >> n >> i;
    cout << clearIthBit(n, i) << '\n';
    return 0;
}

/*
──────────────────────────────────────────────────────────────────────────────────────────
    Bit Numbering Convention (Important)
──────────────────────────────────────────────────────────────────────────────────────────
    Bits are counted from **right to left**
    The **Least Significant Bit (LSB)** — the rightmost bit — is position **0**
    The **Most Significant Bit (MSB)** is the leftmost bit

    Example:
        Binary:   1  1  0  1
        Position: 3  2  1  0
                  ↑        ↑
                 MSB      LSB

    i = 0 → refers to the rightmost bit
    i = 3 → refers to the leftmost bit (in 4-bit example)
──────────────────────────────────────────────────────────────────────────────────────────
    Concept — Clearing the ith Bit
──────────────────────────────────────────────────────────────────────────────────────────
    To clear the ith bit (set it to 0 regardless of its original value):
        Step 1: Create a mask that has all bits set to 1 except the ith bit.
        Step 2: AND this mask with the original number.

    Formula:
        mask = ~(1 << i)
        result = num & mask
──────────────────────────────────────────────────────────────────────────────────────────
    Expression Breakdown — ~(1 << i)
──────────────────────────────────────────────────────────────────────────────────────────
    Example: i = 3
    (1 << 3) = 00000000 00000000 00000000 00001000   → decimal 8

    Applying bitwise NOT (~):
        ~(1 << 3)
        = 11111111 11111111 11111111 11110111

    This is what’s **actually stored in memory** — all bits are 1 except bit 3.
──────────────────────────────────────────────────────────────────────────────────────────
    Two’s Complement Interpretation (Signed int)
──────────────────────────────────────────────────────────────────────────────────────────
    Memory stores raw bits only. The difference between signed and unsigned is how those
    bits are **interpreted**:

        • As unsigned → 11111111 11111111 11111111 11110111 = 4294967287
        • As signed   → interpreted using Two’s Complement = -9

    Two’s Complement process:
        11111111 11111111 11111111 11110111  ← stored bits
        Invert bits → 00000000 00000000 00000000 00001000
        Add 1       → 00000000 00000000 00000000 00001001 = 9
        So the signed interpretation = -9

    Hence:
        ~(1 << 3) = -9  (as signed int)
──────────────────────────────────────────────────────────────────────────────────────────
    Example Run
──────────────────────────────────────────────────────────────────────────────────────────
    Input:
        13 2

    Binary of 13 = 00000000 00000000 00000000 00001101
                                                   ↑
                                           clear this bit (i = 2)

    Step 1: mask = ~(1 << 2)
                 = ~(00000000 00000000 00000000 00000100)
                 = 11111111 11111111 11111111 11111011

    Step 2: mask & num
                   00000000 00000000 00000000 00001101   (13)
                 & 11111111 11111111 11111111 11111011   (~(1 << 2))
                   ───────────────────────────────────
                   00000000 00000000 00000000 00001001   (Result = 9)

    Output:
        9
──────────────────────────────────────────────────────────────────────────────────────────
    Summary
──────────────────────────────────────────────────────────────────────────────────────────
    • (1 << i)       → sets only the ith bit to 1
    • ~(1 << i)      → sets all bits to 1 except the ith bit
    • num & ~(1 << i) → clears the ith bit of num
    • The bitwise NOT (~) flips every bit
    • Signed ints use **two’s complement** to represent negative values
    • Memory always holds raw bits; only the **interpretation** differs
──────────────────────────────────────────────────────────────────────────────────────────
*/
