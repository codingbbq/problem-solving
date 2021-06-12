//
//   Codeforces - A. Little Elephant and Rozdil
//   https://codeforces.com/problemset/problem/205/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    int min = INT_MAX;
    int index = 0;
    int c = 0; // Minimum count;
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    	
    	if(a[i] < min) {
    		c = 0;
    		min = a[i];
    		index = i;
    		continue;
    	}

    	if(a[i] == min) {
    		c++;
    	}
    }

    if(c > 0) {
    	cout << "Still Rozdil" << "\n";
    } else {
    	cout << index + 1 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}