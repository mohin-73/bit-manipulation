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
╭──────────────────────────────────────────────────────────────────────────────╮
│                              QUICK REFERENCE                                 │
├──────────────────────────────────────────────────────────────────────────────┤
│ Binary Representation (32-bit view sample)                                   │
│                                                                              │
│   1 = 0 0000000 00000000 00000000 00000001                                   │
│   2 = 0 0000000 00000000 00000000 00000010                                   │
│                                          └── Least Significant Bit (LSB)     │
│                                                                              │
│ Value (2ⁿ)     → 2048  1024  512  256  128   64   32   16    8   4    2    1 │
│ Bit Position   →  11    10    9    8    7    6    5    4    3    2    1    0 │
│                                                                              │
│ Notes:                                                                       │
│   • Any **odd** number has LSB = 1  → positional value = 1                   │
│   • Any **even** number has LSB = 0 → positional value = 0                   │
│   • If LSB = 1 → Number is **odd**                                           │
│   • If LSB = 0 → Number is **even**                                          │
╰──────────────────────────────────────────────────────────────────────────────╯
*/
