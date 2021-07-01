//
//   Codeforces - A. Bus to Udayland
//   https://codeforces.com/problemset/problem/711/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<string> bus;

    bool found = false;
    while(n--) {

    	string seats;
    	cin >> seats;

    	if(!found) {

	    	if(seats[0] == 'O' && seats[1] == 'O') {
	    		seats[0] = '+';
	    		seats[1] = '+';
	    		found = true;
	    	} else if(seats[3] == 'O' && seats[4] == 'O') {
	    		seats[3] = '+';
	    		seats[4] = '+';
	    		found = true;
	    	}

    	}

    	bus.push_back(seats);
   	
    }

    if(found) {
		cout << "YES" << "\n";
		for(auto &x : bus) {
			cout << x << "\n";
		}
	} else {
		cout << "NO" << "\n";
	}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}