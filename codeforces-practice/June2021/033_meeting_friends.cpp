//
//   Codeforces - A. The New Year: Meeting Friends
//   https://codeforces.com/problemset/problem/723/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    cout << max(max(x1, x2), x3) - min(min(x1, x2), x3);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}