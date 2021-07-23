//
//   Codeforces - A. Fraction
//   https://codeforces.com/problemset/problem/854/A
//

// Start from middle of the number and find if gcd of both the numbers is 1

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int a = n/2;
    int b = (n%2 == 0 ? n/2 : n/2 + 1); // If n is odd then we make b = n/2+1

    	while(a >= 1) {

    		if(a == 1) {
		    	cout << a << " " << n-1;
		    	break;
		    } else {

		    	if(__gcd(a, b) == 1 && (a+b == n)) {
		    		cout << a << " " << b;
		    		break;
		    	} else {
		    		a--;
		    		b++;
		    	}

		    }
	    	
    	}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}