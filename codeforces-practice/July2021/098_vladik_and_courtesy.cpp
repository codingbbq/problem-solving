//
//   Codeforces - A. Vladik and Courtesy
//   https://codeforces.com/problemset/problem/811/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    const string v1 = "Vladik";
    const string v2 = "Valera";

    int i = 1;
    while(a >= 0 && b >= 0) {
    	a = a-i;
    	i++;
    	b = b - i;
    	i++;
    	if(a < 0) {
    		cout << v1 << "\n";
    		break;
    	}

    	if(b < 0) {
    		cout << v2 << "\n";
    		break;
    	}
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}