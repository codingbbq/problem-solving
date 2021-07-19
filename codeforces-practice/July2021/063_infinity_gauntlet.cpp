//
//   Codeforces - A. Infinity Gauntlet
//   https://codeforces.com/problemset/problem/987/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    map<string, pair<int, string>> g; // color : <count, gem>

    g["purple"] = make_pair(0, "Power");
    g["green"] = make_pair(0, "Time");
    g["blue"] = make_pair(0, "Space");
    g["orange"] = make_pair(0, "Soul");
    g["red"] = make_pair(0, "Reality");
    g["yellow"] = make_pair(0, "Mind");

    for(int i = 0; i < n; i++) {
    	string s;
    	cin >> s;
    	g[s].first = 1;
    }

    cout << 6 - n << "\n";

    for(const auto &a : g) {
    	if(a.second.first == 0) {
    		cout << a.second.second << "\n";
    	}
    }

 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}