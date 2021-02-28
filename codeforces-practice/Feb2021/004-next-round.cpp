// https://codeforces.com/problemset/problem/158/A
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    int count = 0;
    vector<int> scores;
    cin>>n>>k;
    int x;
    while(cin>>x) {
        scores.push_back(x);
    }
    int ks = scores[k-1]; // Score of kth contestant
    for(int i = 0; i < scores.size(); i++) {
        if(scores[i] > 0 && scores[i] >= ks) {
            count++;
        }
    }
    cout<<count<<"\n";
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