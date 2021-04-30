// https://www.codechef.com/problems/FLOW006

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string a = "I hate";
    string b = "I love";
    string o;
    for(int i = 1; i <= n; i++) {
        if(i%2 != 0) {
            o+= a;
        } else {
            o+= b;
        }
        if(i == n) {
            o+= " it";
        }else{
            o+= " that ";
        }
    }
    cout << o << endl;
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