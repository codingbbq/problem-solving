//
//   Codeforces - B. Drinks
//   https://codeforces.com/problemset/problem/200/B
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        int p;
        cin >> p;
        sum+=p;
    }
    cout << double(sum)/n << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}