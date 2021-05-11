// https://codeforces.com/problemset/problem/1304/A
// Incomplete solution.
// Need to check test case 0 1 2 1

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while(T--) {
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        if((y - x) % (a + b) == 0) {
            cout << (y - x) / (a + b) << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
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