//
//   Codeforces - A. Buying A House
//   https://codeforces.com/problemset/problem/796/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n);

    int distance = INT_MAX;
    for(int i = 0; i < n; i++) {
    	cin >> a[i];

    	if(i != (m - 1) && a[i] > 0 && a[i] <= k) {
    		// Zane the wizard can purchase the house
    		distance = min(distance, (abs(i - (m - 1))*10));
    	}
    }

    cout << distance << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}