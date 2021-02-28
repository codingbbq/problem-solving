// https://codeforces.com/problemset/problem/71/A
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int t; // Test case count
    string w;
    cin>>t;
    while(t > 0){
        cin>>w;
        if(w.length() > 10) {
            cout << w.at(0) << w.length() - 2 << w.back() << "\n";
        } else {
            cout<<w<<"\n";
        }
        t--;
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