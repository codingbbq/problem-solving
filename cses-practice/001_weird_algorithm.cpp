//
//   CSES - Weird Algorithm
//   https://cses.fi/problemset/task/1068
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    while(n) {

        cout << n << " ";

        if(n <= 1) {
            return;
        }

        if(n % 2 == 0) {
            n = n/2;
        } else {
            n = (n* 3) + 1;
        }

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}