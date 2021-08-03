//
//   Codeforces - A. Replacing Elements
//   https://codeforces.com/problemset/problem/1473/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;


    while(t--) {
    	int n, d;
    	cin >> n >> d;

    	vector<int> a(n);

    	for(int i = 0; i < n; i++) {
    		cin >> a[i];
    	}

    	sort(a.begin(), a.end());

    	cout << (a.back() <= d || a[0] + a[1] <= d ? "YES" : "NO") << "\n";

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}