//
//   Codeforces - A. Robot Program
//   https://codeforces.com/problemset/problem/1452/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    // if x == y, then total steps = 2*x
    // else total steps = max(2*x, 2*y) - 1

    int T;
    cin >> T;
    
    while(T--) {
        int x, y;
        cin >> x >> y;
        if(x == y) {
            cout << 2*x << "\n";
        } else  {
            cout << max(2*x, 2*y) - 1 << "\n";
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