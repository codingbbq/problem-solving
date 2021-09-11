//
//   Codeforces - A. Boring Apartments
//   https://codeforces.com/problemset/problem/1433/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    // Pre process all the boring apartments.
    vector<int> p;

    for(int j = 1; j <= 9; j++) {
    	int s = 0;
	    for(int i = 0; i < 4; i++) {
	    	s = (s * 10) + 1;
	    	p.push_back(j*s);
	    }
    }


    while(t--) {

    	int x;
    	cin >> x;

    	int sum = 0;
    	for(int i = 0; i < p.size(); i++) {
    		sum += to_string(p[i]).size();
	    	if(p[i] == x ) {
	    		break;
	    	}
	    }

	    cout << sum << "\n";

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
