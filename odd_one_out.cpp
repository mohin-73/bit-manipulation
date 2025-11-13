#include <bits/stdc++.h>

using namespace std;

int solve() {
    int a, b, c;
    cin >> a >> b >> c;
    return (a ^ b ^ c);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << '\n';
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
