//
//   Codeforces - A. Stone Game
//   https://codeforces.com/problemset/problem/1538/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n;
    	cin >> n;

    	int a[n];

    	pair<int, int> least = {0, 101};
    	pair<int, int> greatest = {0, 0};
    	for(int i = 0; i < n; i++) {
    		cin >> a[i];

    		// Check for least 
    		if(a[i] < least.second) {
    			least.first = i;
    			least.second = a[i];
    		}

    		// Check for greatest
    		if(a[i] > greatest.second) {
    			greatest.first = i;
    			greatest.second = a[i];
    		}

    	}

    	// There are three combinations.
    	// Delete both from left
    	// Delete both from right
    	// Delete one from left and then from right or vice versa

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}