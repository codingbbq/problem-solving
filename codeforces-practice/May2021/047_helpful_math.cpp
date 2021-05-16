//
//   Codeforces - A. Helpful Maths
//   https://codeforces.com/problemset/problem/339/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    getline(cin, s);
    vector<char> nums;
    for(int i = 0; i<s.size(); i++) {
        if(s[i] != '+'){
            nums.push_back(s[i]);
        }
    }
    sort(nums.begin(), nums.end());
    for(auto it = nums.begin(); it != nums.end(); ++it) {
        cout << *it;
        if(it != nums.end() - 1) {
            cout << "+";
        }
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