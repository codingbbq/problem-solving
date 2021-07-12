//
//   Codeforces - A. Cards
//   https://codeforces.com/problemset/problem/701/A
//

// 

#include <bits/stdc++.h>
using namespace std;

void solve() {
    double n;
    cin >> n;

    vector<int> a(n);

    double sum = 0;
    for(int i = 0; i < n; i++) {
    	cin >> a[i];

    	sum += a[i];
    }

    double s = (sum/n)*2;

    for(int i = 0; i < n; i++) {

		for(int j = i + 1; j < n; j++) {
			if(a[i] > 0 && a[j] > 0 && a[i] + a[j] == s) {
				cout << i + 1 << " " << j + 1;
				a[i] = -1; 
				a[j] = -1;
				cout << "\n";
			} 
		}

	}

    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}