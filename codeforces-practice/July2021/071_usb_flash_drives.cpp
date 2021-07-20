//
//   Codeforces - A. USB Flash Drives
//   https://codeforces.com/problemset/problem/609/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int m;
    cin >> m;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
    	cin >> a[i]; 
    }

    sort(a.begin(), a.end(), greater<int>());

    int total = 0;
    for(int i = 0; i < n; i++) {
    	total += a[i];
    	if(total >= m) {
    		cout << i + 1 << "\n";
    		break;
    	}
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}