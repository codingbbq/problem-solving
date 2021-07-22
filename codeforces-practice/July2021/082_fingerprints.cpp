//
//   Codeforces - A. Fingerprints
//   https://codeforces.com/problemset/problem/994/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> x(n);
    vector<int> y(m);

    for(int i = 0; i < n; i++) {
    	cin >> x[i];
    }

    for(int i = 0; i < m; i++) {
    	cin >> y[i];
    }

    vector<int> a;
    for(int i = 0; i < m; i++) {
    	for(int j = 0; j < n; j++) {
    		if(y[i] == x[j]) {
    			// cout << j << " ";
    			a.push_back(j);
    			break;
    		}
    	}
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < a.size(); i++) {
    	cout << x[a[i]] << " ";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}