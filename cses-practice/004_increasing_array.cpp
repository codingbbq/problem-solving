//
//   CSES - Increasing Array
//   https://cses.fi/problemset/task/1094
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    long long a[n];
    long long count = 0;
    long long mx = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
        
        if(a[i] < mx) {
            count += mx - a[i];
        }

    }

    cout << count;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}