//
//   Codeforces - A. Space Navigation
//   https://codeforces.com/problemset/problem/1481/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int x, y;
    	cin >> x >> y;

    	string s;
    	cin >> s;

    	// loop through the string and find count.
    	int R = 0, U = 0, L = 0, D = 0;
    	for(int i = 0; i < s.size(); i++) {
    		switch(s[i]) {
    			case 'R':
    			R++;
    			break;
    			case 'U':
    			U++;
    			break;
    			case 'L':
    			L++;
    			break;
    			case 'D':
    			D++;
    			break;
    		}
    	}

    	// x > 0 and y > 0
    	// cout << "x" << x << "y" << y << "R" << R << "U" << U << "L" << L << "D" << D << "\n"; 
    	if((x >= 0 && y >= 0 && R >= x && U >= y) || 
    	(x >= 0 && y <= 0 && R >= x && D >= -y) ||
    	(x <= 0 && y <= 0 && L >= -x && D >= -y) ||
    	(x <= 0 && y >= 0 && L >= -x && U >= y)) {
    		cout << "YES" << "\n";
    	} else{
    		cout << "NO" << "\n";
    	}

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}