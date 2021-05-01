// https://codeforces.com/problemset/problem/520/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    string a;
    cin >> a;
    set<char> s;
    for(int i = 0; i < N; i++) {
        s.insert(tolower(a[i]));
    }

    if(s.size() == 26) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
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