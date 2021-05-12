//
//   Codeforces - A. Stones
//   https://codeforces.com/problemset/problem/1236/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while(T--) {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = 0;
        while(b > 0 and c > 0) {
            if(c - 2 >= 0 and b - 1 >= 0) {
                c = c - 2;
                sum +=2;
                b = b - 1;
                sum+=1;
            } else {
                break;
            }
        }
        while(a > 0 and b > 0) {
            if(b - 2 >= 0 and a - 1 >= 0) {
                b = b - 2;
                sum+= 2;
                a = a - 1;
                sum+= 1;
            } else {
                break;
            }
        }

        cout << sum << "\n";
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