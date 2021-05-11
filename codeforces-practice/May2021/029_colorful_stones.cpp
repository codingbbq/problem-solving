//
//   Codeforces - A. Colorful Stones (Simplified Edition)
//   https://codeforces.com/problemset/problem/265/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    string t;
    cin >> t;
    int ptr = 0;
    for(int i = 0; i < t.size(); i++) {
        if(t[i] == s[ptr]) {
            ptr+=1;
        }
    }
    cout << ptr + 1;
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