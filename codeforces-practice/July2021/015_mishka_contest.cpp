//
//   Codeforces - A. Mishka and Contest
//   https://codeforces.com/problemset/problem/999/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }

    int solved = 0;
    int solvedIndex = 0;

    for(int x = 0; x < n; x++) {
    	if(a[x] <= k) {
    		solved++;
    		solvedIndex = x;
    	} else {
    		break;
    	}
    }


    for(int y = n - 1; y > solvedIndex; y--) {
    	if(a[y] <= k) {
    		solved++;
    	} else {
    		break;
    	}
    }

    cout << solved << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}