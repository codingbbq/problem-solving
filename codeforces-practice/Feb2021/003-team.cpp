// https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int t; //Test case count
    int P, V, T;
    cin>>t;
    int sol = 0;
    while(t--) {
        cin>>P>>V>>T;
        if(P+V+T >= 2){
            sol++;
        }
    }
    cout<<sol<<"\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("../../input-output/input.txt", "r", stdin);
        freopen("../../input-output/output.txt", "w", stdout);
    #endif

    solve();
}