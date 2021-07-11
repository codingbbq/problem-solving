//
//   Codeforces - A. Omkar and Completion
//   https://codeforces.com/problemset/problem/1372/A
//

// This was interesting problem. Since x, y, z can be same, 
// we can always have all the elements of array just a common number like 1.
// So If you add any of the two numbers, it will always satisfy the ax + ay != az
// also all elements (all 1's) are less than 1000

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n;
    	cin >> n;

    	for(int i = 0; i < n; i++) {
    		cout << 1 << " ";
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