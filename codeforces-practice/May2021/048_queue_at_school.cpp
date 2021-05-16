//
//   Codeforces - B. Queue at the School
//   https://codeforces.com/problemset/problem/266/B
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, t;
    cin >> n >> t;
    
    string q;
    cin >> q;
    
    while(t--) {
        int i = 0;
        while(i<=n) {
            if(q[i] == 'B' and q[i+1] == 'G') {
                swap(q[i], q[i+1]);
                i += 2;
            } else {
                i++;
            }
        }
    }

    cout << q;
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