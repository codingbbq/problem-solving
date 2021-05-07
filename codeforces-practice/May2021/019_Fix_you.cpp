// https://codeforces.com/problemset/problem/1391/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while(T--) {
        int n, m;
        cin >> n >> m;
        char a[n][m];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if (a[i][m-1] == 'R') ans++;
        }

        for(int j = 0; j < m; j++) {
            if (a[n-1][j] == 'D') ans++;
        }

        cout << ans << "\n";
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