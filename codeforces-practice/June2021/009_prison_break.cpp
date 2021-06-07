//
//   Codeforces - A. Prison Break
//   https://codeforces.com/problemset/problem/1415/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        cout << max(abs(1 - r), abs(r-n)) + max(abs(1 - c), abs(c - m));
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}