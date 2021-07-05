//
//   Codeforces - A. Epic Game
//   https://codeforces.com/problemset/problem/119/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, n;
    cin >> a >> b >> n;

    int i = 1;
    char looser;
    while(n>=0) {
    	
    	if(i % 2 != 0) {
    		// a turn;
    		if(n - __gcd(a, n) >= 0) {
    			n = n - __gcd(a, n);
    		} else {
    			looser = 'a';
    			break;
    		}

    	} else {
    		// b turn;
    		if(n - __gcd(b, n) >= 0) {
    			n = n - __gcd(b, n);
    		} else {
    			looser = 'b';
    			break;
    		}

    	}
    	i++;
    }

    if(looser == 'a') {
    	// simon lost
    	cout << 1 << "\n";
    } else {
    	// simon won
    	cout << 0 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}