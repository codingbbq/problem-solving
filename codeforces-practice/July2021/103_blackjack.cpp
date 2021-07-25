//
//   Codeforces - A. Blackjack
//   https://codeforces.com/problemset/problem/104/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int required = n - 10;

    if(n <= 10 || required > 11) {
    	cout << 0 << "\n";
    } else {

    	if(required == 10) {
    		cout << 15 << "\n";
    	} else {
    		cout << 4 << "\n";
    	}

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}