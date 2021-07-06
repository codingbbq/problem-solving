//
//   Codeforces - A. QAQ
//   https://codeforces.com/problemset/problem/894/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int ans = 0;

    for(int i = 0; i < s.size(); i++) {
    	for(int j = i+1; j < s.size(); j++) {
    		for(int k = j+1; k < s.size(); k++) {

    			if(s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q') {
    				ans++;
    			}

    		}
    	}
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}