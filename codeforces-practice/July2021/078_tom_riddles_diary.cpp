//
//   Codeforces - A. Tom Riddle's Diary
//   https://codeforces.com/problemset/problem/855/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    map<string, bool> p;

    while(n--) {
    	string s;
    	cin >> s;
    	if(p.count(s) == 0) {
    		cout << "NO" << "\n";
    		p[s] = true;
    	} else {
    		cout << "YES" << "\n";
    	}
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}