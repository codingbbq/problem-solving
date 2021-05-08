//
//   Codeforces - A. Repeating Cipher
//   https://codeforces.com/problemset/problem/1095/A
//

// ooopppssssttttt
// 013610

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int prev = 0;
    for(int i = 1; i <= n; i++) {
        if(prev >= n) {
            break;
        }
        cout << s[prev];
        prev = i + prev;
    }
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