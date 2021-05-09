//
//   Codeforces - A Frog Jumping
//   https://codeforces.com/problemset/problem/1077/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while(T--) {
        long long a, b, k;
        cin >> a >> b >> k;

        if(a == b and k%2 == 0) {
            cout << 0 << "\n";
        } else if(a == b and k%2 != 0) {
            cout << a << "\n";
        } else {
            cout << a * (k - k/2) - b * int(k/2) << "\n";
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