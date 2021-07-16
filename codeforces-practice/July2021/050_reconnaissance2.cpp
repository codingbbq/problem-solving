//
//   Codeforces - A. Reconnaissance 2
//   https://codeforces.com/problemset/problem/34/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int x1, x2;

    int minH = INT_MAX;

    for(int i = 0; i < n; i++) {
    	cin >> a[i];

    	if(i == 0) {
    		continue;
    	}

    	if(abs(a[i] - a[i-1]) <= minH) {
    		x1 = i + 1;
    		x2 = i;
    		minH = abs(a[i] - a[i - 1]);
    	}

    	if(i == n - 1) {
    		if(abs(a[i] - a[0]) <= minH) {
    			x1 = 1;
    			x2 = i + 1;
    			minH = abs(a[i] - a[0]);
    		}
    	}
    }

    cout << x1 << " " << x2;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}