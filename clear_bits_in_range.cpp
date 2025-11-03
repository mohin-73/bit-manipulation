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
*/
