//
//   Codeforces - A. Choose Two Numbers
//   https://codeforces.com/problemset/problem/1206/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int A;
    cin >> A;
    vector<int> a(A);
    for(int i = 0; i < A; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    cout << a[a.size() - 1] << " ";

    int B;
    cin >> B;
    vector<int> b(B);
    for(int j = 0; j < B; j++) {
        cin >> b[j];
    }

    sort(b.begin(), b.end());
    cout << b[b.size() - 1];

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