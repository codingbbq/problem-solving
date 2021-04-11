// https://codeforces.com/problemset/problem/281/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string w;
    cin>>w;
    w[0] = toupper(w[0]);
    cout<<w;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("../../input-output/input.txt", "r", stdin);
        freopen("../../input-output/output.txt", "w", stdout);
    #endif

    solve();
}