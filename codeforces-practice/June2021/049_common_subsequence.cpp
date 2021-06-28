//
//   Codeforces - A. Common Subsequence
//   https://codeforces.com/problemset/problem/1382/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n, m;
    	cin >> n >> m;

    	map<int, int> a;
    	map<int, int> b;

    	for(int i = 1; i <= n; i++) {
    		int x;
    		cin >> x;
    		a.insert({x, a[x] ? a[x] + 1: 1});
    	}

    	for(int j = 1; j <= m; j++) {
    		int y;
    		cin >> y;
    		b.insert({y, b[y] ? b[y] + 1: 1});
    	}


    	// Search

    	bool found = false;
    	int item = -1;
    	for(auto const &y : a) {
    		// cout << y.first << " ";
    		if(b.count(y.first)) {
    			found = true;
    			item = y.first;
    			break;
    		}
    	}

    	if(found) {
    		cout << "YES" << "\n";
    		cout << 1 << " " << item << "\n";
    	} else {
    		cout << "NO" << "\n";
    	}

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}