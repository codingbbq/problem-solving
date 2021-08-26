//
//   Codeforces - A. Three Piles of Candies
//   https://codeforces.com/problemset/problem/1196/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	long long a, b, c;
    	cin >> a >> b >> c;

    	cout << (a+b+c)/2 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}