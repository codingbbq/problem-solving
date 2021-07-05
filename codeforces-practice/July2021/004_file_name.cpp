//
//   Codeforces - B. File Name
//   https://codeforces.com/problemset/problem/978/B
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string f;
    cin >> f;
    int found = 0;
    int remove = 0;
    for(int i = 0; i < f.size(); i++) {
    	
    	if(f[i] == 'x') {
    		found++;
    	} else {
    		found = 0;
    	}

    	if(found >= 3) {
    		found--;
    		remove++;
    	}
    }

    cout << remove << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}