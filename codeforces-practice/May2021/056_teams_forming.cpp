//
//   Codeforces - B. Teams Forming
//   https://codeforces.com/problemset/problem/1092/B
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }

    sort(s.begin(), s.end());
    int skills = 0;
    for(int i = 0; i < s.size(); i=i+2) {
        skills += abs(s[i] - s[i+1]);
    }
    cout << skills;
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