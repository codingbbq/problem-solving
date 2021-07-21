//
//   Codeforces - A. Vitaly and Night
//   https://codeforces.com/problemset/problem/595/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    int on = 0;

    while(n--) {
    	int a[2*m];
    	for(int i = 0; i < 2*m; i++) {
    		cin >> a[i];

    		if(i%2 != 0) {
    			if(a[i] == 1 || a[i-1] == 1) {
    				on++;
    			}
    		}
    	}
    }

    cout << on << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}