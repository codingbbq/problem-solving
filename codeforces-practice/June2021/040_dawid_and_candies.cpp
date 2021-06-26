//
//   Codeforces - A. Dawid and Bags of Candies
//   https://codeforces.com/problemset/problem/1230/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    int x[4];
    x[0] = a1;
    x[1] = a2;
    x[2] = a3;
    x[3] = a4;

    for(int i = 0; i < 4; i++) {
    	for(int j = i + 1; j < 4; j++) {
    		if(x[i] > x[j]) {
    			swap(x[i], x[j]);
    		}
    	}
    }

    if(x[3] == x[0] + x[1] + x[2] || x[3] + x[0] == x[1] + x[2]) {
    	cout << "YES" << "\n";
    } else {
    	cout << "NO" << "\n";
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}