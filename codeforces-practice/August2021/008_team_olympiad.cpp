//
//   Codeforces - A. Team Olympiad
//   https://codeforces.com/problemset/problem/490/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);

    map<int, vector<int>> teams; // key : 1|2|3 and value : all the positions of 1|2|3

    for(int i = 0; i< n; i++) {
        cin >> a[i];
        teams[a[i]].push_back(i+1);
    }

    // We know that t can be 1, 2 or 3.
    int w = min(teams[1].size(), min(teams[2].size(), teams[3].size()));
    cout << w << "\n";

    while(w--) {
        cout << teams[1][w] << " " << teams[2][w] << " " << teams[3][w] << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}