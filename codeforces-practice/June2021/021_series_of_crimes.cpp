//
//   Codeforces - A. Series of Crimes
//   https://codeforces.com/problemset/problem/181/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    char a[n+1][m+1];

    int x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0, x4 = 0, y4 = 0;

    for(int i = 1; i <= n; i++) {
    	for(int j = 1; j <= m; j++) {
    		cin >> a[i][j];
    		if(a[i][j] == '*') {
    			if(x1 == 0) {
    				x1 = i;
    				y1 = j;
    			} else if(x2 == 0) {
    				x2 = i;
    				y2 = j;
    			} else if(x3 == 0) {
    				x3 = i;
    				y3 = j;
    			}
    		}
    	}

   }

   if(x1 == x3) {
		x4 = x2;
	} else if(x2 == x3) {
		x4 = x1;
	} else {
		x4 = x3;
	}

	if(y1 == y3) {
		y4 = y2;
	} else if(y2 == y3) {
		y4 = y1;
	} else {
		y4 = y3;
	}

	cout << x4 << " " << y4 << "\n";

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}