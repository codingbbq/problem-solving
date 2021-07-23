//
//   Codeforces - A. New Password
//   https://codeforces.com/problemset/problem/770/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    int c = 0;
    while(n--) {
    	// cout << c << "\n";
    	s += 'a' + c;
    	c = (c < k - 1 ? c+1 : 0);
    }

    cout << s << "\n";
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}