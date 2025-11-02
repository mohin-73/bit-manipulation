#include <bits/stdc++.h>

using namespace std;

long long solve() {
    long long n, sum = 0;
    cin >> n;
    while (n) {
        sum += n;
        n >>= 1;
    }
    return sum;
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
