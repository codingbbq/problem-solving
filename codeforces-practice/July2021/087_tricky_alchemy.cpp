//
//   Codeforces - A. Tricky Alchemy
//   https://codeforces.com/problemset/problem/912/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {

    long long a, b;
    cin >> a >> b;

    long long x, y, z;
    cin >> x >> y >> z;

    long long yCrystals = (x*2 + y) - a; // Yellow crystals required
    if(yCrystals < 0) {
    	yCrystals = 0;
    }

    long long bCrystals = (z*3 + y) - b; // blue crystals required
    if(bCrystals < 0) {
    	bCrystals = 0;
    }

    cout << yCrystals + bCrystals << "\n";

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}