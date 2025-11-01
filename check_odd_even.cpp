#include <bits/stdc++.h>

using namespace std;

int main() {
    int num;
    cin >> num;
    if (num & 1) {
        cout << "odd\n";
    } else {
        cout << "even\n";
    }
    return 0;
}

/*
─────────────────────────────────────────────
If LSB = 1 → number is odd.
If LSB = 0 → number is even.
─────────────────────────────────────────────
*/
