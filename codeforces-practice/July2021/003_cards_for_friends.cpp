//
//   Codeforces - A. Cards for Friends
//   https://codeforces.com/problemset/problem/1472/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int w, h, n;
    	cin >> w >> h >> n;

    	int pieces = 1;

    	while(w%2 == 0) {
    		w /= 2;
    		pieces *= 2;
    	}

    	while(h%2 == 0) {
    		h /= 2;
    		pieces *= 2;
    	}

    	cout << (pieces >= n ? "YES" : "NO") << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}