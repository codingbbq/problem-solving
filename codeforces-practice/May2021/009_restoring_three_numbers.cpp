// https://codeforces.com/problemset/problem/1154/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int A, B, C, D;
    int large = 0;
    cin >> A >> B >> C >> D;
    if (A > large) {
        large = A;
    }
    if(B > large) {
        large = B;
    }
    if(C > large) {
        large = C;
    }
    if(D > large) {
        large = D;
    }
    
    if(large - A > 0) {
        cout << large - A << " ";
    }
    if(large - B > 0) {
        cout << large - B << " ";
    }
    if(large - C > 0) {
        cout << large - C << " ";
    }
    if(large - D > 0) {
        cout << large - D << " ";
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