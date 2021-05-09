//
//   Codeforces - B. Almost Rectangle
//   https://codeforces.com/problemset/problem/1512/B
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while(T--) {
        vector<pair<int, int>> co;
        int n;
        cin >> n;
        char a[n][n];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> a[i][j];
                if(a[i][j] == '*') {
                    co.push_back(make_pair(i, j));
                }
            }
        }

        // Find the next two coordinates.
        if(co[0].first != co[1].first && co[0].second != co[1].second) {
            a[co[0].first][co[1].second] = '*';
            a[co[1].first][co[0].second] = '*';
        }

        // If the two coordinates are on same rows
        if(co[0].first == co[1].first) {
            if(co[0].first == n-1) {
                a[co[0].first - 1][co[0].second] = '*';
                a[co[1].first - 1][co[1].second] = '*';
            }else{
                a[co[0].first + 1][co[0].second] = '*';
                a[co[1].first + 1][co[1].second] = '*';
            }
        }

        // If the two coordinates are on same cols
        if(co[0].second == co[1].second) {
            if(co[0].second == n-1) {
                a[co[0].first][co[0].second - 1] = '*';
                a[co[1].first][co[1].second - 1] = '*';
            } else {
                a[co[0].first][co[0].second + 1] = '*';
                a[co[1].first][co[1].second + 1] = '*';
            }

        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << a[i][j];
            }
            cout << "\n";
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