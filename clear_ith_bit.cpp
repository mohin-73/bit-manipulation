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
─────────────────────────────────────────────
    Bit Numbering Convention (Important)
─────────────────────────────────────────────
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
─────────────────────────────────────────────
    Example Run
─────────────────────────────────────────────
    Input:
    13 2

    Binary of 13 = 1101
                    ↑
            clear this bit (i = 2)
    mask is shorthand for bitmask and i = setposition
    mask = ~(1 << 2)
         = ~(4)
         = ~(0 0000100)
         = 1 1111011
    mask & num = (1 1111101) & (0 0001011) = (0 0001001)

    Left most bit is the sign bit, 0 for +ve 1 for -ve
    After clearing → 1001 = 9

    Output:
    9
─────────────────────────────────────────────
*/
