//
//   Codeforces - A. Ehab and another construction problem
//   https://codeforces.com/problemset/problem/1088/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin >> x;

    if(x == 1) {
        cout << -1 << "\n";
    } else {
        cout << (x%2 == 0? x : x - 1) << " " << 2 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}