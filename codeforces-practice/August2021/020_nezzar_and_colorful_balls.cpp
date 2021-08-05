//
//   Codeforces - A. Nezzar and Colorful Balls
//   https://codeforces.com/problemset/problem/1478/A
//

// Use a map data structure to keep track of frequency of the ball type.

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n;
    	cin >> n;

    	map<int, int> ball;

    	for(int i = 0; i < n; i++) {
    		int x;
    		cin >> x;

    		ball[x]++;
    	}

    	int color = 0;
    	for(const auto &x : ball) {
    		color = max(color, x.second);
    	}

    	cout << color << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}