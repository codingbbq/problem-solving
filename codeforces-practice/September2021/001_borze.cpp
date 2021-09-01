//
//   Codeforces - B. Borze
//   https://codeforces.com/problemset/problem/32/B
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    string seq;
	bool dash = false;

    for(int i = 0; i < s.size(); i++) {

    	// Previous char was a dash
    	if(dash) {
    		if(s[i] == '.') {
    			seq += '1';
    		} else if(s[i] == '-') {
    			seq += '2';
    		}
    		dash = false;
    		continue;
    	}

    	if(s[i] == '-') {
    		dash = true;
    		continue;
    	}

    	if(s[i] == '.') {
    		seq += '0';
    	}
    }

    cout << seq << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}