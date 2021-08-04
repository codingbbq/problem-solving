//
//   Codeforces - B. Friends and Candies
//   https://codeforces.com/problemset/problem/1538/B
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
    	int total = 0;
    	for(int i = 0; i < n; i++) {
    		cin >> a[i];
    		total += a[i];
    	}

    	if(total%n == 0) {

    		int req = total/n;
    		int count = 0;
    		for(int i = 0; i < n; i++) {
    			if(a[i] > req) {
    				count++;
    			}
    		}

    		cout << count << "\n";

    	} else {
    		cout << -1 << "\n";
    	}
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}