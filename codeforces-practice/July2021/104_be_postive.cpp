//
//   Codeforces - A. Be Positive
//   https://codeforces.com/problemset/problem/1130/A
//

// we can assume that d = 1 is a good valid divisor
// We find count of postive integers in a such that count >= n/2

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);

    int positive = 0, negative = 0;
    for(int i = 0; i < n; i++) {
    	cin >> a[i];

    	if(a[i] > 0) {
    		positive++;
    	} else if ( a[i] < 0) {
    		negative++;
    	}
    }

    int req = (n%2 == 0 ? n/2 : (n+1)/2);

    if(positive >= req) {
    	cout << 1 << "\n";
    } else if(negative >= req) {
    	cout << -1 << "\n";
    } else {
    	cout << 0 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}