//
//   Codeforces - A. Favorite Sequence
//   https://codeforces.com/problemset/problem/1462/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n;
    	cin >> n;

    	vector<int> a(n);

    	for(int i = 0; i < n; i++) {
    		cin >> a[i];
    	}

    	int left = 0;
    	int right = n-1;
    	for(int i = 0; i < n; i++) {
    		if(i%2 == 0) {
    			cout << a[left] << " ";
    			left++;
    		} else {
    			cout << a[right] << " ";
    			right--;
    		}
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