//
//   Codeforces - A. Wet Shark and Odd and Even
//   https://codeforces.com/problemset/problem/621/A
//

// Keep track of the smallest odd number
// If the sum is not even, then remove from sum the smallest odd number. This 
// will maximize the even sum.

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    long long total = 0;

    long long odd = INT_MAX;

    for(int i = 0; i < n; i++) {
    	int x;
    	cin >> x;
    	total += x;

    	// check for the smallest odd number
    	if(x % 2 != 0 && x < odd) {
    		odd = x;
    	}
    }

   	cout << (total % 2 == 0 ? total : (total - odd)) << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}