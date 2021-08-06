//
//   Codeforces - A. Elevator or Stairs?
//   https://codeforces.com/problemset/problem/1054/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y, z, t1, t2, t3;
    cin >> x >> y >> z >> t1 >> t2 >> t3;

    // If masha uses the stairs, she will require
    int stairs = abs(x - y) * t1;

    // cout << stairs << "\n";

    // if masha uses the elevator
    int elevator = t2*abs(x-z) + t3 + t3 + t2*abs(x-y) + t3;

    // cout << elevator << "\n";

    cout << (elevator <= stairs ? "YES" : "NO") << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}