// https://codeforces.com/problemset/problem/791/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l, b, answer = 0;
    cin>>l>>b;
    while(l<=b) {
        l*=3;
        b*=2;
        ++answer;
    }
    cout<<answer;
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