//
//   Codeforces - A. Crazy Computer
//   https://codeforces.com/problemset/problem/716/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, c;
    cin >> n >> c;

    int count = 0;
    int t[n];
    for(int i = 0; i < n; i++) {
    	cin >> t[i];

    	// Check for the first word
    	if(i == 0) {
    		if(t[i] - 0 <= c) {
    			count++;
    		} else {
    			count = 1;
    		}
    	} else {
    		if(t[i] - t[i-1] <= c) {
    			count++;
    		} else {
    			count = 1;
    		}
    	}
    }

    cout << count << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}