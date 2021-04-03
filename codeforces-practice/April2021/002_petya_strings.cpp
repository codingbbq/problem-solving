// https://codeforces.com/problemset/problem/112/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    
    int ans = 0;
    for(int i = 0; i < s1.size(); i++) {
        if(tolower(int(s1[i])) > tolower(int(s2[i]))) {
            ans = 1;
            break;
        } else if(tolower(int(s1[i])) < tolower(s2[i])) {
            ans = -1;
            break;
        }
    }

    cout<<ans;
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