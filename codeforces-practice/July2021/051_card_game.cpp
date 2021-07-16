//
//   Codeforces - A. Card Game
//   https://codeforces.com/problemset/problem/1270/A
//

// I think finding which player has the maximum value card will decided 
// who wins the game.

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k1, k2;
    cin >> n >> k1 >> k2;

    int maxCard = 0;
    int maxPlayer = 0;
    for(int i = 0; i < k1; i++) {
    	int x;
    	cin >> x;
    	
    	if(x > maxCard) {
    		maxCard = x;
    		maxPlayer = 1;
    	}
    }

    for(int j = 0; j < k2; j++) {
    	int y;
    	cin >> y;

    	if(y > maxCard) {
    		maxCard = y;
    		maxPlayer = 2;
    	}
    }

    cout << (maxPlayer == 1 ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc = 1;
    cin >> tc;

    while(tc--) {
    	solve();	
    }
    return 0;
}