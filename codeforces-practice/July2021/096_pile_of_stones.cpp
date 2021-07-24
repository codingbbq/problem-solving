//
//   Codeforces - A. A pile of stones
//   https://codeforces.com/problemset/problem/1159/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int total = 0;
    for(int i = 0; i < n; i++) {
    	if(total > 0 && s[i] == '-') {
    		total--;
    	} else if(s[i] == '+') {
    		total++;
    	}
    }

    cout << total << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}