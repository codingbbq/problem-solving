// https://codeforces.com/problemset/problem/344/A

// https://www.codechef.com/problems/FLOW006

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N, group = 1;
    cin >> N;
    string m[N];
    for(int i = 0; i < N; i++) {
        string p;
        cin >> p;
        m[i] = p;
        if (i == 0) continue;
        if(m[i-1] != m[i]) {
            group++;
        }
    }
    cout << group << endl;
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