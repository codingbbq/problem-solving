//
//   Codeforces - A. Grade Allocation
//   https://codeforces.com/problemset/problem/1316/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while(t--) {

    	int n, m;
	    cin >> n >> m;

	    int a[n];

    	// my marks are at a[0]

	    // Total marks
	    int total = 0;

	    for(int i = 0; i < n; i++) {
	    	cin >> a[i];

	    	if(i != 0) {
	    		total += a[i]; 
	    	}

	    }

	    // Check if I do not already have maximum marks.
	    if(a[0] < m) {

		    if(total < m) {
		    	a[0] = a[0] + min(abs(a[0] - m), total);
		    } else {
		    	a[0] = m;
		    }

	    }


	    cout << a[0] << "\n";

    }
    

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}