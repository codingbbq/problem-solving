//
//   Codeforces - A. Love Triangle
//   https://codeforces.com/problemset/problem/939/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 1; i <= n; i++) {
    	cin >> a[i];
    }

    bool found = false;
    for(int i = 1; i <= n; i++) {
    	if(i == a[a[a[i]]]) {
    		found = true;
    		break;
    	}
    }

    cout << (found ? "YES" : "NO") << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}