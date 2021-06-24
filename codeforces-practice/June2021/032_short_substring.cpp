//
//   Codeforces - A. Short Substrings
//   https://codeforces.com/problemset/problem/1367/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	string b;
    	cin >> b;

    	cout << b[0];
    	for(int i = 1; i <= b.length() - 2; i=i+2) {
    		cout << b[i];
    	}
    	cout << b[b.length() - 1];
    	cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}