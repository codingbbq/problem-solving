// https://codeforces.com/problemset/problem/1303/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while(T--) {
        string s;
        int count = 0, ptr = -1;
        cin >> s;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '1') {
                if(ptr == -1) {
                    ptr = i;
                } else {
                    count += (i - ptr) - 1;
                    ptr = i;
                }
            }
        }
        cout << count << "\n";
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