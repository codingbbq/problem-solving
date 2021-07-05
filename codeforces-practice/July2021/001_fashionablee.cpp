//
//   Codeforces - A. FashionabLee
//   https://codeforces.com/problemset/problem/1369/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	long long n;
    	cin >> n;
    	if(n%4 == 0) {
    		cout << "YES" << "\n";
    	} else {
    		cout << "NO" << "\n";
    	}
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}