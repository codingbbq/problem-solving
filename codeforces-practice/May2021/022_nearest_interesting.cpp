//
//   Codeforces - A. Nearest Interesting Number
//   https://codeforces.com/problemset/problem/1183/A
//

#include <bits/stdc++.h>
using namespace std;

bool nearestIntesting(int n) {
    int t = 0;
    while(n > 0) {
        t+=n%10;
        n /= 10;
    }  
    if(t%4==0) {
        return true;
    }
    return false;
}

void solve() {
    int a;
    cin >> a;
    for(int i = a; i <= 1010; i++) {
        if(nearestIntesting(i)) {
            cout << i;
            break;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    #ifndef ONLINE_JUDGE
        freopen("../../input-output/input.txt", "r", stdin);
        freopen("../../input-output/output.txt", "w", stdout);
    #endif

    solve();
    return 0;
}