//
//   Codeforces - A. I Wanna Be the Guy
//   https://codeforces.com/problemset/problem/469/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int levels = (n * (n + 1)) / 2;

    set<int> xy;

    int a;
    cin >> a;

    for(int i = 0; i < a; i++) {
    	int x;
    	cin >> x;
    	xy.insert(x);
    }

    int b;
    cin >> b;

   
    for(int i = 0; i < b; i++) {
    	int y;
    	cin >> y;
    	xy.insert(y);
    }

    int canPlay = 0;
    for(auto &k: xy) {
    	canPlay += k;
    }

    if(levels == canPlay) {
    	cout << "I become the guy.";
    } else {
    	cout << "Oh, my keyboard!";
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}