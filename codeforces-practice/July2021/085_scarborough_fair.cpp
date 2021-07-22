//
//   Codeforces - A. Scarborough Fair
//   https://codeforces.com/problemset/problem/897/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    for(int i = 0; i < m; i++) {
    	int l, r;
    	char c1, c2;
    	cin >> l >> r >> c1 >> c2;

    	for(int i = l - 1; i < r; i++) {
    		if(s[i] == c1) {
    			s[i] = c2;
    		}
    	}
    }

    cout << s << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}