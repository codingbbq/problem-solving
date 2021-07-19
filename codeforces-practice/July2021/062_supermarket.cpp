//
//   Codeforces - A. Supermarket
//   https://codeforces.com/problemset/problem/919/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    double x = INT_MAX;
   	for(int i = 0; i < n; i++) {
   		double a, b;
   		cin >> a >> b;
   		if(a/b < x) {
   			x = a/b;
   		}
   	}

   	cout << setprecision(9) << x*m << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}