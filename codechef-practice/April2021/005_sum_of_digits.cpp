// https://www.codechef.com/problems/FLOW006

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while(T--) {
        int N, sum = 0;
        cin >> N;
        while(N) {
            sum += N%10;
            N /= 10;
        }
        cout << sum << endl;
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