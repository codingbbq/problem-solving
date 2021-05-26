//
//   Codeforces - A. Non-zero
//   https://codeforces.com/problemset/problem/1300/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        long long a[n];
        long long steps = 0;
        
        for(int i = 0; i < n; i++) {
            cin >> a[i];

            // This will check for product != 0;
            if(a[i] == 0) {
                a[i] = 1;
                steps++;
            }

            // Do prefix sum so that if the last element in array is 0, we just 
            // add 1 to step
            if(i != 0) {
                a[i] += a[i-1];
            }
        }
        if(a[n-1] == 0) {
            steps++;
        }
        cout << steps << "\n";
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