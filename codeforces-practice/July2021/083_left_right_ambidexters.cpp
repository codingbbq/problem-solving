//
//   Codeforces - A. Left-handers, Right-handers and Ambidexters
//   https://codeforces.com/problemset/problem/950/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l, r, a;
    cin >> l >> r >> a;

    int minimum = l > r ? r : l;
    int maximum = l > r ? l : r;

    int diff = maximum - minimum;


    if(diff == 0) {
    	// If both left and right are equal
    	// Distribute ambidexters
    	maximum += a/2;
    	minimum += a/2;
    } else {

    	if(a >= diff) {
    		minimum += diff;
    		a -= diff;
    		minimum += a/2;
    		maximum += a/2;
    	} else {
    		minimum += a;
    	}
    }

    cout << minimum*2 << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}