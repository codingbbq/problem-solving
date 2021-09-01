//
//   Codeforces - A. Summer Camp
//   https://codeforces.com/problemset/problem/672/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string num = "";

    for(int i = 1; i <= 1000; i++) {
    	num += to_string(i);
    }

    cout << num[n-1] << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}