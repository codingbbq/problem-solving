//
//   Codeforces - A. PolandBall and Hypothesis
//   https://codeforces.com/problemset/problem/755/A
//

#include <bits/stdc++.h>
using namespace std;

bool is_Prime(int num) {
	// cout << num << " : ";
	bool result = true;
	if(num <= 1) {
		return 0;
	} else if(num == 2) {
		return 1;
	} else if((num & 1) == 0) {
		return 0;
	}

	if(num >= 3) {
		for(int i = 3; (i*i) <= (num); i = (i + 2)) {
			// cout << i << " xx " << num;
			if((num % i) == 0) {
				result = false;
				break;
			}
		}
	}

	return result;
}

void solve() {
    int n;
    cin >> n;

    for(int j = 1; j <= 1000; j++) {
    	// cout << j << ": " << is_Prime(9) << "\n";
    	if(!is_Prime((n*j) + 1)) {
    		cout << j << "\n";
    		break;
    	}
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}	