// https://codeforces.com/problemset/problem/492/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int count;
    cin >> count;
    int i = 0, sum = 0;
    int total = 0;
    while(true) {
        sum += i;
        total+= sum;
        if(count < total) {
            i-=1;
            break;
        }
        i++;
    }
    cout << i;
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