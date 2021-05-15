//
//   Codeforces - A. Diagonal Walking
//   https://codeforces.com/problemset/problem/954/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0, count = 0;
    while(i<n) {
        if(s[i] == 'R' and s[i+1] == 'U') {
            count++;
            i+=2;
        }else if(s[i] == 'U' and s[i+1] == 'R') {
            count++;
            i+=2;
        } else {
            count++;
            i++;
        }
    }
    cout << count;

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