//
//   Codeforces - A. Number of Apartments
//   https://codeforces.com/problemset/problem/1430/A
//

// Max of 7 apartments = 1000/7
// Max of 5 apartments = 1000/5

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        if(n == 1 || n == 2 || n == 4) {
            cout << -1 << "\n";
            continue;
        }

        if(n%3 == 0) {
            cout << n/3 << " " << 0 << " " << 0;
        } else if(n%3 == 1) {
            cout << (n - 7)/3 << " " << 0 << " " << 1;
        } else {
            cout << (n - 5)/3 << " " << 1 << " " << 0 ;
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