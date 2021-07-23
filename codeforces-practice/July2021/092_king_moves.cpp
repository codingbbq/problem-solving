//
//   Codeforces - A. King Moves
//   https://codeforces.com/problemset/problem/710/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a;
    cin >> a;

    if(a == "a1" || a == "a8" || a == "h1" || a == "h8") {
    	cout << 3 << "\n";
    } else {
    	if(a[0] == 'a' || a[0] == 'h' || a[1] == '1' || a[1] == '8') {
    		cout << 5 << "\n";
    	} else {
    		cout << 8 << "\n";
    	}
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}