//
//   Codeforces - A. Three Strings
//   https://codeforces.com/problemset/problem/1301/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	string a, b, c;
    	cin >> a;
    	cin >> b;
    	cin >> c;

    	int possible = 0; // possible count
    	for(int i = 0; i < a.size(); i++) {
    		if(c[i] == a[i] || c[i] == b[i]) {
    			possible++;
    		}
    	}

    	if(possible == a.size()) {
    		cout << "YES" << "\n";
    	} else {
    		cout << "NO" << "\n";
    	}
    	
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}