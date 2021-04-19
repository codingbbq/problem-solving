// https://codeforces.com/problemset/problem/110/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    int r;
    int count = 0;
    cin>>n;
    while(n > 0) {
        r = n%10;
        n = n/10;
        if(r == 4 or r == 7) {
            count++;
        }
        if(count > 7) {
            break;
        }
    }
    if(count == 4 or count == 7) {
        cout<<"YES";
    }else{
        cout<<"NO";
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