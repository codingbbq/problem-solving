// https://codeforces.com/problemset/problem/236/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    set<char> user;
    for(int i = 0; i < s.size(); i++) {
        user.insert(s[i]);
    }
    if(user.size() % 2 == 0) {
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
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