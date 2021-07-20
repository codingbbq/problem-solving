//
//   Codeforces - A. New Year and Counting Cards
//   https://codeforces.com/problemset/problem/908/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int flip = 0;

    map<char, bool> vowels = { {'a', true }, {'e', true}, {'i', true}, {'o', true}, {'u', true} };
    for(int i = 0; i < s.size(); i++) {
    	if(vowels[s[i]]) {
    		flip++;
    	}

    	if(isdigit(s[i]) && (int)s[i]%2 != 0) {
    		flip++;
    	}  
    }

    cout << flip << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}