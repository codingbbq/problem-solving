//
//   Codeforces - A. Holiday Of Equality
//   https://codeforces.com/problemset/problem/758/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];

    int highest = 0;
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    	if(highest < a[i]) {
    		highest = a[i];
    	}
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
    	sum += highest - a[i];
    }

    cout << sum << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}