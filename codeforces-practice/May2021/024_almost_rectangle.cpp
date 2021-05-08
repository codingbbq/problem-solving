//
//   Codeforces - B. Almost Rectangle
//   https://codeforces.com/problemset/problem/1512/B
//

// TODO

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while(T--) {
        map<int, int> co;
        int n;
        cin >> n;
        char a[n][n];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> a[i][j];
                if(a[i][j] == '*') {
                    co.insert({i, j});
                }
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