//
//   Codeforces - A. Piles With Stones
//   https://codeforces.com/problemset/problem/1013/A
//

// sum of first pile should be greater than equal to sum of second pile

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

   	int sum1 = 0;
   	int sum2 = 0;

   	for(int i = 0; i < n; i++) {
   		int x;
   		cin >> x;
   		sum1 += x;
   	}

   	for(int i = 0; i < n; i++) {
   		int y;
   		cin >> y;
   		sum2 += y;
   	}

   	cout << (sum1 >= sum2 ? "YES" : "NO");

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}