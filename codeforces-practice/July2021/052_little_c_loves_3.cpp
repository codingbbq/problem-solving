//
//   Codeforces - A. Little C Loves 3 I
//   https://codeforces.com/problemset/problem/1047/A
//

// a = 1, b = 1 and c = n-2 iff n-2 is not multiple of 3
// a = 1, b = 2 and c = n-3 iff n-2 is multiple of 3

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    if((n-2)%3 != 0) {
    	cout << 1 << " " << 1 << " " << n-2;
    } else {
    	cout << 1 << " " << 2 << " " << n-3;
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}