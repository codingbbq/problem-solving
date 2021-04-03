// https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int X = 0;
    int n; //Statements
    cin>>n;
    string x;
    while(n>0) {
        cin>>x;
        if(x[0] == '+' or x[1]== '+') {
            X+=1;
        }
        if(x[0] == '-' or x[1] == '-') {
            X-=1;
        }
        n--;
    }
    cout<<X;
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("../../input-output/input.txt", "r" , stdin);
        freopen("../../input-output/output.txt", "w", stdout);
    #endif

    solve();

    return 0;
}