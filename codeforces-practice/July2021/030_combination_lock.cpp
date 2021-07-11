//
//   Codeforces - A. Combination Lock
//   https://codeforces.com/problemset/problem/540/A
//

// Had to consider the input as of type string and run for loop on it.
// String can be subtracted because '9' - '8' = 1


#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string a; // original state of the disk
    cin >> a;

    string p; // passcode
    cin >> p;

    int total = 0;

    for(int i = 0; i < n; i++){
    	total += min(abs(a[i] - p[i]), (10 - abs(a[i] - p[i])));
    }

    cout << total;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}