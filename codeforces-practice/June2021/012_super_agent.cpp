//
//   Codeforces - A. Super Agent
//   https://codeforces.com/problemset/problem/12/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    char a[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i <= 1; i++) {
        for(int j = 0; j <= 2; j++) {

            // cout << "i:" << i << "j:" << j << "p:" << abs(2 - i) << "q:" << abs(2 - j) << "\n";

                if(a[i][j] != a[abs(2 - i)][abs(2 - j)]) {
                    
                    cout << "NO" << "\n";
                    return;
                }
            
        }
    }
    cout << "YES" << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}