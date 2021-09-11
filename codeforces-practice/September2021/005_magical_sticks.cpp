//
//   Codeforces - A. Magical Sticks
//   https://codeforces.com/problemset/problem/1371/A
//

// Lets say n = 4, then we have {1, 2, 3, 4}, so we can always do {1+4, 2+3}
// this we get two sticks of length 5 each.
// Lets say n = 3, then we have {1, 2, 3}, so we can do {1+2, 3} or {1+3, 2} 
// and get 2 sticks
// So for even it will be n/2 and for odd it will be (n+1)/2


#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n;
    	cin >> n;

    	if(n%2 == 0) {
    		cout << n/2 << "\n";
    	} else {
    		cout << (n+1)/2 << "\n";
    	}
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}