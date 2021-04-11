// https://codeforces.com/problemset/problem/266/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, count=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=1; i<n; ++i) {
        if(s[i-1] == s[i]) {
            count++;
        }
    }
    cout<<count;
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