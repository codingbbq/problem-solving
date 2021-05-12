//
//   Codeforces - A. Red and Blue Beans
//   https://codeforces.com/problemset/problem/1519/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while(T--) {
        long long r, b, d;
        cin >> r >> b >> d;
        if ( b < r) {
            swap(b, r);
        }
        if( b > r*(d+1)) {
            cout << "NO" << "\n";
        } else {
            cout << "YES" << "\n";
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