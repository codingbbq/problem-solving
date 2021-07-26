//
//   Codeforces - A. Prime Minister
//   https://codeforces.com/problemset/problem/1178/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> p(n);
    vector<int> o;

    int totalSeats = 0;
    int aliceSeats = 0;

    for(int i = 0; i < n; i++) {
    	cin >> p[i];
    	totalSeats+= p[i];

    	if(i == 0) {
    		// Alice's party
    		o.push_back(i+1);
    		aliceSeats += p[0];
    	} else {
    		if(p[0] >= 2*p[i]) {
    			o.push_back(i+1);
    			aliceSeats += p[i];
    		}
    	}

    }

    if(aliceSeats > totalSeats/2) {
    	cout << o.size() << "\n";
    	for(int i = 0; i < o.size(); i++) {
    		cout << o[i] << " ";
    	}
    } else {
    	cout << 0 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}