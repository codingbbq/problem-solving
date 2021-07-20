//
//   Codeforces - A. Uniform String
//   https://codeforces.com/problemset/problem/1092/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n, k;
    	cin >> n >> k;

    	int i = 0;
    	while(n--) {
    		// cout << n << ":" << i << " ";
    		cout << (char)(i+97);
    		i++;
    		if(i >= k) {
    			i = 0;
    		}
    	}

    	cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}