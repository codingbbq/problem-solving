//
//   Codeforces - A. Die Roll
//   https://codeforces.com/problemset/problem/9/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int y, w;
    cin >> y >> w;
    int high = max(y, w);
    int poss = 1 + (6 - high);
    int d = __gcd(poss, 6);
    cout << poss/d << "/" << 6/d << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}