//
//   Codeforces - A. Cupboards
//   https://codeforces.com/problemset/problem/248/A
//


// We want to have left door in one state and right door in one state.
// No need to compare left instead, both can be compared independently.

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int leftOpen = 0, rightOpen = 0;
   	for(int i = 0; i < n; i++) {

   		int l, r;
    	cin >> l >> r;

    	if(l == 1) {
    		leftOpen++;
    	}

    	if(r == 1) {
    		rightOpen++;
    	}

   	}

    int t = 0;
    if(leftOpen > (n - leftOpen)) {
    	t += (n - leftOpen);
    } else { 
    	t += leftOpen;
    }

    if(rightOpen > (n - rightOpen)) {
    	t += (n - rightOpen);
    } else {
    	t += rightOpen;
    }

	cout << t << "\n";

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}