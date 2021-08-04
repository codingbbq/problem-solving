//
//   Codeforces - A. Juggling Letters
//   https://codeforces.com/problemset/problem/1397/A
//

// Count the frequency of the letters and mod it with n. If the mod is greater than zero,
// than it is not possible to rearrange the strings to get equal strings.

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n;
    	cin >> n;

    	string q;
    	for(int i = 0; i < n; i++) {
    		string s;
    		cin >> s;
    		q+=s;
    	}

    	
		map<char, int> freq;
		for(int i = 0; i < q.size(); i++) {
			freq[q[i]]++;
		}

		
		bool possible = true;
		for(const auto &a : freq) {
			if(a.second%n != 0) {
				possible = false;
				break;
			}
		}

		cout << (possible ? "YES" : "NO") << "\n";
    	
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
