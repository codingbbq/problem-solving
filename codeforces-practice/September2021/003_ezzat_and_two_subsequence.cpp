//
//   Codeforces - A. Ezzat and Two Subsequences
//   https://codeforces.com/problemset/problem/1557/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;


    while(t--) {
    	double high = INT_MIN;
    	double lowSum = 0;
		
		double n;
		cin >> n;

		for(int i = 0; i < n; i++) {
			double x;
			cin >> x;

			high = max(high, x);
			lowSum += x;

		}

		cout << setprecision(9) << (double)(high + (lowSum - high)/(n-1)) << "\n";	
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}