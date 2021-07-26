//
//   Codeforces - A. Triangular numbers
//   https://codeforces.com/problemset/problem/47/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    for(int i = 1; i <= 500; i++) {
    	if(i*(i+1)/2 == n) {
    		cout << "YES";
    		return;
    	}
    }

    cout << "NO";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}