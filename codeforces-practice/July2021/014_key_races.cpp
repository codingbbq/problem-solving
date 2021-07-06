//
//   Codeforces - A. Key races
//   https://codeforces.com/problemset/problem/835/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;

    int boy1 = t1*2 + s*v1;
    int boy2 = t2*2 + s*v2;

    if(boy1 < boy2) {
    	cout << "First" << "\n";
    } else if(boy1 > boy2) {
    	cout << "Second" << "\n";
    } else {
    	cout << "Friendship" << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}