//
//   Codeforces - A. Two distinct points
//   https://codeforces.com/problemset/problem/1108/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while(T--) {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        if(l1 != l2) {
            cout << l1 << " " << l2;
        } else if (l1 != r2) {
            cout << l1 << " " << r2;
        } else if(r1 != l2) {
            cout << r1 << " " << l2;
        } else {
            cout << r1 << " " << r2;
        }
        cout << "\n";
    }
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