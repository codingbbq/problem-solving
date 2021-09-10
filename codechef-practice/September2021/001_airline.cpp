//
//   CodeChef - Airline Restrictions
//   https://www.codechef.com/SEPT21C/problems/AIRLINE
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int A, B, C, D, E;
    	cin >> A >> B >> C >> D >> E;

    	int total = A + B + C;

    	if((total - A <= D && A <= E) || (total - B <= D && B <= E) || (total - C <= D && C <= E)) {
    		cout << "YES" << "\n";
    	} else {
    		cout << "NO" << "\n";
    	}
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}