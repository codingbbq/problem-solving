//
//   Codeforces - A. Flag
//   https://codeforces.com/problemset/problem/16/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    char f[n+2][m+2];
    int temp = -1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> f[i][j];

            if(temp == -1) {
                temp = i;
            }
            if(f[temp][0] != f[i][j]) {
                cout << "NO";
                return;
            }

            if(i != 0) {
                if(f[i][j] == f[i-1][j]) {
                    cout << "NO";
                    return;
                }
            }
        }
        // reset temp
        temp = -1;
    }
    cout << "YES";
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