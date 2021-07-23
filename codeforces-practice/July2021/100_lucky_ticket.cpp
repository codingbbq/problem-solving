//
//   Codeforces - A. Lucky Ticket
//   https://codeforces.com/problemset/problem/146/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int s1 = 0;
    int s2 = 0;

    bool possible = false;

    for(int i = 0; i < n; i++) {
    	if(s[i] != '4' && s[i] != '7') {
    		break;
    	}

    	if(i < n/2) {
    		s1 += s[i];
    	} else {
    		s2 += s[i];
    	}
    }

    if(s1 == s2 && s1 > 0) {
    	possible = true;
    }

    cout << (possible ? "YES" : "NO");
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}