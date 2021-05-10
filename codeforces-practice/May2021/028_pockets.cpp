//
//   Codeforces - A. Polycarp's Pockets
//   https://codeforces.com/problemset/problem/1003/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> coin;
    int max = 0;
    for(int i = 0; i < n; i++) {
        int c;
        cin >> c;
        if(coin.count(c) > 0) {
            coin[c] = coin[c] + 1;
        } else {
            coin[c] = 1;
        }
        if(coin[c] > max) {
            max = coin[c];
        }
    }
    cout << max;
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