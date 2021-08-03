//
//   Codeforces - A. Hit the Lottery
//   https://codeforces.com/problemset/problem/996/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    long long notes = 0;
    long long remain = 0;

    notes += n/100;
    remain = n%100;

    // cout << notes << " " << remain << "\n";

    notes += remain/20;
    remain = remain%20;

    notes += remain/10;
    remain = remain%10;

    notes += remain/5;
    remain = remain%5;

    notes += remain/1;

    cout << notes << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}