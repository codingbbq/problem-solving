//
//   Codeforces - A. Text Volume
//   https://codeforces.com/problemset/problem/837/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    getchar();
    getline(cin >> ws, s);

    int maximum = 0;
    int vol = 0;

    // cout << s << "\n";
    for(int i = 0; i < n; i++) {

    	if(isupper(s[i])) {
    		vol++;
    	}

    	if(s[i] == ' ') {
    		vol = 0;
    	}

    	maximum = max(vol, maximum);
		
    }

    cout << maximum << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}