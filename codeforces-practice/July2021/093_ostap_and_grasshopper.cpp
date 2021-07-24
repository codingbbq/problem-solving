//
//   Codeforces - A. Ostap and Grasshopper
//   https://codeforces.com/problemset/problem/735/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int g = 0;
    for(int i = 0; i < n; i++) {
    	if(s[i] == 'G') {
    		g = i;
    		break;
    	}
    }

    bool possible = false;

    // Traverse to the right;
    for(int i = g; i < n; i = i+k) {
    	if(s[i] == '#') {
    		possible = false;
    		break;
    	}

    	if(s[i] == '.') {
    		continue;
    	}

    	if(s[i] == 'T') {
    		possible = true;
    		break;
    	}
    }

    // If we have already found the target when traversing to the right,
    // no need to traverse towards left
    if(!possible) {

    	for(int i = g; i >=0; i = i - k) {

    		if(s[i] == '#') {
	    		possible = false;
	    		break;
	    	}

	    	if(s[i] == '.') {
	    		continue;
	    	}

	    	if(s[i] == 'T') {
	    		possible = true;
	    		break;
	    	}

    	}

    } // if

    cout << (possible ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}