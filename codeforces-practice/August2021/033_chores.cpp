//
//   Codeforces - A. Chores
//   https://codeforces.com/problemset/problem/873/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, x;
    cin >> n >> k >> x;

    int time = 0;
    int chores = n - k;
    for(int i = 0; i < n; i++) {
    	int a;
    	cin >> a;

    	if(i >= chores) {
    		a = x;
    	}
    	time += a;
    }

    cout << time << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}