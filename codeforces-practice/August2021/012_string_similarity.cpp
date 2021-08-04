//
//   Codeforces - A. String Similarity
//   https://codeforces.com/problemset/problem/1400/A
//

// Print every other character of the string;

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {

    	int n;
    	cin >> n;

    	string s;
    	cin >> s;

    	for(int i = 0; i < s.size(); i+=2) {
    		cout << s[i];
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