//
//   Codeforces - A. Maximum Square
//   https://codeforces.com/problemset/problem/1243/A
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

    	sort(a.begin(), a.end(), greater<int>());

    	int cnt = 0;
    	for(int i = 0; i < n; i++) {
    		// cout << a[i] << ":" << cnt << "\n";
    		if(a[i] <= cnt) {
    			break;
    		} else {
    			cnt++;
    		}
    		

    	}

    	cout << cnt << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}