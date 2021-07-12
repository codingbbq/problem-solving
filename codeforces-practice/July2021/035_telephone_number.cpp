//
//   Codeforces - A. Telephone Number
//   https://codeforces.com/problemset/problem/1167/A
//

// You can delete any number of characters
// 8 should always begin and the total size should be exactly 11 

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

    	bool possible = false;
    	if(n >= 11) {

    		// Check for first x characters
    		int x = n - 11;

    		while(x >= 0) {
    			if(s[x] == '8') {
    				possible = true;
    			}
    			x--;
    		}
    		
    	}

    	cout << (possible ? "YES" : "NO") << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}