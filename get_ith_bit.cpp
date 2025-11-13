#include <bits/stdc++.h>

using namespace std;

int getIthBit(int n, int i) {
    int mask = 1 << i;
    return (mask & n) != 0 ? 1 : 0;
}

int main() {
    int n, i;
    cin >> n >> i;
    cout << getIthBit(n, i) << '\n';
    return 0;
}

/*
─────────────────────────────────────────────────────────────────────────────────────
    Bit Numbering Convention (Important) 
─────────────────────────────────────────────────────────────────────────────────────
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
─────────────────────────────────────────────────────────────────────────────────────
    Example Run 1
─────────────────────────────────────────────────────────────────────────────────────
    Input:
    13 2

    Binary of 13 = 1101
                    ↑
             get this bit (i = 2)
    mask is shorthand for bitmask and i = position
    mask = (1 << 2)
         = 4
         = (00000100)

    mask & n = (00001101) & (00000100)
             = (00000100)
             = 4
    (mask & n) != 0 → true → bit value = 1

    Output:
    1
─────────────────────────────────────────────────────────────────────────────────────
    Example Run 2
─────────────────────────────────────────────────────────────────────────────────────
    Input:
    -10 31

    Binary of -10 (32-bit signed integer, two’s complement):
    11111111111111111111111111110110
    ↑
    get this bit (i = 31)

    mask = 1 << 31
         = (10000000000000000000000000000000)
            1 at the MSB — sign bit position

    mask & n = (10000000000000000000000000000000) & (11111111111111111111111111110110)
             = (10000000000000000000000000000000)

    (mask & n) != 0 → true → bit value = 1

    Output:
    1
─────────────────────────────────────────────────────────────────────────────────────
    Notes
─────────────────────────────────────────────────────────────────────────────────────
    • -10 is stored in two’s complement form.
    • Its most significant bit (bit 31) is 1, which indicates a negative number.
    • The mask (1 << 31) isolates only the 31st bit (the sign bit).
    • Performing (mask & n) keeps only that bit.
    • Since the result is nonzero, the 31st bit = 1.
    • Therefore, the bit at position 31 of -10 is 1.
    • Works for both positive and negative integers.
─────────────────────────────────────────────────────────────────────────────────────
*/
