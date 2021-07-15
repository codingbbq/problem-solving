//
//   Codeforces - A. K-th Largest Value
//   https://codeforces.com/problemset/problem/1491/A
//

// Calling the sort function when t = 2 will cause TLE.
// Since the array contains only 1's and 0's, 
// we can keep a count of 1's based on t = 1 change.

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n);

    int oneCount = 0;
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    	if(a[i] == 1) {
    		oneCount++;
    	}
    }

    while(q--) {
    	int t, x;
    	cin >> t >> x;

    	if(t == 1) {
    		if(a[x-1] == 1) {
    			oneCount--;
    		}

    		a[x-1] = 1 - a[x-1];

    		if(a[x-1] == 1) {
    			oneCount++;
    		}
    	}

    	if(t == 2) {

    		if(x <= oneCount) {
    			cout << 1 << "\n";
    		} else {
    			cout << 0 << "\n";
    		}
    		
    	}
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}