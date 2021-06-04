//
//   Codeforces - A. Suffix Three
//   https://codeforces.com/problemset/problem/1281/A
//   ## I checked only for the last character

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--) {
        string l;
        cin >> l;

        int s = l.size();
        if(l[s-1] == 'o') {
            cout << "FILIPINO";
        } else if (l[s-1] == 'u') {
            cout << "JAPANESE";
        } else if(l[s-1] == 'a') {
            cout << "KOREAN";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}