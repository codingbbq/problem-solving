//
//   Codeforces - A. The Rank
//   https://codeforces.com/problemset/problem/1017/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int thomas = 0;
    vector<int> x;

    for(int i = 1; i <= n; i++) {
    	int total = 0;
    	int a, b, c, d;
    	cin >> a >> b >> c >> d;

    	total += a + b + c + d;
    	if(i == 1) {
    		thomas = total;
    	}
    	x.push_back(total);
    }

    sort(x.begin(), x.end(), greater<int>());

    for(int i = 0; i < x.size(); i++) {
    	if(x[i] == thomas) {
    		cout << i+1 << "\n";
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