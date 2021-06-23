//
//   Codeforces - A. Insomnia cure
//   https://codeforces.com/problemset/problem/148/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int harmed = 0;
    for(int i = 1; i<= d; i++) {
    	if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0) {
    		harmed++;
    	}
    }

    cout << harmed;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}