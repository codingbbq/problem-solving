//
//   Codeforces - A. Do Not Be Distracted!
//   https://codeforces.com/problemset/problem/1520/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        map<char, bool> u;
        vector<char> tasks(n);

        string x;
        cin >> x;

        bool suspicious = false;
        for(int i = 0; i < n; i++) {

            // First element insert in the map u;
            if(i == 0) {
                u[x[i]] = true;
                continue;
            }

            // Check if the previous task and the current task are same
            if(x[i-1] == x[i]) {
                continue;
            } else {

                // If the task is present in the map, polycarp was distracted 
                if(u[x[i]] == true) {
                    suspicious = true;
                } else {

                    // This is new task and add it to the map u.
                    u[x[i]] = true;
                }

            }
        }

        if(!suspicious) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}