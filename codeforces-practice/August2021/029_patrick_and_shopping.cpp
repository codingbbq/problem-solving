//
//   Codeforces - A. Patrick and Shopping
//   https://codeforces.com/problemset/problem/599/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    int travel = INT_MAX;
    travel = min(travel, 2*(d1+d2));
    travel = min(travel, 2*(d1+d3));
    travel = min(travel, 2*(d2+d3));
    travel = min(travel, d1+d2+d3);

    cout << travel << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}