//
//   Codeforces - A. Right-Left Cipher
//   https://codeforces.com/problemset/problem/1085/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string t;
    cin >> t;

    int n = t.size();
    int mid = 0;
    if(n%2 == 0) {
    	mid = (n/2) - 1;
    } else {
    	mid = ((n + 1)/2) - 1;
    }

    bool r = false;
    bool l = false;
    int rI = mid + 1, lI = mid - 1;
    
    while(n--) {

    	// Just to print mid element
    	if(!r && !l) {
    		cout << t[mid];
    		r = true;
    		continue;
    	}

    	// Start with right
    	if(r) {
    		cout << t[rI];
    		r = false; l = true;
    		rI = rI + 1;
    		continue;
    	}

    	// Print left
    	if(l) {
    		cout << t[lI];
    		l = false; r = true;
    		lI = lI - 1;
    		continue;
    	}
    	
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}