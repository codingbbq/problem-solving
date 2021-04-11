// https://codeforces.com/problemset/problem/977/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin>>n>>k;
    for(int i = 0; i<k; ++i) {
        if(n%10 == 0) {
            n /=10;
        }else {
            n--;
        }
    }
    cout<<n;
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