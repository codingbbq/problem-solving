//
//   Codeforces - A. Paint the Numbers
//   https://codeforces.com/problemset/problem/1209/A
//

#include <bits/stdc++.h>
using namespace std;


// bool isPrime(int n, int i) {
// 	if(n <= 2) {
// 		return (n == 2) ? true : false;
// 	}

// 	if(i >= n) {
// 		return true;
// 	}

// 	if(n%i == 0) {
// 		return false;
// 	}

// 	return isPrime(n, ++i);
// }

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), paint;

    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++) {

        bool ok = true;
    	for(auto x : paint) {
            if(a[i]%x == 0){
                ok = false;
                break;
            }
        }

        if(ok) {
            paint.emplace_back(a[i]);
        }
    }

    cout << paint.size() << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}