//
//   Codeforces - A. Array Rearrangment
//   https://codeforces.com/problemset/problem/1445/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n, x;
    	cin >> n >> x;

    	vector<int> a(n);
    	vector<int> b(n);

    	for(int i = 0; i < n; i++) {
    		cin >> a[i];
    	}

    	sort(a.begin(), a.end(), greater<int>());

    	for(int i = 0; i < n; i++) {
    		cin >> b[i];
    	}

    	sort(b.begin(), b.end());

    	bool possible = true;
    	for(int i = 0; i < n; i++) {
    		if(a[i] + b[i] > x) {
    			possible = false;
    			break;
    		}
    	}

    	cout << (possible ? "YES" : "NO") << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}