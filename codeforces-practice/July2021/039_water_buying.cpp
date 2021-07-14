//
//   Codeforces - A. Water Buying
//   https://codeforces.com/problemset/problem/1118/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
   
   int q;
   cin >> q;

   while(q--) {

	long long n, a, b;
	cin >> n >> a >> b;

	if(n%2 == 0) {
		cout << min(n*a, (n/2)*b);
	} else {
		cout << min(n*a, (n/2)*b + a);
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