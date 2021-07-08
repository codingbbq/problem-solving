//
//   Codeforces - A. Game Shopping
//   https://codeforces.com/problemset/problem/1009/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n); // cost of each game
    vector<int> c(m); // Bils with Maxim

    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }

    for(int j = 0; j < m; j++) {
    	cin >> c[j];
    }

    int curBill = 0;
    int game = 0;

    for(int i = 0; i < n; i++) {
    	if(c[curBill] >= a[i]) {
    		game++;
    		curBill++;
    	}

    	// Maxim does not have any more bills

    	// We are checking on the index and hence m-1
    	if(curBill > m - 1) {
    		 break;
    	}
    }

    cout << game << "\n";


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}