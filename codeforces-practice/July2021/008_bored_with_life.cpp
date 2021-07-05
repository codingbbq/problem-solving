//
//   Codeforces - A. I'm bored with life
//   https://codeforces.com/problemset/problem/822/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    int res = 1;
    for(int i = 1; i <= min(a, b); i++) {
    	res *= i;
    }

    cout << res << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}