//
//   Codeforces - A. Game
//   https://codeforces.com/problemset/problem/513/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n1, n2, k1, k2;
    cin >> n1 >> n2 >> k1 >> k2;

    // The most optimum solution would be for each player to throw only 
    // one ball at a time.
    // The player that plays last will win, so they need to ensure that they have
    // the maximum balls in the their box.

    if(n1 > n2) {
        cout << "First" << "\n";

    } else {
        cout << "Second" << "\n";

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}