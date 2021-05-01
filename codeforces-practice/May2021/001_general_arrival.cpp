// https://codeforces.com/problemset/problem/144/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N, t = 0, s = INT_MAX;
    cin >> N;
    vector<int> m;
    for(int i = 0; i < N; i++) {
        int men;
        cin >> men;
        if(men >= t) {
            t = men;
        }
        if(men <= s) {
            s = men;
        }
        m.push_back(men);
    }
    
    int count = 0;

    // Find taller men first.
    auto it = find(m.begin(), m.end(), t);
    int tIndex = it - m.begin();

    for(int j = tIndex; j > 0; j--) {
        if(m[0] == t) break;
        swap(m[j], m[j-1]);
        count++;
    }

    // Find smaller man
    auto jt = find(m.rbegin(), m.rend(), s);
    int sIndex = m.rend() - 1 - jt;

    for(int j = sIndex; j < N; j++) {
        if(m[N - 1] == s) break;
        swap(m[j], m[j+1]);
        count++;
    }

    cout << count << "\n";

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