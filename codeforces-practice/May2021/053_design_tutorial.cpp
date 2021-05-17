//
//   Codeforces - Title
//   
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if(n % 2 == 0) {
        cout << 4 << " " << n - 4;
    } else {
        cout << 9 << " " << n - 9;
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