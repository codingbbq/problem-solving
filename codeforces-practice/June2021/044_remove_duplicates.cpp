//
//   Codeforces - A. Remove Duplicates
//   https://codeforces.com/problemset/problem/978/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    map<int, int> a;
    vector<int> x(n);
    vector<int> s;

    for(int i = 0; i < n; i++) {
    	cin >> x[i];
    }

    
    for(int j = n - 1; j >= 0; j--) {
        if(a.count(x[j]) <= 0) {
            a.insert({x[j], j});
            s.push_back(x[j]);
        }
    }

    cout << s.size() << "\n";
    for(int i = s.size() - 1; i >= 0; i--) {
        cout << s[i] << " ";
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}