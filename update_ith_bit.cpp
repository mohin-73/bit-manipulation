#include <bits/stdc++.h>

using namespace std;

int updateIthBit(int num, int i, int val) {
    int mask = ~(1 << i);
    num = num & mask;
    num = num | (val << i);
    return num;
}

int main() {
    int n, i, v;
    cin >> n >> i >> v;
    cout << updateIthBit(n, i, v) << '\n';
    return 0;
}

/*
─────────────────────────────────────────────
    Example Run
─────────────────────────────────────────────
    Input:
    13 2 0

    Binary of 13 = (1101)
                     ↑
            update this bit (i = 2)
    Step 1: mask = ~(1 << 2)
                = ~(0 0000100)
                = 1 1111011

    Step 2: Clear bit 2
            num & mask = (00001101) & (11111011)
                       = (00001001)

    Step 3: Set bit 2 to val = 0
            (val << i) = (0 << 2) = (00000000)
            num | (val << i) = (00001001) | (00000000)
                             = (00001001)
    Result:
        Binary → 1001
        Decimal → 9

    Output:
    9
─────────────────────────────────────────────
*/
