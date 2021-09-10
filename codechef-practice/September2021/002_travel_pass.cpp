//
//   CodeChef - Travel Pass | Problem Code: TRAVELPS
//   https://www.codechef.com/SEPT21C/problems/TRAVELPS
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int N, A, B;
    	cin >> N >> A >> B;

    	string S;
    	cin >> S;

    	int time = 0;
    	for(int i = 0; i < N; i++) {
    		if(S[i] == '1') {
    			time += B;
    		} else {
    			time += A;
    		}
    	}

    	cout << time << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}