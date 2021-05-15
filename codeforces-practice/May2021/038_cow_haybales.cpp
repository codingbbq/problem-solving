//
//   Codeforces - A. Cow and Haybales
//   https://codeforces.com/problemset/problem/1307/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while(T--) {
        
        int n, d;
        cin >> n >> d;
        int b[n];

        for(int i = 1; i <= n; i++) {
            cin >> b[i];
        }

        while(d--) {
            for(int j = 2; j <=n; j++) {
                if(b[j] > 0) {
                    b[j]--;
                    b[j-1]++;
                    break;
                }
            }
        }

        cout << b[1] << "\n";
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