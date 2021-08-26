//
//   Codeforces - A. Determine Line
//   https://codeforces.com/problemset/problem/1056/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> tram;
    for(int i = 0; i < n; i++) {
    	int r;
    	cin >> r;

    	for(int i = 0; i < r; i++) {
    		int x;
    		cin >> x;
    		tram[x]++;
    	}
    }

    for(const auto &a : tram) {
    	if(a.second == n) {
    		cout << a.first << " ";
    	}
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}