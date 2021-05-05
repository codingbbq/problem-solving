// 

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while(T--) {
        int n, x;
        cin >> n >> x;
        int apt[n];
        for(int i = 1; i <= n; i++) {
            if(i == 1) {
                apt[1] = 2;
            } else {
                apt[i] = apt[i-1] + x;
            }
            if(n <= apt[i]){
                cout << i << "\n";
                break;
            }
        }
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