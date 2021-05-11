//
//   Codeforces - A. Distinct Digits
//   https://codeforces.com/problemset/problem/1228/A
//

#include <bits/stdc++.h>
using namespace std;

bool distinct_digit(long long digit) {
    set<int> s;
    int count = 0;
    while(digit > 0 ) {
        s.insert(digit%10);
        digit /= 10;
        ++count;
    }
    if(s.size() == count) {
        return true;
    } else {
        return false;
    }
}

void solve() {
    long long a, b;
    cin >> a >> b;
    for(long long i = a; i <= b; i++) {
        if(distinct_digit(i)) {
            cout << i;
            return;
        }
    }
    cout << -1;
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