//
//   Codeforces - A. Perfectly Imperfect Array
//   https://codeforces.com/problemset/problem/1514/A
//

#include <bits/stdc++.h>
using namespace std;

// Store all the squares upto 10^4
#define MX 10000

void solve() {

	bool sq[MX+5];

	for(int i = 1; i*i <= MX; i++) {
		sq[i*i] = 1;
	}

    int t;
    cin >> t;

    

    while(t--) {
    	int n;
    	cin >> n;
    	bool ok = 1;
    	while(n--) {
    		int a;
    		cin >> a;
    		ok&=sq[a];
    	}

    	cout << (ok ? "NO" : "YES")<< "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}