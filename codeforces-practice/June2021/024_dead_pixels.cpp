//
//   Codeforces - A. Dead Pixel
//   https://codeforces.com/problemset/problem/1315/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a, b, x, y;
	cin >> a >> b >> x >> y;

	int area = 0;

	area = max(x * b, area);
	area = max((a - (x + 1)) * b, area);
	area = max(y * a, area);
	area = max((b - (y+1)) * a, area);

	cout << area << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
    	solve();	
    }

    return 0;
}