//
//   Codeforces - B. Substring Removal Game
//   https://codeforces.com/problemset/problem/1398/B
//

// Both players want to remove 1 because that is where the point is. 
// No player will remove 0
// Find the blocks of all the 1's, sort them in increasing order and let Alice
// start deleting 1's as per her turn.

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	string s;
    	cin >> s;

    	vector<int> ones = {};
    	
    	int cnt = 0;
    	for(int i = 0; i < s.size(); i++) {
    		
    		if(s[i] == '1') {
    			cnt++;
    		} else if(s[i] == '0') {

    			if(cnt > 0) {
		    		ones.push_back(cnt);
		    	}

    			cnt = 0;
    		}
    	}

    	if(cnt > 0) {
    		ones.push_back(cnt);
    	}

    	sort(ones.begin(), ones.end(), greater<int>());

    	int total = 0;
    	for(int x = 0; x < ones.size(); x++) {

    		if(x%2 == 0) {
    			total+=ones[x];
    		}
    		
    	}

    	cout << total << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}