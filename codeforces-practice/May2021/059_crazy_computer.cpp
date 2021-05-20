//
//   Codeforces - A. Crazy Computer
//   https://codeforces.com/problemset/problem/716/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, c;
    cin >> n >> c;
    int t[n];

    for(int i = 0; i < n; i++) {
        cin >> t[i];
    }

    int words = 0;
    for(int j = 0; j < n; j++) {

        if(j == 0) {
            words++;
        } else {
            if(t[j] - t[j-1] <= c) {
                words++;
            } else {
                words = 1;
            }
        }
    }
    cout << words << "\n";
    
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