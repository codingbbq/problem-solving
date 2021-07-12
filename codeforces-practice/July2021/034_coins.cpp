//
//   Codeforces - A. Coins
//   https://codeforces.com/problemset/problem/1061/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;
    if(n > s) {
    	cout << s << "\n"; 
    } else {
   		cout << ((s%n == 0) ? s/n : s/n + 1) << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}