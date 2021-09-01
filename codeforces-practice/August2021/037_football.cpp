//
//   Codeforces - A. Football
//   https://codeforces.com/problemset/problem/96/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    char prev;
    int cnt = 0;
    bool possible = false;
    for(int i = 0; i < s.size(); i++) {
    	if(i == 0) {
    		prev = s[i];
    		cnt++;
    	} else {
    		if(s[i] == prev) {
    			cnt++;
    		} else {
    			prev = s[i];
    			cnt = 1;
    		}
    	}

    	if(cnt >= 7) {
    		possible = true;
    		break;
    	}
    }

    cout << (possible ? "YES" : "NO") << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}