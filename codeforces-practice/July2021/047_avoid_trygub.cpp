//
//   Codeforces - A. Avoid Trygub
//   https://codeforces.com/problemset/problem/1450/A
//

// Swap all "y" from the entire string and putting them at the start of the 
// string so that trygrub substring cannot be formed.

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n;
    	cin >> n;

    	string s;
    	cin >> s;

    	int swapCount = 0;
    	for(int i = 0; i < n; i++) {
    		if(s[i] == 'y') {
    			swap(s[swapCount], s[i]);
    			swapCount++;
    		}
    	}

    	cout << s << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}