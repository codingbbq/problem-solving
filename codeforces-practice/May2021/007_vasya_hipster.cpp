// https://codeforces.com/problemset/problem/581/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int r, b;
    cin >> r >> b;
    int sum = 0;
    // Find all mix.
    while(r > 0 && b > 0) {
        r--;
        b--;
        sum++;
    }
    cout << sum << " ";
    if(r > 0) {
        cout << r/2;
    } else if(b > 0) {
        cout << b/2;
    } else {
        cout << '0';
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