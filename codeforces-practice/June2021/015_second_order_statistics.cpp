//
//   Codeforces - A. Second Order Statistics
//   https://codeforces.com/problemset/problem/22/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    if(n <= 1) {
        cout << "NO" << "\n";
        return;
    } else {

        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        
        for(int i = 1; i < n; i++) {
            if(a[i] > a[i-1]) {
                cout << a[i] << "\n"; 
                return;
            }
        }

    }

    cout << "NO" << "\n";

    

    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}