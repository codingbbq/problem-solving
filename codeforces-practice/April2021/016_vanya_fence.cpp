// https://codeforces.com/problemset/problem/677/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, h;
    cin>>n>>h;
    int w = 0;
    for(int i = 0; i < n; i++) {
        int b;
        cin>>b;
        if(b <= h) {
            w++;
        } else {
            w+=2;
        }
    }
    cout<<w<<endl;
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