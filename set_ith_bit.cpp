#include <bits/stdc++.h>

using namespace std;

int setIthBit(int num, int i) {
    int mask = (1 << i);
    return (mask | num);
}

int main() {
    int n, i;
    cin >> n >> i;
    cout << setIthBit(n, i) << '\n';
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
        Binary:   1  0  0  1
        Position: 3  2  1  0
                  ↑        ↑
                 MSB      LSB

    i = 0 → refers to the rightmost bit
    i = 3 → refers to the leftmost bit (in 4-bit example)
─────────────────────────────────────────────
    Example Run
─────────────────────────────────────────────
    Input:
    9 1

    Binary of 9 = 1001
                    ↑
             set this bit (i = 1)
    mask is shorthand for bitmask and i = setposition
    mask = (1 << 1)
         = 2
         = (0 0000010)

    mask | num = (0 0001001) | (0 0000010)
               = (0 0001011)

    After setting → 1011 = +11

    Output:
    11
─────────────────────────────────────────────
*/
