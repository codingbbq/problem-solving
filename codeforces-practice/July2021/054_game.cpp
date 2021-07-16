//
//   Codeforces - A. Game
//   https://codeforces.com/problemset/problem/984/A
//

// Sort the array and get the n/2th index element.

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }

    sort(a.begin(), a.end());

    cout << a[(n%2 == 0 ? n/2 - 1 : n/2)] << "\n";

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}