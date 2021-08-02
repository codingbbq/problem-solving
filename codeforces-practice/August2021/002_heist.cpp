//
//   Codeforces - A. Heist
//   https://codeforces.com/problemset/problem/1041/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }

    sort(a.begin(), a.end());

    long long stolen = 0;

    for(int i = 1; i < n; i++) {
    	stolen += a[i] - a[i-1] - 1;
    }

    cout << stolen;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}