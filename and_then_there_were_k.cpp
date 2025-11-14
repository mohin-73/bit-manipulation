#include <bits/stdc++.h>

using namespace std;

int solve() {
    int n, p = 0;
    cin >> n;
    while (n) {
        p += 1;
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
───────────────────────────────────────────────────────────────────────────
    Key Idea
───────────────────────────────────────────────────────────────────────────
    Find the position of the Most Significant Bit (MSB)
───────────────────────────────────────────────────────────────────────────
    • Repeatedly right-shift (n >>= 1) until n becomes 0.
    • Count the number of shifts — call this count p.
    • Essentially, p = ⌊log₂(n)⌋ + 1
───────────────────────────────────────────────────────────────────────────
    MSB Position
───────────────────────────────────────────────────────────────────────────
    • The MSB is located at index (p - 1)
───────────────────────────────────────────────────────────────────────────
    Formula
───────────────────────────────────────────────────────────────────────────
    • Result = (1 << (p - 1)) - 1
    • This sets all bits below the MSB to 1.
    Example:
        n = 13 (1101₂)
        p = 4
        Result = (1 << 3) - 1 = 7 (0111₂)
───────────────────────────────────────────────────────────────────────────
    Conceptual Explanation
───────────────────────────────────────────────────────────────────────────
    • All numbers in the range [2^(p - 1), n] share the same MSB = 1.
      Hence, their AND will retain that bit as 1.
    • If we include (2^(p - 1) - 1), its MSB is 0,
      causing the AND of the entire range to become 0.
    • Therefore, (1 << (p - 1)) - 1 represents the AND result
      just before the range crosses the MSB boundary.
───────────────────────────────────────────────────────────────────────────
    Complexity
───────────────────────────────────────────────────────────────────────────
    • Time  : O(log₂n)
    • Space : O(1)
───────────────────────────────────────────────────────────────────────────
*/
