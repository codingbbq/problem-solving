//
//   Codeforces - A. A+B (Trial Problem)
//   https://codeforces.com/problemset/problem/1351/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while(T--) {
        long long a, b;
        cin >> a >> b;
        cout << a + b << "\n";
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