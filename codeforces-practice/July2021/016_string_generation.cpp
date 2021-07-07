//
//   Codeforces - A. String Generation
//   https://codeforces.com/problemset/problem/1461/A
//

#include <bits/stdc++.h>
using namespace std;

char genRandomChar(int cnt) {
	const char ch[3] = { 'c', 'b', 'a'};
	return ch[cnt];
}

void solve() {
    int t;
    cin >> t;

    while(t--) {
    	int n, k;
    	cin >> n >> k;
    	string s;

    	for(int i = 0; i < k; i++) {
    		s += 'a';
    	}

    	int indexCount = 0;
    	for(int i = 0; i<n -  k; i++) {
    		s += genRandomChar(indexCount);
    		indexCount++;
    		if(indexCount > 2) {
    			indexCount = 0;
    		}
    	}

    	cout << s << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}