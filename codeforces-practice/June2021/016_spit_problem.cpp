//
//   Codeforces - A. Spit Problem
//   https://codeforces.com/problemset/problem/29/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> s;
    while(n--) {
        int x, d;
        cin >> x >> d;
        s.insert({x, d});
    }

    for(auto i: s) {
        int y = i.first + i.second;
        if(s[y]) {
            if(y + s[y] == i.first) {
                cout << "YES" << "\n";
                return;
            }
        }
    }

    cout << "NO" << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}