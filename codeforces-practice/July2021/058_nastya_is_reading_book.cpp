//
//   Codeforces - A. Nastya Is Reading a Book
//   https://codeforces.com/problemset/problem/1136/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;


    vector<int> last(n); // keep track of the last page in a chapter.

    for(int i = 0; i < n; i++){
    	int l, r;
    	cin >> l >> r;
    	last[i] = r;
    }

    int marked;
    cin >> marked; // Page that is unfinished by Nastya

    for(int i = 0; i < n; i++) {
    	if(marked <= last[i]) {
    		cout << n - i; // Total chapters remain
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