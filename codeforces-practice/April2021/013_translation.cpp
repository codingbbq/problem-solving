// https://codeforces.com/problemset/problem/41/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t;
    cin>>s;
    cin>>t;
    if(s.length() != t.length()) {
        cout<<"NO";
    } else {
        string output = "YES";
        for(int i = 0, j = t.length() - 1; i < s.length(), j >= 0; ++i, --j ) {
            if(s[i] != t[j]) {
                output = "NO";
                break;
            }
        }
        cout<<output;
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