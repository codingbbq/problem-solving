//
//   Codeforces - A. Divide it!
//   https://codeforces.com/problemset/problem/1176/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	long long x;
    	cin >> x;

    	int total = 0;
    	while(x >= 1) {

    		if(x%2 == 0) {
    			total++;
    			x = x/2;
    		} else if(x%3==0) {
    			total++;
    			x = (2*x)/3;
    		} else if(x%5==0) {
    			total++;
    			x = (4*x)/5;
    		} else {
    			break;
    		}

    	}

    	cout << (x == 1 ? total : -1) << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}