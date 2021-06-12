//
//   Codeforces - A. Dubstep
//   https://codeforces.com/problemset/problem/208/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;


    for(int i = 0; i < s.size(); i++) {

        if(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            i+=2;
            cout << " ";
            continue;
        } else {
            cout << s[i];
        }

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}