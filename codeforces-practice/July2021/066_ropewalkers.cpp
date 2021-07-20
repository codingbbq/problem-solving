//
//   Codeforces - A. Ropewalkers
//   https://codeforces.com/problemset/problem/1185/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(b < a) {
    	swap(a, b);
    }

    if(b > c) {
    	swap(b, c);
    	if(b < a) {
    		swap(a, b);
    	}
    }
   
   	// cout << a << b << c << "\n";

    int diff1 = abs(a - b);

    if(diff1 < d) {
    	diff1 = d - diff1; 
    } else {
    	diff1 = 0;
    }

    int diff2 = abs(c - b);
    if(diff2 < d) {
    	diff2 = d - diff2;
    } else {
    	diff2 = 0;
    }

    cout << diff1 + diff2 << "\n";


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}