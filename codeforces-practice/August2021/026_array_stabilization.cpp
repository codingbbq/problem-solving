//
//   Codeforces - B. Array Stabilization
//   https://codeforces.com/problemset/problem/1095/B
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }

    sort(a.begin(), a.end());

    cout << min(a[n-2] - a[0], a[n - 1] - a[1]) << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}