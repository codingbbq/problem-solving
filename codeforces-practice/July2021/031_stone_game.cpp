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

    	int t1 = 0;
    	// There are three combinations.
    	// Delete both from left
    	if(least.first < greatest.first) {
    		t1 = (least.first - 0) + 1 + (greatest.first - least.first);
    	} else {
    		t1 = (greatest.first - 0) + 1 + (least.first - greatest.first);
    	}

    	// Delete both from right
    	if(greatest.first > least.first) {
    		t1 = min(t1, ((n - greatest.first) + (greatest.first - least.first)));
    	} else {
    		t1 = min(t1, ((n - least.first) + (least.first - greatest.first)));
    	}

    	// Delete one from left and then from right or vice versa
    	
    	// When least is on left and greatest on right
    	t1 = min(t1, (least.first - 0) + 1 + (n - greatest.first));

    	// When greatest is on left and least on right
    	t1 = min(t1, (greatest.first - 0) + 1 + (n - least.first));

    	cout << t1 << "\n";


    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}