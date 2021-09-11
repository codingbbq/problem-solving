//
//   Codeforces - A. Fafa and his Company
//   https://codeforces.com/problemset/problem/935/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int count = 1;
    for(int i = 2; i <= n/2; i++) {
    	if((n-i)%i == 0) {
    		count++;
    	}
    }

    cout << count << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}