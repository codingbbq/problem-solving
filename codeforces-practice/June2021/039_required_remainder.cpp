//
//   Codeforces - A. Required Remainder
//   https://codeforces.com/problemset/problem/1374/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int x, y, n;
    	cin >> x >> y >> n;

    	if(n - n % x + y <= n) {
    		cout << n - n % x + y;
    	} else {
    		cout << n - n % x - (x - y);
    	}
    	cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}