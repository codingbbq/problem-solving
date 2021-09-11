//
//   Codeforces - A. Dislike of Threes
//   https://codeforces.com/problemset/problem/1560/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {

	// Since k <= 1000, we can pre compute and then store values
	// in vector and then return the index+1

	vector<int> preK;

	
	for(int i = 0; i <= 10000; i++) {
		if(i%3 == 0 || i%10 == 3) {
			continue;
		} else {
			// cout << i << " ";
			preK.push_back(i);
		}
	}

	int t;
	cin >> t;

	while(t--) {
		int k;
		cin >> k;

		cout << preK[k-1] << "\n";
	}

    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}