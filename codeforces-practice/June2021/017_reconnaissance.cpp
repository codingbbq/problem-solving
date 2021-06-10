//
//   Codeforces - A. Reconnaissance
//   https://codeforces.com/problemset/problem/32/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, d;
    cin >> n >> d;
    vector<int> x(n);
    for(int i = 0; i < n; i++) {
        cin >> x[i];
    }

    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(abs(x[i] - x[j]) <= d) {
                count += 2;
            }
        }
    }

    cout << count << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}