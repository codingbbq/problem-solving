// https://www.codechef.com/problems/FLOW006

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while(T--) { 
        int n;
        cin >> n;
        if(n == 1) {
            cout << "HARD" << endl;
            return;
        }
    }
    cout << "EASY" << endl;
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