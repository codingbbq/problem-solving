//
//   Codeforces - A. Two Rival Students
//   https://codeforces.com/problemset/problem/1257/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n, x, a, b;
    	cin >> n >> x >> a >> b;

    	// The greatest distance can be n-1
    	// If it is less than n-1 then perform swap

    	cout << min(n-1, abs(a - b) + x) << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}