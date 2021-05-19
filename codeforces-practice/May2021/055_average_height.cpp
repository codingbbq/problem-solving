//
//   Codeforces - A. Average Height
//   https://codeforces.com/problemset/problem/1509/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> e;
        vector<int> o;

        while(n--) {
            int a;
            cin >> a;
            if(a % 2 == 0) {
                e.push_back(a);
            } else {
                o.push_back(a);
            }
        }

        for(int i = 0; i < e.size(); i++) {
            cout << e[i] << " ";;
        }
        
        for(int i = 0; i < o.size(); i++) {
            cout << o[i] << " ";
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