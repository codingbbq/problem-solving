//
//   Codeforces - A. Minimum Binary Number
//   https://codeforces.com/problemset/problem/976/A
//

// The answer will always be 1 followed by all the zeroes in the string.

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    // Case when the input string is just a single 0;
    if(s == "0") {
    	cout << '0' << "\n";
    } else {
    	
    	// Since a string cannot lead with zero, it will have atleast one '1'
    	// If there are multiple '1's then they get merged into single '1', eventually
    	// there will be just single '1' at the start of the output
    	cout << "1";
	    for(int i = 0; i < n; i++) {
	    	if(s[i] == '0') {
	    		cout << "0";
	    	}
	    }



    }

    




}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}