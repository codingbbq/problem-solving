// https://codeforces.com/problemset/problem/61/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string A, B, x;
    cin >> A >> B;
    for(int i = 0; i < A.length(); i++) {
        if(A[i] == B[i]) {
            x += "0";
        }
        else {
            x += "1";
        }
    }
    cout << x;
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