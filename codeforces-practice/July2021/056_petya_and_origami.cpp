//
//   Codeforces - A. Petya and Origami
//   https://codeforces.com/problemset/problem/1080/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> x = { n*2 , n*5, n*8 };
    int total = 0;

    for(int i = 0; i < x.size(); i++) {
    	total+= (x[i]%k == 0 ? x[i]/k : (x[i]/k) + 1);
    }
   	
   	cout << total << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}