//
//   Codeforces - F. Data Center
//   https://codeforces.com/problemset/problem/1250/F
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int perimeter = INT_MAX;
    for(int i = 1; i <= sqrt(n); i++) {
    	if(n%i == 0) {
    		perimeter = min(perimeter, 2*(i + n/i));
    	}
    }

    cout << perimeter << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}