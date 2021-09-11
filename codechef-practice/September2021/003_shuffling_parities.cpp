//
//   CodeChef - Shuffling Parities | Problem Code: SHUFFLIN
//   https://www.codechef.com/SEPT21C/problems/SHUFFLIN
//

// Shuffle the array such that Bi = (Ai + i) % 2 and the sum is highest.

// Odd number with mod 2 returns 1 and so our attempt should be to 
// get as many odd numbers as possible.
// The algorithm, finds all the odd parities and match it to all the even array numbers. Also find
// all the even parities and pair it to all odd array numbers. 

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n;
    	cin >> n;

    	vector<int> a(n);

    	int pOddCount = 0;
    	int aEvenCount = 0;

    	for(int i = 1; i <= n; i++) {
    		int x;
    		cin >> x;

    		if(i%2 != 0) {
    			pOddCount++;
    		}

    		if(x%2 == 0) {
    			aEvenCount++;
    		}
    	}

    	int total = 0;
    	total += min(pOddCount, aEvenCount);
    	total += min(n - pOddCount, n - aEvenCount);

    	cout << total << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}