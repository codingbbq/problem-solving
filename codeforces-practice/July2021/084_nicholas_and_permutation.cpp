//
//   Codeforces - A. Nicholas and Permutation
//   https://codeforces.com/problemset/problem/676/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
   	int x = 0;
   	int y = INT_MAX;
   	int maxIndex = 0;
   	int minIndex = 0;


    for(int i = 0; i < n; i++) {
    	cin >> a[i];

    	if(a[i] > x) {
    		x = a[i];
    		maxIndex = i;
    	}

    	if(a[i] < y) {
    		y = a[i];
    		minIndex = i;
    	}
    }

    int distance = 0;
    distance = max(max(minIndex - 0, (n-1) - minIndex), max(maxIndex - 0, (n-1) - maxIndex));

    cout << distance << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}