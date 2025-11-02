#include <bits/stdc++.h>

using namespace std;

int clearLastIBits(int n, int i) {
    int mask = ~((1 << i) - 1);
    return (n & mask);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, i;
    cin >> n >> i;
    cout << clearLastIBits(n, i) << '\n';
    return 0;
}

/*
─────────────────────────────────────────────
    Example Run 
─────────────────────────────────────────────
    Input:
    59 3

    Binary of 59 = (111011)
                       ↑↑↑
               clear these last 3 bits (i = 3)

─────────────────────────────────────────────
    Step 1: (1 << i)
            = (1 << 3)
            = (00001000)

    Step 2: (1 << i) - 1
            = (00001000) - 1
            = (00000111)

    Step 3: mask = ~((1 << i) - 1)
                 = ~(00000111)
                 = 11111000

    Step 4: n & mask = (111011) & (111000)
                     = (111000)

─────────────────────────────────────────────
    Result:
        Binary → 111000
        Decimal → 56

    Output:
    56
─────────────────────────────────────────────
    Concept:
        "Clearing last i bits" means
        turning the i least significant bits to 0,
        while keeping higher bits unchanged.
─────────────────────────────────────────────
*/
