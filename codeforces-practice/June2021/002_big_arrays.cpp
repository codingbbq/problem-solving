//
//   Codeforces - A. Eshag Loves Big Arrays
//   https://codeforces.com/problemset/problem/1529/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<int, int> m;
        int x;
        for(int i = 0; i < n; i++) {
            cin >> x;
            m[x]++;
        }

        cout << n - m.begin()->second << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}