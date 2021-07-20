//
//   Codeforces - A. Chips
//   https://codeforces.com/problemset/problem/92/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    // For one entire round. Need t chips
    int t = (n*(n+1))/2;

    // Total rounds that can be made
    int rounds = m/t;

    // For last round
    int remain = m - (t*rounds);

    // cout << t << ":" << rounds << ":" << remain << "\n";

    for(int i = 1; i <= n; i++) {
    	if(remain >= i){
    		remain = remain - i;
    	} else {
    		cout << remain;
    		break;
    	}
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}