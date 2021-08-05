//
//   Codeforces - A. Cherry
//   https://codeforces.com/problemset/problem/1554/A
//

// Ans is maximum of product of two adjacent numbers

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n;
    	cin >> n;

    	vector<int> a(n);

    	for(int i = 0; i < n; i++) {
    		cin >> a[i];
    	}

    	long long ans = 0;

    	for(int i = 1; i < n; i++) {
    		ans = max(ans, 1ll * a[i]*a[i-1]);
    	}

    	cout << ans << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}