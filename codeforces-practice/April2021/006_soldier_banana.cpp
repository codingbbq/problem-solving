// https://codeforces.com/problemset/problem/546/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k, w, n;
    int total = 0;

    cin>>k>>w>>n;

    for(int i=1; i<=n; ++i) {
        total+=k*i;
    }
    if(total > w) {
        cout<<total-w;
    }else {
        cout<<0;
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