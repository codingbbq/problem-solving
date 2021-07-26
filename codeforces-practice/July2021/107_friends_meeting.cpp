//
//   Codeforces - A. Friends Meeting
//   https://codeforces.com/problemset/problem/931/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
	
    int x1;
    cin >> x1;

    int x2;
    cin >> x2;

    int mid = (x1+x2)/2;

    int d1 = abs(x1 - mid);
    int d2 = abs(x2 - mid);

    int total = 0;

    total += (d1*(d1+1))/2;
    total += (d2*(d2+1))/2;

    cout << total;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}