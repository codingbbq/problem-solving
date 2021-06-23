//
//   Codeforces - A. New Year and Hurry
//   https://codeforces.com/problemset/problem/750/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int solved = 0;
    int consumed = 0; // Minutes utilized solving problems

    // limak has 240 - k minutes to solve problems.
    
    for(int i = 1; i <= n;) {
    	consumed += i*5;
    	if(consumed <= (240-k)) {
    		 i++;
    		 solved++;
    	} else {
    		break;
    	}
    }

    cout << solved << "\n";

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}