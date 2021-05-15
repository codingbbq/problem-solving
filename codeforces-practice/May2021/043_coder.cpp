//
//   Codeforces - A. Coder
//   https://codeforces.com/problemset/problem/384/A
//

#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    
    int count = 0;
    count = (n * n) / 2;
    if(n % 2 != 0) {
        count++;
    }
    cout << count << "\n";
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {

           if (i % 2 != 0) {
                if (j % 2 != 0) {
                    cout << 'C';
                } else {
                    cout << '.';
                }
            } else {
                if (j % 2 == 0) {
                    cout << 'C';
                } else {
                    cout << '.';
                }
            }
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