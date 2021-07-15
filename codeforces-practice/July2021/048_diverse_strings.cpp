//
//   Codeforces - A. Diverse Strings
//   https://codeforces.com/problemset/problem/1144/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    while(n--) {
    	string s;
    	cin >> s;

    	 vector<int> a = {};

    	for(int i = 0; i < s.length(); i++) {
			a.push_back((int)s[i]);
    	}

    	sort(a.begin(), a.end());

    	bool possible = true;
    	for(int i = 1; i < a.size(); i++) {
    		if(a[i] - a[i-1] != 1) {
    			possible = false;
    		}
    	}

    	cout << (possible ? "YES\n" : "NO\n");
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}