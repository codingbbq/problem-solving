//
//   Codeforces - A. Free Ice Cream
//   https://codeforces.com/problemset/problem/686/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    long long total = x;
    int distressed = 0;

    for(int i = 0; i < n; i++) {
    	char record;
    	int p;
    	cin >> record >> p;

    	if(record == '+') {
    		total += p;
    	}

    	if(record == '-') {
    		if(total >= p) {
    			total = total - p;
    		} else {
    			distressed++;
    		}
    	}
    }

    cout << total << " " << distressed;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}