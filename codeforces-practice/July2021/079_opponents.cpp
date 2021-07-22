//
//   Codeforces - A. Opponents
//   https://codeforces.com/problemset/problem/688/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, d;
    cin >> n >> d;

    int mdays = 0;
    int win = 0;

    while(d--) {
    	string o;
    	cin >> o;
    	bool arya = false;
    	for(int i = 0; i < n; i++) {
    		if(o[i] == '0') {
    			arya = true;
    			break;
    		}
    	}

    	if(arya == true) {
    		win++;
    		mdays = max(mdays, win);
    	} else {
    		win = 0;
    	}
    }

    cout << mdays << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}