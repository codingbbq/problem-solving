//
//   Codeforces - A. Brain's Photos
//   https://codeforces.com/problemset/problem/707/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    char p[n][m];

    for(int i = 0; i < n; i++) {
    	for(int j = 0; j < m; j++) {
    		cin >> p[i][j];
    		
    		if(p[i][j] == 'C' || p[i][j] == 'M' || p[i][j] == 'Y') {
    			cout << "#Color" << "\n";
    			return;
    		}

    	}
    }

    cout << "#Black&White" << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}