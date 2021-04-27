// https://www.codechef.com/problems/FLOW001
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t) {
        int a, b;
        cin >> a >> b;
        cout << a+b << endl;
        t--;
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