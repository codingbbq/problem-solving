//
//   Codeforces - A. Divisibility Problem
//   https://codeforces.com/problemset/problem/1328/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while(T--) {
        int a, b;
        cin >> a >> b;
        if(a % b == 0) {
            cout << 0 << "\n";
        } else {
            cout << (((a / b) + 1) * b) - a << "\n";
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