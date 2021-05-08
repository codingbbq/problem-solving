//
//   Codeforces - A. System of Equations
//   https://codeforces.com/problemset/problem/214/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int ans = 0;
    for(int i = 0; i <= 1000; i++) {
        if(n - (i*i) == sqrt(m - i)) {
            ans++;
        }
    }
    cout << ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    #ifndef ONLINE_JUDGE
        freopen("../../input-output/input.txt", "r", stdin);
        freopen("../../input-output/output.txt", "w", stdout);
    #endif

    solve();
    return 0;
}