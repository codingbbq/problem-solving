//
//   Codeforces - B. Young Photographer
//   https://codeforces.com/problemset/problem/14/B
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x0;
    cin >> n >> x0;

    int steps = 0;
    int x = 0;
    int y = 1001;
    while(n--) {

        int a, b;
        cin >> a >> b;

        // always make a smaller than b.
        if(a > b) {
            swap(a, b);
        }

        // From all the x find the maximum x value
        if(a > x) {
            x = a;
        }

        // From all the y find the minimum y value
        if(b < y) {
            y = b;
        }

    }

    
    // We get the intersection segment x and y

    if(x > y) {
        cout << -1 << "\n";
    } else {
        if(x <= x0 && y >= x0) {
            cout << 0 << "\n";
        } else {
            cout << min(abs(x0 - x), abs(x0 - y)) << "\n";
        }
    }


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}