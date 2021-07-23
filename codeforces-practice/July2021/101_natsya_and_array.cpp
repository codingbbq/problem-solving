//
//   Codeforces - A. Nastya and an Array
//   https://codeforces.com/problemset/problem/992/A
//

// Get all the unique elements that are not 0

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    set<int> a;
    for(int i = 0; i < n; i++) {
    	int x;
    	cin >> x;
    	if(x != 0) a.insert(x);
    }

    cout << a.size() << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}