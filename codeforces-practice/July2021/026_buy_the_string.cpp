//
//   Codeforces - A. Buy the String
//   https://codeforces.com/problemset/problem/1440/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n, c0, c1, h;
    	cin >> n >> c0 >> c1 >> h;

    	string s;
    	cin >> s;

    	int sum = 0;
    	for(int i = 0; i < n; i++) {

    		if(s[i] == '1') {
    			sum += min(c1, c0+h);
    		} else {
    			sum += min(c0, c1+h);
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