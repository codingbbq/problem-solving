//
//   Codeforces - A. Find Square
//   https://codeforces.com/problemset/problem/1028/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    char x[n][m];

    int x1, y1; // Store the first occurrence of "B"
    int l = 0; // To find length of consecutive "B"
    bool out = false; // Helper to exit for loop

    for(int i = 0; i < n; i++) {
    	for(int j = 0; j < m; j++) {
    		cin >> x[i][j];

    		if(x[i][j] == 'B') {
    			l++;

    			// Only store the first occurrence of "B"
    			if(l == 1) {
    				x1 = i + 1; y1 = j + 1;
    			}
    		} else if(l > 0 && x[i][j] == 'W') {
    			out = true;
    		}
    	}

    	// If in the row, we find B, no need to traverse any further.
    	if(l > 0 || out) {
    		break;
    	}
    }

    // Since square is of odd length and we want to find the mid point
    cout << (x1 + x1 + l)/2 << " " << (y1 + y1 + l)/2 << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}