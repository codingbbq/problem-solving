//
//   Codeforces - A. Book Reading
//   https://codeforces.com/problemset/problem/884/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, t;
    cin >> n >> t;
    long long a[n];
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        // cout << "i" << i << " a[i]: " << a[i] << " t" << t << "\n";
        t -= 86400 - a[i];
        if(t <= 0) {
            cout << i;
            return;
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