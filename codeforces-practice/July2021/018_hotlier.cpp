//
//   Codeforces - A. Hotelier
//   https://codeforces.com/problemset/problem/1200/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a = {0,0,0,0,0,0,0,0,0,0};

    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
    	if(s[i] == 'L') {

    		auto it = find(a.begin(), a.end(), 0);
    		if(it != a.end()) {
    			a[it - a.begin()] = 1;
    		}
    		

    	} else if(s[i] == 'R') {

    		auto it = find(a.rbegin(), a.rend(), 0);
    		
    		if(it != a.rend()) {
    			// cout << a.rend() - it << " >>";
    			a[a.rend() - it - 1] = 1;
    		}
    		

    	}else {

    		a[s[i] - '0'] = 0;

    	}

    }

    for(int i = 0; i < a.size(); i++) {
    	cout << a[i];
    }


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
