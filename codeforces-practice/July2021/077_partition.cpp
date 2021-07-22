//
//   Codeforces - A. Partition
//   https://codeforces.com/problemset/problem/946/A
//

// Group all positive numbers to b and all negative numbers to c

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int b = 0, c = 0;

    for(int i = 0; i < n; i++) {
    	int x;
    	cin >> x;
    	if(x >= 0) {
    		b+= x;
    	} else {
    		c+= x;
    	}
    }

    cout << b - c << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}