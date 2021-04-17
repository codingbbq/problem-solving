// https://codeforces.com/problemset/problem/617/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin>>x;
    cout<<(x+4)/5;
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