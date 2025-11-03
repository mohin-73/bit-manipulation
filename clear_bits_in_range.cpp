#include <bits/stdc++.h>

using namespace std;

int clearBitsInRange(int num, int i, int j) {
    int a = (~0) << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    return num & mask;
}

int main() {
    int n, i, j;
    cin >> n >> i >> j;
    cout << clearBitsInRange(n, i, j) << '\n';
    return 0;
}

/*
─────────────────────────────────────────────────────
    Explanation
─────────────────────────────────────────────────────
    Clears all bits from position i to j (inclusive).

    Steps:
    1. a = (~0) << (j + 1)   → 1s before j
    2. b = (1 << i) - 1      → 1s after i
    3. mask = a | b          → combine
    4. result = num & mask   → clear bits in range

─────────────────────────────────────────────────────
    Example Run 1
─────────────────────────────────────────────────────
    Input:
        n = 31
        i = 1
        j = 3

    Binary:
        n = 00011111

    Steps:
        a = (~0) << (3 + 1) = 11110000
        b = (1 << 1) - 1   = 00000001
        mask = 11110000 | 00000001 = 11110001

        num & mask = 00011111 & 11110001 = 00010001

    Output:
        17

─────────────────────────────────────────────────────
    Example Run 2
─────────────────────────────────────────────────────
    Input:
        n = 255
        i = 4
        j = 6

    Binary:
        n = 11111111

    Steps:
        a = (~0) << (6 + 1) = 1110 0000
        b = (1 << 4) - 1   = 0000 1111
        mask = 11100000 | 00001111 = 11101111

        num & mask = 11111111 & 11101111 = 11101111

    Output:
        239

─────────────────────────────────────────────────────
    Example Run 3
─────────────────────────────────────────────────────
    Input:
        n = 63
        i = 0
        j = 4

    Binary:
        n = 00111111

    Steps:
        a = (~0) << (4 + 1) = 11100000
        b = (1 << 0) - 1   = 00000000
        mask = 1110 0000 | 0000 0000 = 11100000

        num & mask = 00111111 & 11100000 = 00100000

    Output:
        32
─────────────────────────────────────────────────────
*/
