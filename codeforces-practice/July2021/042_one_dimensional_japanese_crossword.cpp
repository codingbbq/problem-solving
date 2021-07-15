//
//   Codeforces - A. One-dimensional Japanese Crossword
//   https://codeforces.com/problemset/problem/721/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int freq = 0;
    vector<int> f;

    for(int i = 0; i < n; i++) {
    	if(s[i] == 'B') {
    		freq++;
    	} else if(s[i] == 'W') {
    		if(freq > 0) {
    			f.push_back(freq);
    			freq = 0;
    		}
    	}
    }

    if(freq > 0) {
    	f.push_back(freq);
    }

    cout << f.size() << "\n";
    
	for(const &x : f) {
		cout << x << " ";
	}

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}