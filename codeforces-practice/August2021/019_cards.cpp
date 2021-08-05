//
//   Codeforces - A. Cards
//   https://codeforces.com/problemset/problem/1220/A
//

// frequency of z will give all the 0 possible
// frequency of n will give all the 1 possible

// To get highest in binarry notation, all 1 should be on left followed by all 0

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    map<char, int> cards;

    for(int i = 0; i < n; i++) {
    	cards[s[i]]++;
    }

    for(int i = 0; i < cards['n']; i++) {
    	cout << 1 << " ";
    }
    for(int i = 0; i < cards['z']; i++) {
    	cout << 0 << " ";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}