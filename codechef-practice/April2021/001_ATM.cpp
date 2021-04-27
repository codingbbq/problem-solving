// https://www.codechef.com/problems/HS08TEST

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int w;
    float b;
    cin >> w >> b;
    if (w%5 == 0 and b >= w + 0.50) {
        cout << fixed << setprecision(2) << b - w - 0.50;
    }else {
        cout << fixed << setprecision(2) << b;
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