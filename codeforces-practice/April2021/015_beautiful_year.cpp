// https://codeforces.com/problemset/problem/271/A
#include <bits/stdc++.h>
using namespace std;

bool checkUnique(int y) {
    set<int> s = {};
    int r;
    while(y > 0) {
        r = y%10;
        y /= 10;
        s.insert(r);
    }
    if(s.size() == 4) {
        return true;
    } else {
        return false;
    }
}

void solve() {
    int n;
    cin>>n;
    for(int i = n + 1; i<9250; i++) {
        if(checkUnique(i)) {
            cout<<i<<"\n";
            break;
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