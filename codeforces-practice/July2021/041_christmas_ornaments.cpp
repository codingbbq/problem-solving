//
//   Codeforces - A. New Year and the Christmas Ornament
//   https://codeforces.com/problemset/problem/1091/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int y, b, r;
    cin >> y >> b >> r;

    cout << min(y + 2, min(b + 1, r)) * 3 - 3;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}