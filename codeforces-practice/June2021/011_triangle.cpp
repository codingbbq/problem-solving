//
//   Codeforces - A. Triangle
//   https://codeforces.com/problemset/problem/6/A
//

#include <bits/stdc++.h>
using namespace std;

bool triangle(int x, int y, int z) {
    return (x + y > z) && (x + z > y) && (y + z > x);
}

bool segment(int x, int y, int z) {
    return (x + y == z) || (x + z == y) || (y + z == x);
}

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int deg = false; // degenerate i.e check for segment
    int ndeg = false; // non-degenerate i.e check for normal triangle

    deg = deg || segment(a, b ,c);
    deg = deg || segment(a, b, d);
    deg = deg || segment(b, c, d);
    deg = deg || segment(a, c, d);

    ndeg = ndeg || triangle(a, b, c);
    ndeg = ndeg || triangle(a, b, d);
    ndeg = ndeg || triangle(b, c, d);
    ndeg = ndeg || triangle(a, c, d);

    if(ndeg) {
        cout << "TRIANGLE" << "\n";
    } else if(deg) {
        cout << "SEGMENT" << "\n";
    } else {
        cout << "IMPOSSIBLE" << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}