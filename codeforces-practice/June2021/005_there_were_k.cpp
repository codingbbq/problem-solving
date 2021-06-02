//
//   Codeforces - A. And Then There Were K
//   https://codeforces.com/problemset/problem/1527/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int bitSum = n;
        for(int i = n; i > 0; i--) {
            bitSum = bitSum & i;
            if(bitSum == 0) {
                cout << i << "\n";
                break;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}