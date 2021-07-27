//
//   Codeforces - A. Bear and Game
//   https://codeforces.com/problemset/problem/673/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int t[105];

    t[0] = 0;
    for(int i = 1; i <=n; ++i) {
    	cin >> t[i];
    }
    t[n+1] = 91;

    for(int i = 1; i <= n+1; ++i) {
    	if(t[i] > t[i-1] + 15) {
    		cout << t[i-1] + 15;
    		return;
    	}
    }

    cout << 90 << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}