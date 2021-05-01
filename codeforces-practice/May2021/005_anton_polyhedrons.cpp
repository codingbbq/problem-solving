// https://codeforces.com/problemset/problem/785/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    map<string, int> p;
    p["Tetrahedron"] = 4;
    p["Cube"] = 6;
    p["Octahedron"] = 8;
    p["Dodecahedron"] = 12;
    p["Icosahedron"] = 20;
    int N, sum = 0;
    cin >> N;
    while(N--) {
        string poly;
        cin >> poly;
        sum+= p[poly];
    }
    cout << sum;
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