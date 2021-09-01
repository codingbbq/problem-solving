//
//   Codeforces - A. Polycarp and Coins
//   https://codeforces.com/problemset/problem/1551/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	long long n;
    	cin >> n;

    	int c1 = n/3;
    	int c2 = n/3;

    	if(n%3 == 1) {
    		c1 = c2 + 1;
    	} else if(n%3 == 2) {
    		c2 = c1 + 1;
    	}

    	cout << c1 << " " << c2 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}