// https://codeforces.com/problemset/problem/443/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    set<char> u;
    string s;
    getline(cin, s);
    int i = 0;
    while(s[i]) {
        if(isalpha(s[i])) {
            u.insert(s[i]);
        }
        i++;
    }
    cout << u.size() << "\n";
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