//
//   Codeforces - A. Spy Detected!
//   https://codeforces.com/problemset/problem/1512/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];

        map<int, pair<int, int>> spy;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            if(spy.count(a[i])) {
                spy[a[i]] = make_pair(spy[a[i]].first +=1, i);
            } else {
                spy[a[i]] = make_pair(1, i);
            }
        }

        for(int i = 0; i < spy.size(); i++) {
            if(spy[i].first == 1) {
                cout << spy[i].second << "\n";
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}