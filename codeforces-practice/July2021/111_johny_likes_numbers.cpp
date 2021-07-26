//
//   Codeforces - A. Johny Likes Numbers
//   https://codeforces.com/problemset/problem/678/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    cout << ((n/k) + 1)*k << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}