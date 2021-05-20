//
//   Codeforces - A. Tanya and Stairways
//   https://codeforces.com/problemset/problem/1005/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    int total = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 1) {
            total+=1;
        }
    }
    cout << total << "\n";
    
    if(n == 1) {
        cout << a[0] << "\n";
    } else {
        for(int i = 1; i < n; i++) {
            if(a[i] == 1) {
                cout << a[i-1] << " ";
            }
            if(i == n - 1) {
                cout << a[i] << " ";
            }
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