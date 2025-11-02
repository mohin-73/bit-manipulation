#include <bits/stdc++.h>

using namespace std;

int solve() {
    int n, p = 0;
    cin >> n;
    while (n) {
        p +=1;
        n >>= 1;
    }
    return ((1 << (p - 1)) - 1);
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
    Bit Manipulation — Key Idea
─────────────────────────────────────────────
    1. Find the position of the Most Significant Bit (MSB)
       → Count how many times we can right-shift (n >>= 1)
         before n becomes 0.

    2. Let that count be p.
       → Then MSB is at position (p - 1).

    3. Result is (1 << (p - 1)) - 1
       → This gives all bits set below the MSB.
         Example: n = 13 (1101₂) → p = 4
         → (1 << 3) - 1 = 7 (111₂)

    4. Explanation:
       → All numbers between 2^(p-1) and n have the same MSB = 1,
         so their AND will keep that bit set.
       → Including (2^(p-1) - 1) introduces a 0 in that position,
         making total AND = 0.

    5. Complexity:
       → Time: O(log₂n)
       → Space: O(1)
─────────────────────────────────────────────
*/
