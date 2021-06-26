//
//   Codeforces - A. Omkar and Password
//   https://codeforces.com/problemset/problem/1392/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    
    while(t--) {
		int n;
    	cin >> n;

    	vector<int> v(n);

    	for(int i = 0; i < n; i++) {
    		cin >> v[i];
    	}

    	sort(v.begin(), v.end());

    	if(v.front() == v.back()) {
    		cout << n << "\n";
    	} else {
    		cout << 1 << "\n";
    	}
    	
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}