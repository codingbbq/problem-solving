//
//   Codeforces - B. Honest Coach
//   https://codeforces.com/problemset/problem/1360/B
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {

    	int n;
    	cin >> n;
    	vector<int> x(n);

    	for(int i = 0; i < n; i++) {
    		cin >> x[i];
    	}

    	sort(x.begin(), x.end());

    	int diff = INT_MAX;

    	for(int i = 0; i < n - 1; i++) {
    		if(abs(x[i] - x[i+1]) <= diff) {
    			diff = abs(x[i] - x[i+1]);
    		}
    	}

    	cout << diff << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}