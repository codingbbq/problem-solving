//
//   Codeforces - A. Equalize Prices Again
//   https://codeforces.com/problemset/problem/1234/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int q;
    cin >> q;

    while(q--) {
    	int n;
    	cin >> n;
    	int sum = 0;

    	int a[n];
    	for(int i = 0; i < n; i++) {
    		cin >> a[i];
    		sum += a[i];
    	}

    	int price = 0;
    	price = (sum % n) ? sum / n + 1 : sum / n;

    	cout << price << "\n";

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}