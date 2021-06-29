//
//   Codeforces - A. Phoenix and Balance
//   https://codeforces.com/problemset/problem/1348/A
//


// The value of 2^n is greater than all the values combined
// Smallest n/2 values + 2^n in one group and (n/2 + 1, n-1)
// in second group and then find the difference

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n;
    	cin >> n;

    	int big = (1<<n);
    	int small = 0;

    	for(int i = 1; i < n/2; i++) {
    		big+= (1<<i);
    	}

    	for(int j = n/2; j < n; j++) {
    		small+=(1<<j);
    	}

    	cout << big - small << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}