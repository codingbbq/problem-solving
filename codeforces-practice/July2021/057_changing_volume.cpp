//
//   Codeforces - Title
//   
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    if(a > b) {
    	swap(a, b);
    }

    // So now a is always smaller than b;
    int steps = b - a;

   	int cnt = 0;
   	cnt += steps/5;
   	steps = steps%5;
   	cnt += steps/2;
   	steps = steps%2;
   	cnt += steps;

   	cout << cnt << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    while(tc--) {
    	solve();
    }
    
    return 0;
}