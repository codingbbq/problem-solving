//
//   Codeforces - A. Calculating Function
//   https://codeforces.com/problemset/problem/486/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    if(n%2 == 0) {
    	cout << n/2 << "\n";
    } else {
    	cout << (-1) * (n+1)/2 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}