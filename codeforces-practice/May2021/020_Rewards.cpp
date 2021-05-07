//
//   Codeforces - Rewards
//   https://codeforces.com/problemset/problem/448/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    int b1, b2, b3;
    cin >> b1 >> b2 >> b3;
    int n;
    cin >> n;
    int total_cups = a1 + a2 + a3;
    int total_medals = b1 + b2 + b3;
    
    while(n > 0) {
        if(total_cups > 4) {
            total_cups = total_cups - 5;
            n--;
            continue;
        }
        if(total_medals > 9) {
            total_medals = total_medals - 10;
            n--;
            continue;
        }
        if(total_cups > 0) {
            n--;
            total_cups = 0;
        } else if(total_medals > 0) {
            n--;
            total_medals = 0;
        } else {
            break;
        }
    }

    if(total_cups > 0 or total_medals > 0) {
        cout << "NO" << "\n";
    } else {
        cout << "YES" << "\n";
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