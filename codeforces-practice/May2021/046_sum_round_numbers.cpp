//
//   Codeforces - A. Sum of Round Numbers
//   https://codeforces.com/problemset/problem/1352/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while(T--) {
        int a;
        cin >> a;
        vector<int> n;
        int count = 0;
        while(a>0) {
            if(a%10 > 0) {
                count++;
            }
            n.push_back(a%10);
            a /= 10;
        }
        cout << count << "\n";

        for(int i = 0; i < n.size(); i++) {
            if(n[i] > 0) {
                cout << n[i] * pow(10, i) << " ";
            }
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