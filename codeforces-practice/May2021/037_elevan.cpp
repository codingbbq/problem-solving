//
//   Codeforces - A. Eleven
//   https://codeforces.com/problemset/problem/918/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    
    // Pre fill all the characters as small 'o';
    for(int i = 0; i < n; i++) {
        s += 'o';
    }
    
    int x = 1, y = 1, temp;
    
    while (y <= n) {
        temp = y;
        s[y-1] = 'O';
        y = x + y;
        x = temp;
    }
    cout << s << "\n";

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