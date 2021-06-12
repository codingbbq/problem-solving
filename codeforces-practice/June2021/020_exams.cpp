//
//   Codeforces - A. Exams
//   https://codeforces.com/problemset/problem/194/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n, k;
    cin >> n >> k;

    k = abs(n*2 - k);
    if(n - k > 0) {
    	cout << n - k << "\n";
    } else {
    	cout << 0 << "\n";
    }  

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}