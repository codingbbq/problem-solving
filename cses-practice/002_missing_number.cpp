//
//   CSES - Missing Number
//   https://cses.fi/problemset/task/1083
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    long long sum = 0;
    sum = (n * (n + 1))/2;

    long long add = 0;
    for(int i = 1; i < n; i++) {
        long long x;
        cin >> x;
        add += x;
    }

    cout << sum - add;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}