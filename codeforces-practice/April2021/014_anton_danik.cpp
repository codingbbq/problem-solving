// https://codeforces.com/problemset/problem/734/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, anton = 0, danik = 0;
    string d;
    cin>>n;
    cin>>d;
    for(int i = 0; i < n; ++i) {
        if(d[i] == 'A') {
            anton++;
        }else{
            danik++;
        }
    }
    if(anton > danik) {
        cout<<"Anton";
    } else if(danik > anton) {
        cout<<"Danik";
    }else {
        cout<<"Friendship";
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