//
//   CSES - Increasing Array
//   https://cses.fi/problemset/task/1094
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    int count = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i == 0) {
            continue;
        }

        if(a[i] < a[i-1]) {
            count += a[i-1] - a[i];
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