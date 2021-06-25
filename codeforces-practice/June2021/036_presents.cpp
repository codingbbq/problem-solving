//
//   Codeforces - A. Presents
//   https://codeforces.com/problemset/problem/136/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    map<int, int> a;

    for(int i = 1; i <= n; i++) {
    	int x;
    	cin >> x;
    	a.insert(pair<int, int>(x, i));
    }

    for(int i = 1; i <=n; i++) {
    	cout << a[i] << " ";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}