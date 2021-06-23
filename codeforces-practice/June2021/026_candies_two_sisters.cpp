//
//   Codeforces - A. Candies and Two Sisters
//   https://codeforces.com/problemset/problem/1335/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
	
   	int n;
	cin >> n;
	if(n <= 2) {
		cout << 0 << "\n";
		return;
	}

	// 
	if(n%2 == 0) {
		cout << n/2 - 1;
	} else {
		cout << n/2;
	}

	cout << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	solve();
    }
    
    return 0;
}