//
//   Codeforces - A. A Good Contest
//   https://codeforces.com/problemset/problem/681/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    bool possible = false;
    while(n--) {
    	string s;
    	int before, after;
    	cin >> s >> before >> after;

    	if(before >= 2400 && before < after) {
    		possible = true;
    		break;
    	}
    }

    cout << (possible ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}