//
//   Codeforces - A. Rounding
//   https://codeforces.com/problemset/problem/898/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int r = n%10;

    if(r == 0) {
    	cout << n << "\n";
    } else {

    	if(r <= 5) {
    		cout << n - r << "\n";
	    } else {
	    	cout << (10 - r) + n << "\n";
	    }

    }

    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}