//
//   Codeforces - A. Love "A"
//   https://codeforces.com/problemset/problem/1146/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.length();

    int total = 0;

    for(int i = 0; i < n; i++) {
    	if(s[i] == 'a') {
    		total++;
    	}
    }

    cout << min(n, (2*total - 1));
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}