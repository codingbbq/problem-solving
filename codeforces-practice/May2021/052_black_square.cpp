//
//   Codeforces - A. Black Square
//   https://codeforces.com/problemset/problem/431/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    map<char, int> v = {{'1', a1}, {'2', a2}, {'3', a3}, {'4', a4}};
    string s;
    cin >> s;
    int calories = 0;
    for(int i = 0; i < s.size(); i++) {
        // cout << typeid(s[i]).name() << v[s[i]] << "\n";
        calories += v[s[i]];
    }
    cout << calories << "\n";
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