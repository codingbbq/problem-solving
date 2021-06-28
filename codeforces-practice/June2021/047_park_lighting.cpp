//
//   Codeforces - A. Park Lighting
//   https://codeforces.com/problemset/problem/1358/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n, m;
    	cin >> n >> m;

    	int total = n * m;

    	if(total % 2 == 0) {
    		cout << total/2;
    	} else {
    		cout << total/2 + 1;
    	}

    	cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}