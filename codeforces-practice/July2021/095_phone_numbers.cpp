//
//   Codeforces - A. Phone Numbers
//   https://codeforces.com/problemset/problem/1060/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int total = 0;
    for(int i = 0; i < n; i++) {
    	if(s[i] == '8') {
    		total++;
    	}
    }

    int phone = n/11;

    cout << min(phone, total);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}