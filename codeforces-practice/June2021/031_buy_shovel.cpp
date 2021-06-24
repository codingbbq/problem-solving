//
//   Codeforces - A. Buy a Shovel
//   https://codeforces.com/problemset/problem/732/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k, r;
    cin >> k >> r;

    int i = 1;
    while(true) {
    
    	if((i*k) % 10 == 0 || ((i*k) % 10) - r == 0) {
    		cout << i << "\n";
    		return;
    	}

    	i++;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}