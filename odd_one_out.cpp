#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        cout << (a ^ b ^ c) << '\n';
    }
    return 0;
}

/*
─────────────────────────────────────────────
    XOR (Exclusive OR) — Key Properties
─────────────────────────────────────────────
    1. x ^ x = 0  
    → Any number XOR itself becomes 0. 

    2. x ^ 0 = x  
    → XOR with 0 keeps the number unchanged.

    3. XOR is Commutative and Associative  
    → a ^ b ^ c = b ^ c ^ a = (a ^ b) ^ c
─────────────────────────────────────────────
*/
