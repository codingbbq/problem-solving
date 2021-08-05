//
//   Codeforces - A. Adjacent Replacements
//   https://codeforces.com/problemset/problem/1006/A
//

// Check if the number in the array is even. If even then replace itself with number - 1
// If the number is odd, no need to make any changes.

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
    	cin >> a[i];

    	if(a[i]%2 == 0) {
    		a[i] = a[i]-1;
    	}

    	cout << a[i] << " ";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}