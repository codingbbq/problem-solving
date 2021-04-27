// https://www.codechef.com/problems/INTEST
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, count = 0;
    cin >> n >> k;
    while(n--) {
        int t;
        cin >> t;
        if (t % k == 0) {
            count++;
        }
    }
    cout << count << endl;
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