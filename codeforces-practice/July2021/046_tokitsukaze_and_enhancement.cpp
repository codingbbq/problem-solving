//
//   Codeforces - A. Tokitsukaze and Enhancement
//   https://codeforces.com/problemset/problem/1191/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    switch(n%4) {
    	case 0:
    	cout << 1 << " " << "A" << "\n";
    	break;

    	case 1:
    	cout << 0 << " " << "A" << "\n";
    	break;

    	case 2:
    	cout << 1 << " " << "B" << "\n";
    	break;

    	case 3:
    	cout << 2 << " " << "A" << "\n";
    	break;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}