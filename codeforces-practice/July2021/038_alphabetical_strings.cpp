//
//   Codeforces - B. Alphabetical Strings
//   https://codeforces.com/problemset/problem/1547/B
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	string s;
    	cin >> s;

    	int n = s.length();
    	int L = -1, R = -1;
    	// Find the index of 'a'
    	for(int i = 0; i < n; i++) {
    		if(s[i] == 'a') {
    			L = R = i;
    		}
    	}

    	bool possible = false;
    	// Loop through the string and check the left and right character

    	// If size of string is 1 and it is 'a'
    	if(n == 1 && (L == 0 || R == 0)) {
    		possible = true;
    	} else {

    		// Loop through the strings. 
    		// For two char string, we need to use R >= 0 since the 
    		// first char can be a, for eg. "ab"

    		for(int i = 1; i < n; i++) {
	    		if(L > 0 && s[L-1] == 'a' + i) {
	    			L--;
	    			possible = true;
	    		} else if(R >= 0 && s[R+1] == 'a' + i) {
	    			R++;
	    			possible = true;
	    		} else {
	    			possible = false;
	    			break;
	    		}
	    	}

    	}

    	cout << (possible ? "YES\n" : "NO\n");
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}