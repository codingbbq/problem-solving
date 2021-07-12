//
//   Codeforces - A. Pens and Pencils
//   https://codeforces.com/problemset/problem/1244/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int a, b, c, d, k;
    	cin >> a >> b >> c >> d >> k;

    	int x, y;
    	if(c > a) {
    		x = 1;
    	} else {
    		if(a%c == 0) {
    			x = a/c;
    		} else {
    			x = a/c + 1;
    		}
    	}

    	if(d > b) {
    		y = 1;
    	} else {
    		if(b%d == 0) {
    			y = b/d;
    		}else {
    			y = b/d + 1;
    		}
    	}

    	if(x + y > k) {
    		cout << -1 << "\n";
    	} else {
    		cout << x << " " << y << "\n";
    	}
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}