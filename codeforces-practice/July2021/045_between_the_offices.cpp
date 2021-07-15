//
//   Codeforces - A. Between the Offices
//   https://codeforces.com/problemset/problem/867/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int SF = 0, FS = 0;
    for(int i = 0; i < n - 1; i++) {
    	if(s[i] == 'S' && s[i+1] == 'F') {
    		SF++;
    	}

    	if(s[i] == 'F' && s[i+1] == 'S') {
    		FS++;
    	}
    }

    cout << (SF > FS ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
