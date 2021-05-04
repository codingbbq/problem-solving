// https://codeforces.com/problemset/problem/1283/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    int h, m, total = 0;
    while(T--) {
        cin >> h >> m;
        total = (24*60) - (h*60 + m);
        cout << total << "\n";
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