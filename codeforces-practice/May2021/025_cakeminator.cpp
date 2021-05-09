//
//   Codeforces - A. Cakeminator
//   https://codeforces.com/problemset/problem/330/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int r, c;
    cin >> r >> c;
    char a[r][c];
    set<int> rows;
    set<int> cols;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> a[i][j];
            if(a[i][j] == 'S') {
                rows.insert(i);
                cols.insert(j);
            }
        }
    }

    cout << (r*c) - (rows.size() * cols.size());
    
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