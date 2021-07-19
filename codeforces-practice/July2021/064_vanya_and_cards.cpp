//
//   Codeforces - A. Vanya and Cards
//   https://codeforces.com/problemset/problem/401/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    int a[n];

    int sum = 0;
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    	sum += a[i];
    }

    if(abs(sum - 0)%x == 0) {
    	cout << abs(sum - 0)/x;
    } else {
    	cout << (abs(sum - 0)/x) + 1;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}