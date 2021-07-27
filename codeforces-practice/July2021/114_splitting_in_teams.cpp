//
//   Codeforces - A. Splitting in Teams
//   https://codeforces.com/problemset/problem/899/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int t = 0;
    int o = 0;
    
    for(int i = 0; i < n; i++) {
    	cin >> a[i];

    	if(a[i] == 1) {
    		o++;
    	}

    	if(a[i] == 2) {
    		t++;
    	}
    }


    int pairs = 0;
    if(o >= t) {
    	pairs = t + (o - t)/3;
    } else {
    	pairs = o;
    }

    cout << pairs;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}