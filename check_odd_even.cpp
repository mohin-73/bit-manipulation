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
─────────────────────────────────────────────
    QUICK REFERENCE
─────────────────────────────────────────────
    1 = 0 0000000 00000000 00000000 00000001
    2 = 0 0000000 00000000 00000000 00000010
    Value--------→ 2048 1024 512 256 128 64 32 16 8 4 2 1
    Position-----→  11   10   9   8   7  6  5  4  3 2 1 0
    Any odd number's 0th bit's positional value is 1
    Any even number's 0th bit's positional value is 0
    If LSB = 1 → number is odd.
    If LSB = 0 → number is even.
─────────────────────────────────────────────
*/
