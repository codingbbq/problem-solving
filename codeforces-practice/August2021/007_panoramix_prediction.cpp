//
//   Codeforces - A. Panoramix's Prediction
//   https://codeforces.com/problemset/problem/80/A
//

#include <bits/stdc++.h>
using namespace std;

bool is_Prime(int x) {
	bool result = true;
	if(x <= 1) {
		return false;
	} else if(x == 2) {
		return true;
	} else if((x & 1) == 0) {
		return false;
	}

	if(x >= 3) {
		for(int i = 3; (i*i) <= x; i = i + 2) {
			if(x%i == 0) {
				result = false;
				break;
			}
		}
	}

	return result;
}

void solve() {
    int n, m;
    cin >> n >> m;

    bool found = false;
    for(int i = n+1; i <= m; i++) {

    	// cout << i << " " << is_Prime(i) << "\n";
    	if(is_Prime(i)) {

    		if(i == m) {
    			found = true;
    		} else {
    			found = false;
    			break;
    		}
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