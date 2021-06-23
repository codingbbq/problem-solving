//
//   Codeforces - A. Remove Smallest
//   https://codeforces.com/problemset/problem/1399/A
//

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

    	sort(a.begin(), a.end());

    	bool possible = true;
    	for(int i = 1; i < a.size(); i++) {
    		if(abs(a[i] - a[i-1]) > 1) {
    			possible = false;
    			break;
    		}
    	}

    	if(possible) {
    		cout << "YES" << "\n";
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