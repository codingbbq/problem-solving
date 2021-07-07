//
//   Codeforces - A. Sasha and Sticks
//   https://codeforces.com/problemset/problem/832/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    // n/k gives how many turns have been played.
    // if n/k is even, than lena played last turn which means sasha lost the game.

    if((n / k) % 2 != 0) {
    	cout << "YES";
    } else {
    	cout << "NO";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}