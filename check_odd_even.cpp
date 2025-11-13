#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int num;
    cin >> num;
    if (num & 1) {
        cout << "odd\n";
    }
    else {
        cout << "even\n";
    }
    return 0;
}

/*
──────────────────────────────────────────────────────────────────────────────────────────
    QUICK REFERENCE — Odd or Even Check Using Bitwise AND
──────────────────────────────────────────────────────────────────────────────────────────
    Binary Representation (32-bit sample view)
──────────────────────────────────────────────────────────────────────────────────────────
        1 = 0 0000000 00000000 00000000 00000001
        2 = 0 0000000 00000000 00000000 00000010
            ↑                                  ↑
        Sign Bit                   Least Significant Bit (LSB)
            ↑
    Most Significant Bit (MSB)
──────────────────────────────────────────────────────────────────────────────────────────
    Concept
──────────────────────────────────────────────────────────────────────────────────────────
    • The **Least Significant Bit (LSB)** determines whether a number is odd or even.
        If LSB = 1 → Number is **odd**
        If LSB = 0 → Number is **even**
    • Checking LSB can be done using bitwise AND:
        → Result = num & 1
        → If Result = 1 → odd
        → If Result = 0 → even
──────────────────────────────────────────────────────────────────────────────────────────
    Example Run
──────────────────────────────────────────────────────────────────────────────────────────
    Input:
    13
    Binary of 13 = 1101
                      ↑
                     LSB = 1 → odd number
    Output:
    odd
──────────────────────────────────────────────────────────────────────────────────────────
    Notes
──────────────────────────────────────────────────────────────────────────────────────────
    • Bit positions start from **0** (rightmost bit).
    • This check is faster than using modulo (%) since it directly inspects the LSB.
──────────────────────────────────────────────────────────────────────────────────────────
*/
