//
//   Codeforces - A. Box is Pull
//   https://codeforces.com/problemset/problem/1428/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if(x1 == x2 || y1 == y2) {
            cout << abs(x2 - x1) + abs(y2 - y1) << "\n";
        } else {
            cout << abs(x2 - x1) + abs(y2 - y1) + 2 << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}