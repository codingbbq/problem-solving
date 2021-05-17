//
//   Codeforces - A. Maximum in Table
//   https://codeforces.com/problemset/problem/509/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 or j == 0) {
                a[i][j] = 1;
            } else {
                a[i][j] = a[i-1][j] + a[i][j-1];
            }
        }
    }
    cout << a[n-1][n-1] << "\n";
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