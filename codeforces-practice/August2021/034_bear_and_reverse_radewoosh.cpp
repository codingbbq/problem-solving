//
//   Codeforces - A. Bear and Reverse Radewoosh
//   https://codeforces.com/problemset/problem/658/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, c;
    cin >> n >> c;

    vector<int> p(n);
    vector<int> t(n);
    for(int i = 0; i < n; i++) {
    	cin >> p[i];
    }

    for(int i = 0; i < n; i++) {
    	cin >> t[i];
    }

    // For Limak
    int lScore = 0;
    int lTime = 0;
    for(int i = 0; i < n; i++) {
    	lTime += t[i];
    	lScore += max(0, p[i] - c * lTime);
    }

    // For radewoosh
    int rScore = 0;
    int rTime = 0;
    for(int i = n - 1; i >= 0; i--) {
    	rTime += t[i];
    	rScore += max(0, p[i] - c * rTime);
    }


    // Print result
    if(lScore == rScore) {
    	cout << "Tie" << "\n";
    } else {
    	if(lScore > rScore) {
    		cout << "Limak" << "\n";
    	} else {
    		cout << "Radewoosh" << "\n";
    	}
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}