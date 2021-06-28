//
//   Codeforces - A. Minimal Square
//   https://codeforces.com/problemset/problem/1360/A
//

#include <bits/stdc++.h>
using namespace std;

int square(int x) {
	return x*x;
}

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int a, b;
    	cin >> a >> b;

    	if(b <= a) {
    		swap(a, b);
    	}

    	// a is smaller side than b

    	if(a == b) {
    		cout << square(2*a);
    	} else {
    		if(2*a >= b) {
    			cout << square(2*a);
    		} else {
    			cout << square(b);
    		}
    	}

    	cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}