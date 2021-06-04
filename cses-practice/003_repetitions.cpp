//
//   CSES - Repetitions
//   https://cses.fi/problemset/task/1069
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int ans = 1, counter = 0;
    char x = 'A';
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == x) {
            counter++;
            ans = max(ans, counter);
        } else {
            x = s[i];
            counter = 1;
        }
    }

    cout << ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}