//
//   Codeforces - A. In-game Chat
//   https://codeforces.com/problemset/problem/1411/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n;
    	cin >> n;

    	string s;
    	cin >> s;
    	bool bad = true;
    	for(int i = n - 1; i >= 0; i--) {

    		if(s[i] != ')' && (n - 1 - i) <= n - (n - 1 - i)) {
    			bad = false;
    			break;
    		}
    	}

    	if(bad) {
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