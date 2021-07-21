//
//   Codeforces - A. Kuroni and the Gifts
//   https://codeforces.com/problemset/problem/1305/A
//

// Since all the numbers are unique, we can just output sorted numbers

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n;
    	cin >> n;

    	vector<int> nec(n); // Neclace
    	vector<int> brac(n); // Bracelate

    	for(int i = 0; i < n; i++) {
    		cin >> nec[i];
    	}

    	for(int i = 0; i < n; i++) {
    		cin >> brac[i];
    	}

    	sort(nec.begin(), nec.end());
    	sort(brac.begin(), brac.end());

    	for(int i = 0; i < n; i++) {
    		cout << nec[i] << " ";
    	}
    	cout << "\n";

    	for(int i = 0; i < n; i++) {
    		cout << brac[i] << " ";
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