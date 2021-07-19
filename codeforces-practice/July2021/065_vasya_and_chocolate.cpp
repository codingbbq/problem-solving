//
//   Codeforces - A. Vasya and Chocolate
//   https://codeforces.com/problemset/problem/1065/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	long long s, a, b, c;
    	cin >> s >> a >> b >> c;
    	long long total = s/c;

    	if(total > a) {
    		total += (total/a) * b;
    	}

    	cout << total << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}