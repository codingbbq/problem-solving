//
//   Codeforces - A. Memory and Crow
//   https://codeforces.com/problemset/problem/712/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
    	
    	if(i != n-1) {
    		cout << a[i] + a[i+1] << " ";	
    	} else{
    		cout << a[i];
    	}
    	

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}