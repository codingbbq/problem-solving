//
//   Codeforces - A. Got Any Grapes?
//   https://codeforces.com/problemset/problem/1114/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y, z;
    cin >> x >> y >> z;

    int a, b, c;
    cin >> a >> b >> c;

    bool distribute = false;
    if(x > a) {
    	distribute = false;
    } else {
    	// Remain green grapes.
    	a = a - x;

    	if(y > a+b) {
    		distribute = false;
    	} else {
    		c = c + ((a+b) - y);

    		if(z > c) {
    			distribute = false;
    		} else {
    			distribute = true;
    		}
    	}

    }

    cout << (distribute ? "YES" : "NO") << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}