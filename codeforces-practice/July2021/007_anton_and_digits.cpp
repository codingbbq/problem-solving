//
//   Codeforces - B. Anton and Digits
//   https://codeforces.com/problemset/problem/734/B
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    // Calculate for 256
    int total = 0;
    int x = min(min(k2, k5), k6);
    total += (256*x);

    // available k2
    k2 = k2 - x;
    int y = min(k2, k3);
    total += (32*y);

    cout << total << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}