//
//   Codeforces - B. Unique Bid Auction
//   https://codeforces.com/problemset/problem/1454/B
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
        
        int n;
        cin >> n;
        vector<int> a(n);

        map<int, pair<int, int>> m; 
        // map of Key, <frequency and position>
        for(int i = 0; i< n; i++) {
            cin >> a[i];
            if(m.count(a[i])) {
                m[a[i]] = make_pair(m[a[i]].first += 1, i);
            } else {
                m[a[i]] = make_pair(1, i);
            }
        }

        // Sort the vector a
        sort(a.begin(), a.end());
        int pos = -1;
        for(int i = 0; i < n; i++) {

            if(m[a[i]].first == 1) {
                pos = m[a[i]].second + 1;
                break;
            }
        }

        cout << pos << "\n";

    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}