//
//   Codeforces - A. Add Odd or Subtract Even
//   https://codeforces.com/problemset/problem/1311/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int a, b;
    	cin >> a >> b;

    	if(a == b) {
    		cout << 0 << "\n";
    	} else {
    		
    		if(a > b) {
    			if((a - b) % 2 == 0) {
    				cout << 1 << "\n";
    			} else {
    				cout << 2 << "\n";
    			}
    		} else {
    			if((b - a) % 2 == 0) {
    				cout << 2 << "\n";
    			} else {
    				cout << 1 << "\n";
    			}
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