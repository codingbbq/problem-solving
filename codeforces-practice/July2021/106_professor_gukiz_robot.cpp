//
//   Codeforces - A. Professor GukiZ's Robot
//   https://codeforces.com/problemset/problem/620/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x1, y1;
    cin >> x1 >> y1;

    int x2, y2;
    cin >> x2 >> y2;

    cout << max(abs(x1 - x2), abs(y1 - y2)) << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}