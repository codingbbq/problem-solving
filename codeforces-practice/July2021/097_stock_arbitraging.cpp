//
//   Codeforces - A. Stock Arbitraging
//   https://codeforces.com/problemset/problem/1150/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, r;
    cin >> n >> m >> r;

    vector<int> buy(n);
    vector<int> sell(m);

    for(int i = 0; i < n; i++) {
    	cin >> buy[i];
    }

    sort(buy.begin(), buy.end());

    for(int i = 0; i < m; i++) {
    	cin >> sell[i];
    }

    sort(sell.begin(), sell.end(), greater<int>());

    if(buy[0] >= sell[0]) {
    	// No need to buy anything
    	cout << r << "\n";

    } else {

    	// Let's buy
    	int qty = 0;
	    // Buy all the shares that has the lowest price.
	    qty = r/buy[0];

	    // Remained bourles
	    r = r - (qty*buy[0]);

	    // Let's sell
	    int sold = 0;
	    // Sell all the shares with highest price to get max profit
	    sold += sell[0]*qty;

	    cout << r + sold << "\n";

    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}