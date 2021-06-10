//
//   Codeforces - B. Burglar and Matches
//   https://codeforces.com/problemset/problem/16/B
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    map<int, int> matches;

    while(m--) {
        int a, b;
        cin >> a >> b;
        if(matches[b]) {
            matches[b] += a;
        } else {
            matches[b] = a;
        }
    }

    int matchsticks = 0;
    for(int i = 10; i >= 1; i--) {

        if(n >= 0 && matches[i]) {

            if(matches[i] > n) {
                matchsticks += n * i;
                n = 0;
            } else {
                n = n - matches[i];
                matchsticks += matches[i] * i;
            }
            
        }
        
    }

    cout << matchsticks;
}   

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}