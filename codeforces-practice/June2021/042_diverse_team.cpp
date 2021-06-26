//
//   Codeforces - A. Diverse Team
//   https://codeforces.com/problemset/problem/988/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    map<int, int> team;

    for(int i = 1; i <= n; i++) {
    	int x;
    	cin >> x;
    	if(team.count(x) != 1) {
    		team.insert({x, i});
    	}
    }

    if(team.size() < k) {
    	cout << "NO" << "\n";
    } else {
    	cout << "YES" << "\n";
    	int u = 1;
    	for(auto &a : team) {
    		cout << a.second << " ";
    		if(u == k) {
    			return;
    		}
    		u++;
    	}
	}


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}