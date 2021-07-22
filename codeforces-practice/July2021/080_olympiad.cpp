//
//   Codeforces - A. Olympiad
//   https://codeforces.com/problemset/problem/937/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    set<int> s;

    for(int i = 0; i < n; i++) {
    	int x;
    	cin >> x;

    	if(x != 0) {
    		s.insert(x);
    	}
    }

    cout << s.size() << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}