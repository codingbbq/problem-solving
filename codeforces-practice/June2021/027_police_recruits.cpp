//
//   Codeforces - A. Police Recruits
//   https://codeforces.com/problemset/problem/427/A
//

#include <bits/stdc++.h>
using namespace std;



void solve() {
    int n;
    cin >> n;
    
    int seq[n];
    int police = 0; int unsolved = 0;
    for(int i = 0; i < n; i++) {
    	cin >> seq[i];
    	if(seq[i] > 0) {
    		police += seq[i];
    	}

    	if(seq[i] == -1 && police > 0) {
    		police--;
    	} else if(seq[i] == -1 && police <= 0) {
    		unsolved++;
    	}

    }

    cout << unsolved;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}