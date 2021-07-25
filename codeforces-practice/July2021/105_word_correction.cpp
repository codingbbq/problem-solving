//
//   Codeforces - A. Word Correction
//   https://codeforces.com/problemset/problem/938/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    // cout << s << "\n";

    map<char, bool> v = { {'a', true}, {'e', true}, {'i', true}, {'o', true}, {'u', true}, {'y', true } };

    string x;

    bool add = true;
    x+= s[0];
    for(int i = 1; i < n; i++) {
    	if(v[s[i-1]] == true && v[s[i]] == true) {
    		add = false;
    		continue;
    	} else {
    		add = true;
    	}

    	if(add) {
    		x+= s[i];	
    	}
    }

    cout << x << "\n";

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}