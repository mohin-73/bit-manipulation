#include <bits/stdc++.h>

using namespace std;

char solve() {
    string s, str;
    for (int i = 0; i < 3; ++i) {
        cin >> s;
        if (s.find('?') != string::npos) {
            str = s;
        }
    }
    int mask = 0;
    for (char ch : str) {
        mask |= ch == 'A' ? 1 : ch == 'B' ? 2 : ch == 'C' ? 4 : 0;
    }
    return ((mask ^ 7) == 1) ? 'A' : ((mask ^ 7) == 2) ? 'B' : 'C';
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
    Solving Procedure (Bitmask Explanation)
─────────────────────────────────────────────
    A → 001 (1)
    B → 010 (2)
    C → 100 (4)
    A | B | C = 111 (7)
    A → mask |= 1
    B → mask |= 2
    C → mask |= 4
    missing = 7 ^ mask
─────────────────────────────────────────────
*/ 
