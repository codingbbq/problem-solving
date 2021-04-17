// https://codeforces.com/problemset/problem/116/A
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int stops, a, b;
    int total = 0, capacity = 0;
    cin>>stops;
    for(int i = 0; i < stops; ++i) {
        cin>>a>>b;
        total = (total - a) + b;
        if(total > capacity) {
            capacity = total;
        }
    }
    cout<<capacity;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("../../input-output/input.txt", "r", stdin);
        freopen("../../input-output/output.txt", "w", stdout);
    #endif

    solve();

    return 0;

}