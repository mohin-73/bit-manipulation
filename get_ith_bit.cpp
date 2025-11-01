#include <bits/stdc++.h>

using namespace std;

int getIthBit(int n, int i) {
    int mask = 1 << i;
    return (mask & n) > 0 ? 1 : 0;
}

int main() {
    int n, i;
    cin >> n >> i;
    cout << getIthBit(n, i);
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
             get this bit (i = 2)

    mask = (1 << 2)
         = 4
         = (0 0000100)

    mask & n = (0 0001101) & (0 0000100)
             = (0 0000100)
             = 4
    (mask & n) > 0 → true → bit value = 1

    Output:
    1
─────────────────────────────────────────────
*/
