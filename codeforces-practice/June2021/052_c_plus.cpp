//
//   Codeforces - A. C+=
//   https://codeforces.com/problemset/problem/1368/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
	int t;
	cin >> t;

	while(t--) {
	    int a, b, n;
	    cin >> a >> b >> n;

	    int op = 0;

	    while(true) {
	    	if(a < b) {
	    		a+=b;
	    	}else{
	    		b+=a;
	    	}

	    	op++;

	    	if(a > n || b > n) {
	    		break;
	    	}
	    }

	    cout << op << "\n";
	}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}