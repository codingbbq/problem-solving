//
//   Codeforces - A. Maximum Increase
//   https://codeforces.com/problemset/problem/702/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);

    int inc = 1;
    int maxinc = 0;

    for(int i = 0; i < n; i++) {
    	cin >> a[i];

    	if(i > 0) {
    		if(a[i] > a[i-1]) {
    			inc++; 
    		} else {
    			inc = 1;
    		}
    	}

    	maxinc = max(maxinc, inc);

    }

    cout << maxinc << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}