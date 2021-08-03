//
//   Codeforces - B. CopyCopyCopyCopyCopy
//   https://codeforces.com/problemset/problem/1325/B
//

// Find all the unique elements in the array. This will form the longest increasing subsequence.

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n;
    	cin >> n;

    	set<int> a;

    	for(int i = 0; i < n; i++) {
    		int x;
    		cin >> x;
    		a.insert(x);
    	}

    	cout << a.size() << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}