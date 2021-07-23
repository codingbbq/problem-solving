//
//   Codeforces - A. Snowball
//   https://codeforces.com/problemset/problem/1099/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int w, h;
    cin >> w >> h;

    int u1, d1;
    cin >> u1 >> d1;

    int u2, d2;
    cin >> u2 >> d2;

    for(int i = h; i > 0; i--) {
    	w += i;
    	if(i == d1) {
    		w = (w - u1 < 0 ? 0 : w - u1);
    	}

    	if(i == d2) {
    		w = (w - u2 < 0 ? 0 : w - u2);
    	}
    }

    cout << w << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}