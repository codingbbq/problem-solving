// https://codeforces.com/problemset/problem/703/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int R;
    cin >> R;
    int miskha = 0, chris = 0;
    while(R--) {
        int m, c;
        cin >> m >> c;
        if(m > c) {
            miskha++;
        } else if( m < c) {
            chris++;
        }
    }
    if(miskha == chris) {
        cout << "Friendship is magic!^^";
    } else if(miskha > chris) {
        cout << "Mishka";
    } else {
        cout << "Chris";
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