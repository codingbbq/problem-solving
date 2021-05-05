// https://codeforces.com/problemset/problem/1304/A
// Incomplete solution.
// Need to check test case 0 1 2 1

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while(T--) {
        int x, y, a, b, jump = 0;
        cin >> x >> y >> a >> b;
        while(y >= 0){
            if(x == y) {
                cout << jump << "\n";
                break;
            }
            if(x > y) {
                cout << -1 << "\n";
                break;
            }
            jump += 1;
            x += a;
            y -= b;
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