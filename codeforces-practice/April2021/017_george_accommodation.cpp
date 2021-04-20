// https://codeforces.com/problemset/problem/467/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, count = 0;
    cin>>n;
    for(int i = 0; i < n; i++) {
        int p, q;
        cin>>p>>q;
        if(q - p >= 2) {
            count++;
        }
    }
    cout<<count<<endl;
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