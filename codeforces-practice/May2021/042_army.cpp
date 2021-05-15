//
//   Codeforces - A. Army
//   https://codeforces.com/problemset/problem/38/A
//

#include <bits/stdc++.h>
using namespace std;

// From Rank 0 to 1, 0 years, from 1 to 2 will be 5 years 
// and from 2 to 3 it will be 11 years.

void solve() {
    int n;
    cin >> n;
    int f[102] = {0};
    for(int i = 2; i < n + 1; i++) {
        int r;
        cin >> r;
        f[i] = r;
    }
    int a, b;
    cin >> a >> b;
    int years = 0;
    for(int j = b; j > a; j--) {
        years+= f[j];
    }
    cout << years;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    #ifndef ONLINE_JUDGE
        freopen("../../input-output/input.txt", "r", stdin);
        freopen("../../input-output/output.txt", "w", stdout);
    #endif

    solve();
    return 0;
}