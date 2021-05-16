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
        int n, i = 0;
        while(++i) {
            n = b*i;
            if(n >= a) {
                cout << n - a << "\n";
                break;
            }
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