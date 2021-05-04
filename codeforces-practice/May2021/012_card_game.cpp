// https://codeforces.com/problemset/problem/1097/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string table;
    cin >> table;
    for(int i = 0; i < 5; i++) {
        string hand;
        cin >> hand;
        if(table[0] == hand[0] or table[1] == hand[1]) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
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