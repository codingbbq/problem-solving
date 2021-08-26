//
//   Codeforces - A. DZY Loves Hash
//   https://codeforces.com/problemset/problem/447/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int p, n;
    cin >> p >> n;

    map<int, bool> hash;
    for(int i = 0; i < n; i++) {
    	int x;
    	cin >> x;

    	if(hash[x%p]) {
    		cout << i+1;
    		return;
    	} else {
    		hash[x%p] = true;
    	}
    }

    cout << -1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}