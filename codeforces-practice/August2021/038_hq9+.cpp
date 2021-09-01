//
//   Codeforces - A. HQ9+
//   https://codeforces.com/problemset/problem/133/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
    	if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
    		cout << "YES" << "\n";
    		return;
    	}
    }

    cout << "NO" << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}