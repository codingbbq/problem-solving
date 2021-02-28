#include <bits/stdc++.h>

using namespace std;

void solve() {
    int t;
    cin>>t;
    if(t > 2 && t % 2 == 0) {
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
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