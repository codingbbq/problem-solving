// https://codeforces.com/problemset/problem/510/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    bool last = true;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(i%2!=0) {
                if(last && j == m-1) {
                    cout << "#";
                }else if(!last && j == 0) {
                    cout << "#";
                } else {
                    cout << ".";
                }
            } else {
                cout << "#";
            }
        }
        if(i % 2!= 0) {
            last = !last;
        }
        cout << "\n";
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