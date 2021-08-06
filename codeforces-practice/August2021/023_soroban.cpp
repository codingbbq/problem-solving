//
//   Codeforces - A. Soroban
//   https://codeforces.com/problemset/problem/363/A
//

#include <bits/stdc++.h>
using namespace std;

string soroban(int x) {
	string s[] = {"O-|-OOOO", "O-|O-OOO", "O-|OO-OO", "O-|OOO-O", "O-|OOOO-", "-O|-OOOO", "-O|O-OOO", "-O|OO-OO", "-O|OOO-O", "-O|OOOO-"};
	return s[x];
}

void solve() {
    int n;
    cin >> n;

    if(n > 0) {
	    while(n > 0) {
	    	int x = n%10;
	    	n /= 10;
	    	cout << soroban(x) << "\n";
	    }	
    } else {
    	cout << soroban(n) << "\n";
    }
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}