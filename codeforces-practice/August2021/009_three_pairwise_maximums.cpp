//
//   Codeforces - A. Three Pairwise Maximums
//   https://codeforces.com/problemset/problem/1385/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	
    	vector<int> a(3);
    	for(auto &it : a) {
    		cin >> it;
    	}

    	sort(a.begin(), a.end());

    	if(a[1] != a[2]) {
    		cout << "NO" << "\n";
    	} else {
    		cout << "YES" << "\n" << a[0] << " " << a[0] << " " << a[1] << "\n";
    	}

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}