//
//   Codeforces - A. Sereja and Mugs
//   https://codeforces.com/problemset/problem/426/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;

    int total = 0;
    int M = 0;
    bool possible = true;
    for(int i = 0; i < n; i++) {
    	int x;
    	cin >> x;
    	M = max(M, x);
    	total += x;
    	
    	if(total - M > s) {
    		possible = false;
    		break;
    	}
    }

    cout << (possible ? "YES" : "NO") << "\n";


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}