// https://codeforces.com/problemset/problem/268/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    int h, a;
    vector<pair<int, int>> v;
    while(N) {
        cin >> h >> a;
        v.push_back(make_pair(h, a));
        N--;
    }
    int sum = 0;
    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < v.size(); j++) {
            if(i == j) continue;
            if(v[i].second == v[j].first) {
                sum++;
            }
        }
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