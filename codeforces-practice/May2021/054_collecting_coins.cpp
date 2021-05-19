//
//   Codeforces - A. Collecting Coins
//   https://codeforces.com/problemset/problem/1294/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while(T--){
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int total = a + b + c + n;
        if(total % 3 == 0) {
            if(total/3 >= max(a, max(b,c))) {
                cout << "YES" << "\n";
            } else {
                cout << "NO" << "\n";
            }
            
        } else {
            cout << "NO" << "\n";
        }
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