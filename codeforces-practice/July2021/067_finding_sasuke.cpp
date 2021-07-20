//
//   Codeforces - A. Finding Sasuke
//   https://codeforces.com/problemset/problem/1413/A
//


// Given array 		a1 	a2 a3  a4 a5  a6
// Required array 	a2 -a1 a4 -a3 a6 -a5

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n;
    	cin >> n;
    	int a[n];

    	for(int i = 0; i < n; i++) {
    		cin >> a[i];
    	}

    	for(int j = 0; j < n; j++) {
    		if(j%2 == 0 && j < n) {
    			cout << a[j+1] * (-1);
    		}else {
    			cout << a[j - 1];
    		}
    		cout << " ";
    	}
    	cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}