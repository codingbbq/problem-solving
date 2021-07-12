//
//   Codeforces - A. Phoenix and Gold
//   https://codeforces.com/problemset/problem/1515/A
//

// Test cases to consider
// 1. When the total weight of all the elements is equal to x
// 2. if you are using a temp variable like in below solution, make sure you 
// also print it if it is not equal to 0


#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n, x;
    	cin >> n >> x;

    	vector<int> a(n);

    	int presum = 0;
    	
    	for(int i = 0; i < n; i++) {
    		cin >> a[i];
    		presum += a[i];
    	}

    	if(presum == x) {
    		cout << "NO" << "\n";
    	} else {
    		cout << "YES" << "\n";
    		int sum = 0;
    		int temp = 0;

    		for(int i = 0; i < n; i++) {
    			
    			if(temp > 0 && sum + temp != x) {
    				cout << temp << " ";
    				sum += temp;
    				temp = 0; // reset temp
    			}
    			if(sum + a[i] != x) {
    				sum += a[i];
    				cout << a[i] << " ";
    			} else {
    				temp = a[i];
    			}
    		}

    		if(temp > 0) {
    			cout << temp;
    		}

    		cout << "\n";
    	}

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}