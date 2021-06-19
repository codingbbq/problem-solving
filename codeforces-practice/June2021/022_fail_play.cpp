//
//   Codeforces - A. Fair Playoff
//   https://codeforces.com/problemset/problem/1535/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	
    	int s1, s2, s3, s4;
    	cin >> s1 >> s2 >> s3 >> s4;

    	if(s1 < s2) {
    		swap(s1, s2);
    	}

    	if(s3 < s4) {
    		swap(s3, s4);
    	}

    	if(s1 < s4 || s3 < s2) {
    		cout << "NO" << "\n";
    	} else {
    		cout << "YES" << "\n";
    	}

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}