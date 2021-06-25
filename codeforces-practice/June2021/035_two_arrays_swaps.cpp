//
//   Codeforces - B. Two Arrays And Swaps
//   https://codeforces.com/problemset/problem/1353/B
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n, k;
    	cin >> n >> k;

    	vector<int> a(n);
    	vector<int> b(n);

    	for(int i = 0; i < n; i++) {
    		cin >> a[i];
    	}

    	sort(a.begin(), a.end());

    	for(int i = 0; i < n; i++) {
    		cin >> b[i];
    	}

    	sort(b.begin(), b.end(), greater<int>());

    	for(int i = 0; i < k; i++) {
    		if(a[i] < b[i]) {
    			a[i] = b[i];
    		}
    	}

    	int sum = 0;

    	for(int i = 0; i < n; i++) {
    		sum += a[i];
    	}

    	cout << sum << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}