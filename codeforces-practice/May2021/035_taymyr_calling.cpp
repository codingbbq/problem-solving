//
//   Codeforces - A. Taymyr is calling you
//   https://codeforces.com/problemset/problem/764/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, z;
    cin >> n >> m >> z;
    int killed = 0, nTimes = n;
    while(nTimes <= z) {
        if(nTimes % m == 0) {
            killed+=1;
        }
        nTimes += n;
    }
    cout << killed;
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