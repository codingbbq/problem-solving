//
//   Codeforces - A. Compote
//   https://codeforces.com/problemset/problem/746/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << 7 * min(a, min(b/2, c/4)) << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}