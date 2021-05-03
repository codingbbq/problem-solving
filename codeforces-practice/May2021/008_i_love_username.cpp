// https://codeforces.com/problemset/problem/155/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N, score, sum = 0;
    cin >> N;
    int past_less = 0;
    int past_more = 0;
    for(int i = 0; i < N; i++) {
        cin >> score;
        if(i == 0) {
            past_less = score;
            past_more = score;
        } else {
            if(score < past_less) {
                past_less = score;
                sum++;
            }
            if(score > past_more) {
                past_more = score;
                sum++;
            }
        }
    }
    cout << sum << "\n";
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