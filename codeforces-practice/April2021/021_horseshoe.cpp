// https://www.codechef.com/problems/FLOW006

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    set<int> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    cout << 4 - s.size();
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