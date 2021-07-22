//
//   Codeforces - A. Andryusha and Socks
//   https://codeforces.com/problemset/problem/780/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    map<int, int> s;

    int maxtime = 0;
    int cnt = 0;

    for(int i = 0; i < 2*n; i++) {

    	int x;
    	cin >> x;

    	if(s[x] == 0) {
    		s[x]++;
    		cnt++;

    	} else if(s[x] != 0) {
    		cnt--;
    		s[x]--; 
    	}

    	maxtime = max(maxtime, cnt);

    }

    cout << maxtime << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}