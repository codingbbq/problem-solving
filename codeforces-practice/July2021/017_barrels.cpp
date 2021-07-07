//
//   Codeforces - B. Barrels
//   https://codeforces.com/problemset/problem/1430/B
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n, k;
    	cin >> n >> k;

    	vector<long long> a(n);

    	for(int i = 0; i < n; i++) {
    		cin >> a[i];
    	}

    	sort(a.begin(), a.end(), greater<int>());

    	for(int i = 0; i < k; i++) {
    		// cout << a[i] << " " << a[i+1] << " ";
    		a[i+1] = a[i+1] + a[i];
    		
    	}

    	cout << a[k] << "\n";

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}