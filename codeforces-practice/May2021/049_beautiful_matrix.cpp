//
//   Codeforces - A. Beautiful Matrix
//   https://codeforces.com/problemset/problem/263/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a[5][5];
    int x, y;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++) {
            cin >> a[i][j];
            if(a[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }

    cout << abs(x - 3) + abs(y - 3) << "\n";
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